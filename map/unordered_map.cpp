#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
// 使用键查询值时，时间复杂度为O(1),如果使用迭代器遍历容器，复杂度为O(n)，底层使用哈希表实现，同时存储的键值对是无序的。
int main()
{
    //创建并初始化一个 unordered_map 容器，其存储的 <string,string> 类型的键值对
    std::unordered_map<std::string, std::string> testMap{
        {"Rookie", "从头而来"},
        {"C++", "面向对象"},
        {"C语言", "h面向过程"}};
    //查找指定键对应的值，效率比关联式容器高
    string str = testMap.at("Rookie");
    cout << "str = " << str << endl;
    cout<<"==========="<<endl;

    //使用迭代器遍历哈希容器，效率不如关联式容器
    for (auto iter = testMap.begin(); iter != testMap.end(); ++iter)
    {
        //pair 类型键值对分为 2 部分
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}   