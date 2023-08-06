// Deque
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_front(0);
    d.push_back(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl
         << "After Pop " << endl;
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout<<endl;

// randon acces
cout<<"remdon acces : "<<d.at(1)<<endl;
cout<<"empty or not : "<<d.empty()<<endl;
cout<<"Before Erease "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+2);
cout<<"After Erease "<<d.size()<<endl;
for (int i : d)
    {
        // No any Element is present
        cout << i << " ";
    }


    return 0;
}