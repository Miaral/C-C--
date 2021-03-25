#include <iostream>

using namespace std;

int main()
{
    string s = "IV";
    int n = romanToInt(s);
    cout << n << endl;
    return 0;
}
int romanToInt(string s)
{
    int tagVal[256];
    tagVal['I'] = 1;
    tagVal['V'] = 5;
    tagVal['X'] = 10;
    tagVal['C'] = 100;
    tagVal['M'] = 1000;
    tagVal['L'] = 50;
    tagVal['D'] = 500;
    int val = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 >= s.length() || tagVal[s[i + 1]] <= tagVal[s[i]])
            val += tagVal[s[i]];
        else
            val -= tagVal[s[i]];
    }
    return val;
}