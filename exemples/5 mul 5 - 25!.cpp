#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    int w = q / 10;
    int e = (w + 1) * w;
    if (q == 5) {
        cout << 25;
    } else if (q % 10 != 5) {
    } else {
        cout << e << 25;
    }
    return 0;
}
