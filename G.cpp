#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int count_of_people;
        cin >> count_of_people;
        int maximum = 30;
        int minimum = 15;
        for (int j = 0; j < count_of_people; j++) {
            char vote[2];
            cin >> vote[0];
            cin >> vote[1];
            int rate;
            cin >> rate;

            if (vote[0] == '>') {
                if (rate >= minimum) {
                    minimum = rate;
                }
            }
            else {
                if (rate <= maximum) {
                    maximum = rate;
                }
            }
            if (maximum >= minimum) {
                cout << minimum << '\n';
            }
            else {
                cout << "-1" << '\n';
            }
        }


    }
    return 0;
}