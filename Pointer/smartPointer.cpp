#include <bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){cout << "Constructor" << endl;}
    ~A(){cout << "Destructor" << endl;}
    void x(){cout << "xxxxxx" << endl;}
};

int main()
{
    // unique_ptr<A> ptr = make_unique<A>();
    // ptr->x();
    A a;
    a.x();
    return 0;
}