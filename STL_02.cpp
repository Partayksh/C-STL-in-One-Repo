// Vector
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;
int main()
{
    // STL Vector.
    vector<int> v;
    cout << "capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;
    v.push_back(1);
    cout << "capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;
    v.push_back(2);
    cout << "capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;
    v.push_back(3);
    cout << "capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl
         << endl;
    ;
    cout<<v.empty()<<endl;
    cout << "First Element : " << v.front() << endl;
    cout << "last Element : " << v.back() << endl;
    cout << " Element  at index 1: " << v.at(1) << endl;
    cout << "Element  at index 4: " << v.at(2) << endl;
    // POP
    cout << "Before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.clear();
    cout << "After clear." << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "size : " << v.size() << endl;
    cout << "Clear done. " << endl;
    //    copy a element vector
    vector <int> a(5,1);
    vector<int> newvecto(a);
    for(int i:newvecto){
        cout<<i<<" ";
    }

    return 0;
}