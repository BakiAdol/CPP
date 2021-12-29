// STL array
// Syntax: std:array<Type,Size> arr;

/**
 * Note:
 * std:array is fixed size container and size needs in compile time
 * std:array is value type not reference type
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 10> a; // stl array declare

    // array initialize
    array<int,5> arr={1,2,3,4,5}; // initializer list
    array<int,5> arr2 {1,2,3,4,5}; // uniform initializer

    // initializer list is not possible to regular array
    
    //Element access:
    /**
     * at(pos) : return the valude of array in position pos
     * [pos] : return the value of array position pos
     * front() : return first element
     * back() : return last element
     * data() : return address of the array
    */

    //Iterators:
    /**
     * begin() : return begining iterator
     * end() : return ending iterator
     * rbegin(): return reverse begining iterator
     * rend() : return reverse ending iterator
    */
    
    //Capacity:
    /**
     * empty() : check container is empty or not
     * size() : return number of element present in this array
     * max_size() : return the size of the array
    */

    //Operations:
    /**
     * fill(val) : fill the array by this value val
     * swap() : swap contents, arr1.swap(arr2)
    */

    //2D array
    array<array<int,2>,2> arr2d {{{1,2},{2,3}}};
    return 0;
}