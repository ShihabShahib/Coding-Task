#include <iostream>
using namespace std;

int main() {
    cout << "Enter n:";
    int n;
    cin >> n;
    int pre = 1;
    int prepre = 0;
    int next = 0;
    for (int i = 0; i <n; i++) {
        if (i == 0) {
            cout << prepre << " ";
            continue;
        }
        if (i == 1) {
            cout << pre << " ";
            continue;
        }
        next = pre + prepre;
        prepre = pre;
        pre = next;
        cout << next << " ";
    }
    return 0;
}
