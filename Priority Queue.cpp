#include<bits/stdc++.h>
using namespace std;

int main(){
    // Prority Queue in STL

    // priority_queue<type> name;

    priority_queue<int> max;     // max heap
    priority_queue<int, vector<int>, greater<int>> min;         // min heap 


    // push
    max.push(4);
    max.push(2);
    max.push(1);
    max.push(5);
    max.push(3);
    max.push(7);
    max.push(6);

    cout << max.size() <<endl;

    int max_size = max.size();

    for (int i=0; i < max_size; i++){
        cout << max.top() <<" ";
        max.pop();
    }               // giving max element first


    
    min.push(4);
    min.push(2);
    min.push(1);
    min.push(5);
    min.push(3);
    min.push(7);
    min.push(6);

    cout <<endl;
    cout << min.size() <<endl;

    int min_size = min.size();

    vector<int> sort_arr(min_size, 0);

    for (int i=0; i < min_size; i++){
        sort_arr[i] = min.top();
        min.pop();
    }
    cout << endl << "Sorted" <<endl;
    for (int j:sort_arr){
        cout << j <<" ";
    }cout<<endl;

    cout <<"Is empty?  " << min.empty() <<endl;
    return 0;
}
