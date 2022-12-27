#include<bits/stdc++.h>
using namespace std;

int main(){
    // Queue in STL

    //queue<type> name;

    queue<string> friends;

    // push
    friends.push("M");
    friends.push("R");
    friends.push("S");
    friends.push("D");
    friends.push("K");
    friends.push("N");

    // you can not iterate through stack to print it

    // pop
    cout <<"Front: "<< friends.front()<<endl;
    friends.pop();
    cout <<"Front: "<< friends.front()<<endl;

    // size
    cout <<"Size: "<< friends.size() <<endl;

    // empty or not
    cout <<friends.empty() <<endl;


}
/*

Output:
Front: M
Front: R
Size: 5
0

*/
