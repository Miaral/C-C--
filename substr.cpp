#include<iostream>

using namespace std;

int main(){

    // substr 是C++语言函数，主要功能是复制子字符串，要求从指定位置开始，并具有指定长度。
    // 如果没有指定长度_Count或_Count+_Off超出源字符串的长度，则子字符串将延续到源字符串的结尾。
    string str1 = "hello";
    cout<<"str1 is :"<<str1<<endl;
    
    basic_string<char> str2 = str1.substr(2,3);
    cout<<"The substring str1 copied is:"<<str2<<endl;

    basic_string<char>str3=str1.substr();
    cout<<"The default substring str3 is:"<<endl;
    cout<<str3<<endl;

    return 0;
}