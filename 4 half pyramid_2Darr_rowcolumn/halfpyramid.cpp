#include <iostream>
using namespace std;

int main() {
    cout << "Enter n:";
    int n;
    cin >> n; //input
    for (int i = 1; i <= n; i++) { //upto n, i is row
        for (int j = 1; j <= i; j++) { //j is column
            cout << j << " ";
        }
        cout << endl; //for every time 1 row completes, then new line
    }
    return 0;
}
