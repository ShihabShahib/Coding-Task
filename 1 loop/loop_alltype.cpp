#include <iostream>
using namespace std;
void blackbox(int x,int len){ //using for recursion
    if(x>len){
        return;
    }
    else{
    cout<<x<<" ";
    blackbox(++x,len);
    }
}
int main() {
    cout << "Enter n:";
    int n;
    cin>>n;
    cout<<"For loop: ";
    //i prints, 0 to n
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n"<<"While loop: "; // for new line \n
    int j=0;
    while(j<=n){
        cout<<j<<" ";
        j++;
    }
    cout<<"\n"<<"Do While loop: ";
    int k=0;
    do{
        cout<<k<<" ";
        k++;
    }while(k<=n);
    cout<<"\n"<<"Recursion: ";
    blackbox(0,n);
    return 0;
}
