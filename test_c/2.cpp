//字符串长度
#include <iostream>

using namespace std;

int main()
{
    int i;
    char s[] = {"this is a book!"};
    for (i = 0; s[i] != '\0'; i++)
        ;

    cout << "\"" << s << "\"的长度是：" << i << endl;

    return 0;
}