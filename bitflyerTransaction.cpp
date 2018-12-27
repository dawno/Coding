#include <queue>
#include <iostream>
using namespace std;
// I have used the Branch and Bound technique to find the solution.
// structure of each and every node present in the space traverse.
struct node
{
    int level;
    float fees;
    float size;
    float bound;
};
// This bound function I have created so that we dont have to traverse through every node to find the maximum fees.
// This bound function will find out the maximum bound so that only selected nodes are to be traversed.
float bound(node u, int n, float max_size, vector<float> fVa, vector<float> sVa)
{
    int j = 0, k = 0;
    float totalfees = 0;
    float result = 0;

    if (u.size >= max_size)
    {
        return 0;
    }
    else
    {
        result = u.fees;
        j = u.level + 1;
        totalfees = u.size;

        while ((j < n) && (totalfees + sVa[j] <= max_size))
        {
            totalfees = totalfees + sVa[j];
            result = result + fVa[j];
            j++;
        }

        k = j;

        if (k < n)
        {
            // I have used the grredy approach which is used in fractional knapsack to find out the maximum bound.
            result = result + (max_size - totalfees) * fVa[k]/sVa[k];
        }
        return result;
    }
}
// This is the transaction function which will return the maximum transactions.
float transactions(int n, float f[], float s[], float max_size)
{
    queue<node> Q;
    node u, v;
    vector<float> fV;
    vector<float> sV;
    Q.empty();

    for (int i = 0; i < n; i++)
    {
        fV.push_back(f[i]);
        sV.push_back(s[i]);
    }

    v.level = -1;
    v.fees = 0;
    v.size = 0;

    float maxProfit = 0;


    Q.push(v);

    while (!Q.empty())
    {
        v = Q.front();
        Q.pop();

        if (v.level == -1)
        {
            u.level = 0;
        }
        else if (v.level != (n - 1))
        {
            u.level = v.level + 1;
        }

        u.size = v.size + s[u.level];
        u.fees = v.fees + f[u.level];

        u.bound = bound(u, n, max_size, fV, sV);

        if (u.size <= max_size && u.fees > maxProfit)
        {
            maxProfit = u.fees;
        }

        if (u.bound > maxProfit)
        {
            Q.push(u);
        }

        u.size = v.size;
        u.fees= v.fees;

        u.bound = bound(u, n, max_size, fV, sV);

        if (u.bound > maxProfit)
        {
            Q.push(u);
        }
    }
    return maxProfit;
}

int main()
{

    int n = 12;
    float max_size = 1000000;
    float d= 12.5;// Reward for mining.
    float fees[] = {0.0887,0.1856,0.2307,0.1522,0.0532,0.0250,0.1409,0.2541,0.1147,0.2660,0.2933,0.0686};
    float size[] = {57247,98732,134928,77275,29240,15440,70820,139603,63718,143807,190457,40572};

    float k= transactions(n, fees, size, max_size) ;
    k=k+d;
    cout<<k<<" "<<"BTC"<<endl;


}
