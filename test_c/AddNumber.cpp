#include <iostream>

using namespace std;

int main()
{
    double d[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
    double x;
    int i, n;
    n = 8;

    for (i = 0; i < n; i++)
    {
        cout << d[i] << "\t";
        cout << endl;
    }
    cout << "请输入实数：";
    cin >> x;
    for (i = n - 1; i >= 0 && x < d[i]; i--)
    {
        d[i + 1] = d[i];
    }
    d[i + 1] = x;
    cout<<d[i+1]<<endl;
    cout<<"============="<<endl;
    n++;

    cout << "输入实数:" << x << "后数组为\n";
    for (i = 0; i < n; i++)
        cout << d[i] << "\t";
    cout << endl;

    return 0;
}