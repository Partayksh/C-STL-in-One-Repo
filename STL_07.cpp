// Priority Queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // By default max_Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // Push Element in Max Heap
    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    maxi.push(2);
    cout << "Maxi is in Running State" << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        // Print max element
        cout << maxi.top() << " ";
        // Size is Decreasing
        maxi.pop();
    }

    // Mini
    cout << endl
         << "Now Mini is Running State " << endl;
    mini.push(1);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    int n1 = mini.size();
    for (int i = 0; i < n1; i++)
    {
        // Print max element
        cout << mini.top() << " ";
        // Size is Decreasing
        mini.pop();
    }
    cout << endl
         << "IsEmpty ->" << mini.empty();

    return 0;
}