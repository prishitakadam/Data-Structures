#include<bits/stdc++.h>
using namespace std;

//Display the Minimum Heap
void show(priority_queue<int, vector<int>, greater<int>> min_heap){
    cout<<"\nAvailable Memory Slots : \n";
    priority_queue<int, vector<int>, greater<int>> mh = min_heap;

    while (!mh.empty()){
        cout << " " << mh.top(); 
        mh.pop();
    }
    cout << endl;
}

int main(){

    bool loop = true;
    int ch, n, delloc_index;

    cout<<"Enter Size :";
    cin>>n;

    //Initializing the Minimum Heap using Priority Queue
    priority_queue<int, vector<int>, greater<int>> available_memory_slot;

    for(int i=0; i<n; i++){
        available_memory_slot.push(i);
    }

    //Printing the Heap
    show(available_memory_slot);

    while(loop){
        cout<<"\n1. Allocate\n2.Deallocate\n3.Exit\nEnter Option : ";
        cin>>ch;
        if(ch == 1){
                cout<<"Allocated : "<<available_memory_slot.top();
                available_memory_slot.pop();
                show(available_memory_slot);
        }
        else if(ch == 2){
                cout<<"Enter Deallocated Index : ";
                cin>>delloc_index;
                available_memory_slot.push(delloc_index);
                show(available_memory_slot);
        }
        else{
            loop = false;
        }
    }

    return 0;
}