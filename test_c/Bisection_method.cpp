#include <iostream>
#include <cmath>
using namespace std;

//定义误差常量
const double eps = 1e-7;

int main()
{
    double a, b, mid, fa, fmid;
    a = 0;
    fa = sin(a) - 5 + exp(2 * mid - 1);
    b = 3;
    while (true)
    {
        mid = (a + b) / 2;
        fmid = sin(mid) - 5 + exp(2 * mid - 1);
        if (fabs(fmid) < eps || fabs(b - a) < eps)
            break;
        else if (fa * fmid > 0)
            a = mid;
        else
            b = mid;
    }
    cout << "sin(x)-5+exp(2x-1)=0的解是x=" << mid << endl;
    return 0;
}