// Algorithm.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a = 10;
    int b = 50;
    // Swapping
    cout << "Before swap is: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swap is: " << a << " " << b << endl;
    // Max
    cout << "Max is : " << max(a, b) << endl;
    // Min
    cout << "min is : " << min(a, b) << endl;
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    // Rotate.
    cout << "Before Rotate: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After Rotate: " << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // Sort
    cout << "After Sort: " << endl;
    sort(v.begin(),v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout<<endl;

    // Binary Search
    cout << "Binary  Search: " << binary_search(v.begin(), v.end(), 6) << endl;
    // Lower Bound
    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    // Upper Bound
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    string s = "Hello Partayksh";
    // Reverse
    cout << "Before Reverse is : " << s << endl;
    reverse(s.begin(), s.end());
    cout << "After Reverse is : " << s << endl;

    return 0;
}