#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, i, sqrtn;
    cout << "请输入一个整数：";
    cin >> n;

    if (n < 0)
    {
        cout << "输入的数据有误！！！" << endl;
    }

    for (sqrtn = sqrt((double)n), i = 2; i < sqrtn; i++)

        if (n % i == 0)
            break;
    if (n > 2 && i > sqrtn)
        cout << n << "是素数" << endl;
    else
        cout << n << "不是素数" << endl;

    return 0;
}