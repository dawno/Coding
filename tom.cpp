// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
double solution(int x1, int y1, int r1, int x2, int y2, int r2) {
    double dsq= (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    double radSumSq = (r1 + r2) * (r1 + r2);
    double d= sqrt(distsq);
    double r1sq= pow(r1,2);
    double r2sq= pow(r2,2);
    double d1= (r1sq-r2sq+dsq)/(2*d);
    double d2 = d-d1;
    double d1sq = pow(d1,2);
    double d2sq= pow(d2,2);
    double X=  sqrt(r1sq-d1sq);
    double Y = sqrt(r2sq-d2sq);
    if(dsq<radSumsq){
        double A= r1sq* acos(d1/r1);
        double B = d1*sqrt(X);
        double C= r2sq * acos(d2/r2);
        double D =d2* sqrt(Y);
        double result = A-B+C-D;
        return D;
    }
        else {
            return 0.0;
        }
}
