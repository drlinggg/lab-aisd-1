#include <iostream>
using namespace std;

int main() {
    int n, k,saved, ans;
    cin >> n >> k;
    if (n < k) {
        saved = k;
        k = n;
        n = saved;

    }
    while (n != 0 && k != 0) {
        if (n > k) {
            n = n % k;
        }
        else {
            k = k % n;
        }
    }
    ans = n + k;
    cout << ans;
    return 0;
}