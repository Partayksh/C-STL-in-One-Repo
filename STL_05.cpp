// Stack
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // We can see only top element.
    cout << "Top element is : " << s.top() << endl;
    cout << "size is : " << s.size() << endl;
    s.pop();
    cout << "size after pop is : " << s.size() << endl;
    return 0;
}