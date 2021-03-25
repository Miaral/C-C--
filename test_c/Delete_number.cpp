//删除数组中某个数值
/*
用数组后续数值覆盖所要删除数值
*/
#include <iostream>

using namespace std;

int main()
{
    double d[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i, x, n;
    n = 8;

    for (i = 0; i < n; i++)
    {
        cout << d[i] << "\t";
    }
    cout << endl;
    cout << "请输入要删除的是第几个数（1~8):";
    cin >> x;

    if (x >= 1 && x <= 8)
    {
        for (i = x - 1; i < n - 1; i++)
        {
            d[i] = d[i + 1];
        }
        n--;
        cout << "删除后的数组为：" << endl;
        for (i = 0; i < n; i++)
        {
            cout << d[i] << "\t";
        }
        cout << endl;
    }
    else
        cout << "输入数据有误，请重试！！！" << endl;

    return 0;
}