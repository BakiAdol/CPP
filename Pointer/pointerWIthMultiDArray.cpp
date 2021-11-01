#include <bits/stdc++.h>

using namespace std;

void TwoDDynamicArrayPrint(int **arr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void TwoDArrayPrint(int *ptr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << *(ptr+(i*c+j)) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows=2;
    int cols=2;

    int **table = new int*[rows]; // here rows pointer and table point first rows address
    *table = new int[cols]; // *table point a array
    *(table+1) = new int[cols];

    //now table is similar to int table[rows][cols]

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            table[i][j] = i+j;
        }
    }

    TwoDDynamicArrayPrint(table,rows,cols);
    // unallocate memory for table as order you allocate
    for(int i=0;i<rows;i++)
    {
        delete[]table[i];
    }
    // not deallocate those memory is called memory leaks, because our memory is not unlimited so deallocate memories
    delete[]table;
    table = NULL;

    int arr[3][3]={{1,5,9},{7,5,3},{4,5,6}}; // this is static normal 2d array
    TwoDArrayPrint((int*)arr,3,3); // cast array as pointer
    
    return 0;
}