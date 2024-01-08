#include <iostream>
using namespace std;

void blackbox(int x, int len) {
    if (x > len) {
        return;
    }
    if (x % 2==0) {
        cout << x << " ";
    }
    blackbox(++x, len);
}

int main() {
    cout << "Enter n:";
    int n;
    int i = 1;
    cin >> n;
    cout << "For loop: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << "While loop: ";

    int j = 1;
    while (j <= n) {
        if (j % 2 == 0) {
            cout << j << " ";
            j++;
        }
        else {
            j++;
        }
    }
    cout << endl << "Do While loop: ";
    int k = 1;
    do {
        if (k % 2 == 0) {
            cout << k << " ";
            k++;
        }
        else {
            k++;
        }
    } while (k <= n);
    cout << endl << "Recursion: ";
    blackbox(1, n);
    return 0;
}
