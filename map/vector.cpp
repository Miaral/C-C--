#include <iostream>

#include <vector>
// 二维容器vector<vector>初始化方法
using namespace std;

int main()
{
    int size1 = 2, size2 = 4;
    vector<vector<int>> table(size1, vector<int>(size2, 0));
    for (int i = 0; i < table.size(); i++)
    {
        for (int j = 0; j < table[0].size(); j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}