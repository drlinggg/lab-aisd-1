#include <iostream>

using namespace std;

int main() {
    long long n, step;
    cin >> n >> step;
    int array[n];
    int newarray[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    if (step > 0) {
        step = step % n;
    }
    if (step < 0) {
        step = -step;
        step = n - (step % n);
    }

    int index = 0;

    for (int i = n-step; i < n;i++){
        newarray[index] = array[i];
        index++;
    }

    for (int i = 0; i < n-step; i++) {
        newarray[index] = array[i];
        index++;
    }

    for (int i = 0; i < n; i++) {
        cout << newarray[i] << " ";
    }

    return 0;
}
