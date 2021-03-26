#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<int> vec;
    // for (int i = 0; i < 12; i++)
    // {
    //     vec.push_back(i);
    //     cout << vec[i] << "\t";
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     vec.pop_back();
    // }
    // cout << "\n"
    //      << endl;

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i]<<"\t";
    // }
    // cout<<endl;

    vector<int> a(5,9);
    // int b[] = {1, 2, 3, 4};
    cout << sizeof(a) / sizeof(a[0]) << endl;
    // // cout << sizeof(b) / sizeof(b[0]) << endl;
    cout<<a.size()<<endl;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ,";
    // }
    // cout<<endl;
    int b[]={1,23,15,46,74,13,5};
    vector<int>c(a.begin(),a.begin()+3);
    vector<int>d(b,b+4);
    // for(int i=0;i<c.size();i++){
    //     cout<<c[i]<<" ,";
    // }
      for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ,";
    }
    cout<<endl;
    cout<<"================="<<endl;
    vector<int>A;
    cout<<sizeof(A[0])<<"\n";
    cout<<sizeof(A)<<"\n";
    return 0;
}