#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int separations = 0;
    int rooms[n];

    for (int i = 0; i < n; i++) {
        cin >> rooms[i];
    }

    int saved_before = rooms[n-1];
    for (int i = 0; i < n; i++) {
        if ((saved_before & rooms[i]) == 0) {
            saved_before = (saved_before | rooms[i]);
        }
        else {
            saved_before = rooms[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if ((saved_before & rooms[i]) == 0) {
            saved_before = (saved_before | rooms[i]);
        }
        else {
            saved_before = rooms[i];
            separations++;
        }
    }

    cout << separations;
    return 0;
}

