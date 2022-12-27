#include<bits/stdc++.h>
using namespace std;

int main(){
    // arrays in STL

    // array<type, size> name;
    array<int, 5> friends = {10, 12, 14, 18, 24};

    // size of an array
    int size = friends.size();
    cout << size << endl;

    // printing elements
    for (int i = 0; i < size; i++){
        cout << friends[i] <<" ";
    }
    cout << endl;

    // element at particular index
    cout << "At index three: " << friends.at(3) << endl;

    // is array empty or not?
    cout << friends.empty() << endl;

    // first element
    cout << friends.front() << endl;

    // last element
    cout << friends.back() << endl;

    return 0;
}

/* 

Output:
5
10 12 14 18 24 
At index three: 18
0
10
24

*/
