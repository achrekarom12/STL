#include<bits/stdc++.h>
using namespace std;

int main(){
    // Lists in STL

    // list<type> name;

    list<int> l;

    // push operations
    l.push_back(1);
    l.push_front(3);

    for(int i: l){
        cout <<i <<" ";
    }cout <<endl;

    l.push_front(13);
    l.push_front(11);
    l.push_front(7);
    l.push_front(9);
    l.push_front(5);

    for(int i: l){
        cout <<i <<" ";
    }cout <<endl;

    // same pop operations
    l.pop_front();
    l.pop_back();

    for(int i: l){
        cout <<i <<" ";
    }cout <<endl;


    // erase: we can also give range
    l.erase(l.begin());

    for(int i: l){
        cout <<i <<" ";
    }cout <<endl;

    // size
    cout <<"Size: "<< l.size() <<endl;

    // first and last element
    cout << "First: "<< l.front() <<endl;
    cout << "last: "<< l.back() <<endl;

    // empty or not
    cout << l.empty() <<endl;

    // copy a list into another list
    list<int> bye(l);
    for(int i: bye){
        cout <<i <<" ";
    }cout <<endl;

    // already initialised list
    list<int> hey(8, 11);
    for(int i: hey){
        cout <<i <<" ";
    }cout <<endl;

}


/*

Output:
3 1 
5 9 7 11 13 3 1 
9 7 11 13 3 
7 11 13 3 
Size: 4
First: 7
last: 3
0
7 11 13 3 
11 11 11 11 11 11 11 11 

*/
