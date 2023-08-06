// sets
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(9);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Element present or not : " << s.count(5);
    cout << endl;
    cout << "Element present or not : " << s.count(4);
    cout << endl;
    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << " ";
    }
    cout<<endl;
    set<int>::iterator name = s.begin();
    name++;
    s.erase(name);
      for (int i : s)
    {
        cout << i << " ";
    }

    return 0;
}