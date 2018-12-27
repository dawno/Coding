#include <queue>
#include <iostream>
using namespace std;

struct node
{
    int level;
    float profit;
    float weight;
    float bound;
};

float bound(node u, int n, float W, vector<float> pVa, vector<float> wVa)
{
    int j = 0, k = 0;
    float totweight = 0;
    float result = 0;

    if (u.weight >= W)
    {
        return 0;
    }
    else
    {
        result = u.profit;
        j = u.level + 1;
        totweight = u.weight;

        while ((j < n) && (totweight + wVa[j] <= W))
        {
            totweight = totweight + wVa[j];
            result = result + pVa[j];
            j++;
        }

        k = j;

        if (k < n)
        {
            result = result + (W - totweight) * pVa[k]/wVa[k];
        }
        return result;
    }
}

float knapsack(int n, float p[], float w[], float W)
{
    queue<node> Q;
    node u, v;
    vector<float> pV;
    vector<float> wV;
    Q.empty();

    for (int i = 0; i < n; i++)
    {
        pV.push_back(p[i]);
        wV.push_back(w[i]);
    }

    v.level = -1;
    v.profit = 0;
    v.weight = 0;

    float maxProfit = 0;

    //v.bound = bound(v, n, W, pV, wV);
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

        u.weight = v.weight + w[u.level];
        u.profit = v.profit + p[u.level];

        u.bound = bound(u, n, W, pV, wV);

        if (u.weight <= W && u.profit > maxProfit)
        {
            maxProfit = u.profit;
        }

        if (u.bound > maxProfit)
        {
            Q.push(u);
        }

        u.weight = v.weight;
        u.profit = v.profit;

        u.bound = bound(u, n, W, pV, wV);

        if (u.bound > maxProfit)
        {
            Q.push(u);
        }
    }
    return maxProfit;
}

int main()
{
    //int maxProfit;
    int n = 12;
    float W = 1000000;
    float d= 12.5;
    float p[] = {0.0887,0.1856,0.2307,0.1522,0.0532,0.0250,0.1409,0.2541,0.1147,0.2660,0.2933,0.0686};
    float w[] = {57247,98732,134928,77275,29240,15440,70820,139603,63718,143807,190457,40572};

    float k= knapsack(n, p, w, W) ;
    k=k+12.5;
    cout<<k;

    //system("PAUSE");
}
