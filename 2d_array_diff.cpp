#include <iostream>
using namespace std;

int main()
{
    // For diffrent diffrent number of rows and column

    int rows,col;
    cin >> rows >> col;

    // Creating 2d array
    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];
    }

    // creation done

    // taking input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    //releasing memory
    
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    delete []arr;

    return 0;
}