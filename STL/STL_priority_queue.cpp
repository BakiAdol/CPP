#include <bits/stdc++.h>

/**
 * STL Priority queue is a container adaptor. Vector used inside it
 * Get element in constant time and insert in logarithomic time
*/

using namespace std;

template<typename T>
void Print(T &pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

class Compare{
    public:
    bool operator()(pair<int,string> &a, pair<int,string> &b)
    {
        if(b.first>a.first) return true;
        if(b.first==a.first) return b.second<=a.second;
        return false;
    }
};

int main()
{
    priority_queue<int> pq;
    pq.push(10); // push element
    for(int x:{1,5,9,7,3,4,6,8,2})
    {
        pq.push(x);
    }
    Print(pq);
    pq.pop(); // remove top element

    // comparison take data type, container and comparetor
    priority_queue<int,vector<int>,greater<int>> pq2;
    for(int x:{1,5,9,7,3,4,6,8,2})
    {
        pq2.push(x);
    }
    Print(pq2);

    // user define comparetor using lamda
    auto cmp = [](int a, int b){return a>b;};
    priority_queue<int,vector<int>,decltype(cmp)> pq3(cmp);
    for(int x:{1,5,9,7,3,8,2})
    {
        pq3.push(x);
    }
    Print(pq3);

    // user define comparetor using class/operator overloading
    priority_queue<pair<int,string>,vector<pair<int,string>>,Compare> pq4;
    for(auto x:{make_pair(6,"zz"),make_pair(5,"ab"),make_pair(9,"db"),make_pair(9,"bc")})
    {
        pq4.push(x);
    }

    while(!pq4.empty())
    {
        cout << pq4.top().second << " " << pq4.top().first << endl;
        pq4.pop();
    }
    
    return 0;
}