#include<bits/stdc++.h>
using namespace std;

int main(){
    // vectors in STL

    // How arrays and vectors differs?
    /* If a vector is defined to be of size 7 and if 8th element is added then
    it will create a new vector. Will copy the old vector contents in new
    and then will dump old vector. A new vector will be double the size of 
    old vector..
    Arrays ---> static
    Vectro ---> dynamic*/ 

    // vector<type> name;
    vector<int> team;

    // vector<type> name(size, initialise_with);
    vector<int> cat(8, 1);
    for (int i:cat){
        cout << i <<" ";
    }cout<<endl;

    // copy one vector into another
    vector<int> dog(cat);
    for (int i:dog){
        cout << i <<" ";
    }cout<<endl;

    // capacity of vector
    cout << "Capacity -> " << team.capacity() <<endl;

    // size of vector
    cout << "Size -> " << team.size() <<endl;

    // push an element into vector
    team.push_back(12);
    cout << "Size -> " << team.capacity() <<endl;
    
    team.push_back(16);
    cout << "Size -> " << team.capacity() <<endl;

    team.push_back(20);
    cout << "Size -> " << team.capacity() <<endl;

    team.push_back(24);
    cout << "Size -> " << team.capacity() <<endl;

    // size gets doubled now

    // print vector
    for (int i = 0; i < team.size(); i++){
        cout << team[i] <<" ";
    }
    cout << endl;

    // element at particular pos
    cout << "Element at second index: "<< team.at(2) <<endl;

    // first and last element
    cout << team.front() << endl;
    cout << team.back() << endl;

    // pop an element
    cout << "Before: "<< endl;
    for (int i:team){
        cout << i <<" ";
    }cout<<endl;

    team.pop_back();

    cout << "After Pop: "<< endl;
    for (int i:team){
        cout << i <<" ";
    }cout<<endl;

    team.push_back(28);

    cout << "After Push: "<< endl;
    for (int i:team){
        cout << i <<" ";
    }cout<<endl;

    // clear the vector
    // note: it will clear the size not the capacity of vector

    cout << "Before Clear: "<< endl;
    cout << team.size() <<endl;

    team.clear();

    cout << "After Clear: "<< endl;
    cout << team.size() <<endl;

}

/*

Output:
1 1 1 1 1 1 1 1 
1 1 1 1 1 1 1 1 
Capacity -> 0
Size -> 0
Size -> 1
Size -> 2
Size -> 4
Size -> 4
12 16 20 24 
Element at second index: 20
12
24
Before: 
12 16 20 24 
After Pop: 
12 16 20 
After Push: 
12 16 20 28 
Before Clear: 
4
After Clear: 
0

*/
