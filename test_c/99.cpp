#include <iostream>
using namespace std;

int main()
{

    int i, j;
    cout << "\t";
    for (j = 1; j <=9; j++)
        cout << "   " << j;
    cout << endl;
    for (i = 1; i <= 9; i++)
    {
        cout << i << "\t";
        for (j = 1; j <= i; j++)
        
            if (j * i >= 10)
                cout << "  " << j * i;
            else
                cout << "   " << j * i;
            cout << endl;
        
    }

    return 0;
}