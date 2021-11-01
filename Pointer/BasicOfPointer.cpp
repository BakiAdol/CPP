#include <bits/stdc++.h>

using namespace std;

/**
 * Variable is a container that store value.
 * Pointer is also a container but insetd of storing value it store address.
 * 
*/

int main()
{
    int var = 5;
    cout << "Value of var is " << var << endl;
    cout << "Address of var is " << &var << endl;

    int *ptr = &var; // ptr is a pointer that store address of var
    cout << "Value of ptr is " << ptr << endl;
    cout << "Value of the address which store ptr is " << *ptr << endl; // this *prt now works as var
    *ptr = 10; // any changes of *ptr is change the addres value so var also change
    cout << "var is " << var << " and *ptr is " << *ptr << endl;
    return 0;
}