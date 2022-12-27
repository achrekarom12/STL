#include<bits/stdc++.h>
using namespace std;

int main(){
    // Double ended queue or Dequeue in STL

    // deque<type> name;
    deque<int> d;

    // push operations
    d.push_back(2);         // insert element at end
    d.push_front(1);        // insert element at start

    for(int i:d){
        cout << i << " ";
    }cout << endl;    

    d.push_front(3);
    d.push_back(4);

    for(int i:d){
        cout << i << " ";
    }cout << endl;  

    // size of dequeue
    cout << d.size() <<endl;

    // pop operation
    d.pop_back();

    for(int i:d){
        cout << i << " ";
    }cout << endl;  

    d.pop_front();

    for(int i:d){
        cout << i << " ";
    }cout << endl;  

    // element at particular pos
    cout << "At index 1: "<< d.at(1) <<endl;

    d.push_front(4);
    d.push_front(6);
    d.push_front(7);
    d.push_front(12);

    // first and last element
    cout << "First: "<< d.front() <<endl;
    cout << "last: "<< d.back() <<endl;

    // empty or not
    cout << d.empty() <<endl;

    // erase
    cout << "Before: "<< d.size() <<endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After: "<< d.size() <<endl;

    for(int i:d){
        cout <<i <<" ";
    }cout <<endl;

}

/*

Output:
1 2 
3 1 2 4 
4
3 1 2 
1 2 
At index 1: 2
First: 12
last: 2
0
Before: 6
After: 5
7 6 4 1 2 

*/
