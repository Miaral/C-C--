/*
    对于一个由俩字节组成的16位整数，在内存中存储着俩个字节的方法有俩种
    一种是将低序字节存储在起始地址，这称为小端字节序Little—Endian
    另一种方法是将高序字节存储在起始地址，这称为大端字节序Big-Endian
*/
#include <iostream>

using namespace std;
// 联合体成员共用一个空间
union myUnion
{
    int a;
    char b;
};

int is_little_endian(void)
{
    union myUnion u1;
    u1.a = 0x12345678;
    if (0x78 == u1.b)
        return 1;
    else if (0x12 == u1.b)
        return 0;
    return 1;
}

int is_big_endian(void)
{
    int a = 0x12345678;
    char b = *((char *)(&a));
    if (0x78 == b)
        return 1;
    else if (0x12 == b)
        return 0;
    return 1;
}

int main(void)
{
    // int i = is_big_endian();
    int i = is_little_endian();
    if (i == 1)
    {
        cout << "小端模式\n";
    }
    else
    {
        cout << "大端模式\n";
    }
    return 0;
}
