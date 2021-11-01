#include <bits/stdc++.h>

using namespace std;

/**
 * void pointer is a pointer that also store address but it can store any type of data address;
 * size of a pointer is same for any datatype it's depends on OS, 32bit Sys is 4bytes and 64bit Sys is 8bytes
 * before using void pointer you must be type cast this void pointer
*/

void print(void *ptr, char type)
{
    // void *ptr, it can store any data type of address 
    cout << "Value is ";
    switch (type)
    {
    case 'i':
        cout << *(int*)ptr; // cast ptr to int ptr
        break;
    case 'c':
        cout << *(char*)ptr; // cast ptr to char ptr
        break;
    case 'd':
        cout << *(double*)ptr; // cast ptr to double ptr
        break;
    }
    cout << endl;
}

int main()
{
    int i = 5;
    print(&i,'i');

    double d = 3.14;
    print(&d,'d');

    char c = 'c';
    print(&c,'c');

    // array like pointer
    int arr[5] = {1,5,9,7,3};
    cout << "Address of the array or address of first element " << arr << endl;
    cout << "Address of second element " << arr+1 << endl;
    cout << "Valude of first element " << *arr << endl;
    cout << "Valude of third element " << *(arr+2) << endl;

    return 0;
}