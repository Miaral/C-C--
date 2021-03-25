#include <iostream>
//不使用开方方法
using namespace std;

int main()
{

    int n, i;
    cout << "请输入一个整数：";
    cin >> n;

    if (n < 0)
    {
        cout << "输入的数据有误！！！" << endl;
        return 1;
    }

    for(i=2;i<n;i++)
        if(n%i==0)break;
        if(n>2&&i>n/2) cout<<n<<"是素数"<<endl;
        else cout<<n<<"不是素数"<<endl;
    
    // for (sqrtn = sqrt((double)n), i = 2; i < sqrtn; i++)
    // {
    //     if (n % i == 0)
    //         break;
    //     if (n > 2 && i > sqrtn)
    //         cout << n << "是素数" << endl;
    //     else
    //         cout << n << "不是素数" << endl;
    // }

    return 0;
}