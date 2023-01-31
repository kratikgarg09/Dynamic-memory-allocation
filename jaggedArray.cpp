#include <iostream>
using namespace std;

int main()
{
cout << "Enter the number of arrays in the jagged array : ";
    int n;
    cin >> n;
    int** arr = new int*[n];
    int* sizes = new int[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number of elements in the first sub-array: ";
        cin >> sizes[i];
        arr[i] = new int[sizes[i]];
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<sizes[i];j++) {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<sizes[i];j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}