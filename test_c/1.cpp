#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a[4][4], b[4][4], c[4][4];
    int i, j, k, s;
    cout << "输入第一个4*4矩阵：" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "输入第一个4*4矩阵：" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> b[i][j];
        }
    }
    //计算矩阵乘积
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            s = 0;
            for (k = 0; k < 4; k++)
            {
                s += a[i][k] * b[k][j];
                c[i][j] = s;
            }
        }
    }
    cout << "矩阵乘积是:" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)

            cout << c[i][j] << "\t";
        cout << endl;
    }
    return 0;
}