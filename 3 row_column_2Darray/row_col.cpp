#include <iostream>
using namespace std;

int main() {
    cout << "Enter n:";
    int n;
    cin >> n; //take input
    for (int i = 1; i <= n; i++) { //i is row
        for (int j = 1; j <= n; j++) { // j is column
            cout << n*(i-1)+j<<" "; //output
        }
        cout << endl; //when 1 row complete then new line
    }
    return 0;
}
