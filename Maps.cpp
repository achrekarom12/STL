#include<bits/stdc++.h>
using namespace std;

int main(){
    // Maps in STL

    // Key-value pair, unique keys, single key will point to only one value


    map<int, string> m;

    m[1] = "Cat";
    m[3] = "Dog";
    m.insert({2, "Horse"});
    m[6] = "Fish";
    m[5] = "Cow";

    for (auto i:m){
        cout << i.first << " : " << i.second <<endl;
    }cout<<endl;

    // Gives in sorted order

    cout << "Count: " << m.count(12) <<endl;

    m.erase(2);
    for (auto i:m){
        cout << i.first << " : " << i.second <<endl;
    }cout<<endl;

    


    return 0;
}

/*

Output:
1 : Cat
2 : Horse
3 : Dog
5 : Cow
6 : Fish

Count: 0
1 : Cat
3 : Dog
5 : Cow
6 : Fish

*/
