#include<bits/stdc++.h>
using namespace std;

int main(){
    // Some imp algos in STL

    vector<int> v;

    v.push_back(10);
    v.push_back(14);
    v.push_back(18);
    v.push_back(22);
    v.push_back(30);

    cout << "Binary Search: " <<endl;
    cout<<"Element is present or not? "<<binary_search(v.begin(),v.end(), 12) <<endl;
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(), 30) - v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(), 30) - v.begin()<<endl;

    // Max and Min
    int a = 127;
    int b = 982;

    cout << "Max: "<<max(a, b)<<endl;
    cout << "Min: "<<min(a, b)<<endl;

    swap(a, b);
    cout << "a: "<< a << " "<< "b: "<<b<<endl;

    string s = "Hello World";

    reverse(s.begin(), s.end());

    cout<< s <<endl;

    rotate(v.begin(), v.begin()+1, v.end());

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort : heap sort, quick sort and insertion sort (INTRO Sort) 

    sort(v.begin(), v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}


/*

Output:
Binary Search: 
Element is present or not? 0
Lower bound: 4
Upper bound: 5
Max: 982
Min: 127
a: 982 b: 127
dlroW olleH
14 18 22 30 10 
10 14 18 22 30 

*/
