// STL Array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    // Normal Array
    // int arr[20];

    // Stl Array
    array<int, 3> arr ;
    // Taking input from user.
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    // Printing the element of array.
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    // Operations
    cout<<"Element at index (no.) -> "<<arr.at(1)<<endl;
    cout<<"Is Elememt Empty -> "<<arr.empty()<<endl;
    cout<<"First element -> "<<arr.front()<<endl;
        cout<<"last element -> "<<arr.back()<<endl;

    return 0;
}