#include <iostream>
using namespace std;

int main()
{
    // For same number of rows and column


    int n;
    cin >> n;

    // Creating 2d array
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    
    // creation done

    // taking input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    
    // taking output 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}