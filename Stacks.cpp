#include<bits/stdc++.h>
using namespace std;

int main(){
    // Stacks in STL

    // stack<type> name;
    stack<string> friends;

    // push
    friends.push("M");
    friends.push("R");
    friends.push("S");
    friends.push("D");
    friends.push("K");
    friends.push("N");

    // top element
    cout << "Top: "<< friends.top() <<endl;

    // pop 
    friends.pop();
    cout << "Top: "<< friends.top() <<endl;

    // size
    cout <<"Size -> "<< friends.size() <<endl;

    // empty or not
    cout <<friends.empty() <<endl;

}

/*

Output:
Top: N
Top: K
Size -> 5
0

*/
