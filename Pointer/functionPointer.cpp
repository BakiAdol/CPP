#include <bits/stdc++.h>

using namespace std;

/**
 * function pointer: point a function,
 * mainly used for passing function as a parameter
*/

bool ASC(int a, int b)
{
    return a<b;
}
bool DESC(int a, int b)
{
    return a>b;
}

void customSort(vector<int> &v,bool(*sortFun)(int,int)) // receive function pointer
{
    sort(v.begin(),v.end(),sortFun);
}

int main()
{
    vector<int> v = {1,5,9,7,5,3,4,5,6,8,5,2};

    customSort(v,ASC);
    cout << "Ascending order : ";
    for(int x:v) cout << x << " ";

    cout << endl;

    customSort(v,DESC);
    cout << "Decending order : ";
    for(int x:v) cout << x << " ";

    return 0;
}