#include <iostream>
using namespace std;

void black(int  i, int len, int pre, int prepre, int next) {
    if (i == len) {
        return;
    }
    if (i == 0) {
        cout << prepre << " ";
    }
    else if (i == 1) {
        cout << pre << " ";
    }
    else if (i < len) {
        next = pre + prepre;
        prepre = pre;
        pre = next;
        cout << next << " ";
       
    }
    
    return black(++i, len, pre, prepre, next);
}

int main() {
    cout << "Enter n:";
    int n;
    cin >> n;
    int i=0;
    int prepre = 0;
    int pre = 1;
    int next = -1;
    black(i, n, pre, prepre, next);
    return 0;
}
