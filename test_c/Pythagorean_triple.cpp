#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    for(a=1;a<=100;a++){
        for(b=1;b<=100;b++){
            for(c=1;c<=100;c++){
                if(c*c==a*a+b*b){
                    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<endl;
            }

            }
        }
    }
    return 0;
}
