#include <iostream>
using namespace std;

inline int getmax(int& a, int& b)
{
    return ((a < b) ? a : b);
}

int main()
{
    int a = 4;
    int b = 5;
    int ans = 0;

    ans = getmax(a,b);
    cout << ans << endl;

    a= ans+5;
    b = ans+19;

    ans = getmax(a,b);
    cout << ans << endl;

    return 0;
}