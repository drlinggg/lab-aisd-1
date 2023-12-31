#include <iostream>
using namespace std;

unsigned long long conv(int number) {
    unsigned long long saved = 1;
    for (int i = 1; i < number; i++) {
        saved *= 2;
    }
    return saved;
}

int main() {
    unsigned long long start, end;
    int count = 0;
    cin >> start >> end;
    for (int i = 1; i < 62; i++) {
        for (int j = 1; j < 63 - i; j++) {
            for(int z = 1; z < 64 - j - i; z++) {
                if (i+j+z <= 65) {
                    unsigned long long number = conv(i+j+z+1) - conv(j+z+1) + conv(z+1) - 1;
                    if (number >= start && number <= end) {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}

