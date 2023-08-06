// Queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Partayksh");
    q.push("Parveen");
    q.push("Tyagi");
    cout << "First Element is : " << q.front() << endl;
    q.pop();
    cout << "First Element is : " << q.front();
   

    return 0;
}