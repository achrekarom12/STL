#include<bits/stdc++.h>
using namespace std;

int main(){
    // Sets in STL
    // Unique elements and do not allowed to modify elements of set

    //set<type> name;

    set<int> s;

    s.insert(6);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);

    for (int i:s){
        cout << i << " ";
    }cout <<endl;           // comes in sorted order 


    

    set<int>::iterator it = s.begin();

    s.erase(it);
    // s.erase(s.begin() + 2);   this won't work 

    for (int i:s){
        cout << i << " ";
    }cout <<endl; 


    cout<<"Count of 5: "<<s.count(5) <<endl;        // basically checks whether the number is present or not

    set<int>::iterator itr = s.find(5);

    cout<<"5 is present at: "<<*itr<<endl;


    return 0;
}


/*

Output:
1 2 3 4 5 6 
2 3 4 5 6 
Count of 5: 1
5 is present at: 5

*/
