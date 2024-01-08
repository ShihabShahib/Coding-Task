#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

//main function
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a;
    vector<int> v; //declare a vector
    cout<<"Enter n inputs:";
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a); //adds integer a to the vector
    }
    cout<<"print: ";
    for(auto &p : v){ // p is a reference of each element in v container 
        cout<<p<<" ";
    }
    
    cout<<endl<<"sort: ";
    for(auto &p : v){
        sort(v.begin(),v.end()); //sorting 
        cout<<p<<" ";
    }
}
