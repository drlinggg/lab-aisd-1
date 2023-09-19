#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flag_char_deleted = 0;
    char array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (array[i] != array[j]) {
            if (flag_char_deleted == 0) {
                if (array[i + 1] == array[j]) {
                    flag_char_deleted = 1;
                    i++;

                }
                else if (array[i] == array[j-1]) {
                    flag_char_deleted = 1;
                    j--;
                }
                else {
                    cout << "NO";
                    return 0;
                }
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}