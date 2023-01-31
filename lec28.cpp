#include <iostream>
using namespace std;

// this function is pass by value

void update1(int u)
{
    u++;
}

// this function is pass by refrence

void update2(int &i)
{
    i++;
}


int main()
{

    /*
    int i = 5 ;

    // Creating a refrence variable called j

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

    int i = 4;
    cout << i << endl;

    update1(i);

    cout << i << endl;

    update2(i);

    cout << i << endl;
    return 0;
}