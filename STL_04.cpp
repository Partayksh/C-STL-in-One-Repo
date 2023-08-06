// List
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Dobley linked list
    list<int> l;

    l.push_back(2);
    l.push_front(1);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Before Erease : "<<l.size()<<endl;
    l.erase(l.begin());
     cout << endl;
     cout << "After Erease : "<<l.size()<<endl;
     for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}