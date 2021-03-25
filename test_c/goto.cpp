#include <iostream>
using namespace std;

int main()
{
    int x, sum = 0;
again:
    cin >> x;
    if (x <= 0)
        goto end;
    sum += x;
    goto again;
end:
    cout << "sum=" << sum << endl;
    return 0;
}