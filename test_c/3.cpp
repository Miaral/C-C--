//字符串长度
//输入一行 统计单词的个数
#include <iostream>

using namespace std;

int main()
{
    char s[80];
    int i, count;
    cout << "请输入一行字符串:" << endl;
    cin.getline(s, 80);
    count = 0;
    i = 0;
    while (s[i])
    {
        if (!(s[i] >= 'A' && !s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'))
            i++;
        else
        {
            count++;
            while (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
                i++;
        }
    }
    cout << s << "\n"
         << "中包含" << count << "个单词" << endl;
    return 0;
}