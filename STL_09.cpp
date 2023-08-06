// Map
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1]="partayksh";
    m[2]="parveeb";
    m[3]="tyagi";
    m[4]="kunal";

    for(auto i: m){
        cout<<i.first <<" "<<i.second<<endl;
    }
    m.erase(4);
    cout<<endl;
     for(auto i: m){
        cout<<i.first <<" "<<i.second<<endl;
    }
    return 0;
}