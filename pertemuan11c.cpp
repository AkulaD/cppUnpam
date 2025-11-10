#include <iostream>
using namespace std;
int main() {
    for (int i = 2; i <= 20; i += 2) {
        cout << i;
        if (i < 20) cout << ' ';
    }
    cout << '\n';
    return 0;
}