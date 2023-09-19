#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int seasons, episods, q, count = 0, season, episod;
    cin >> seasons >> episods >> q;
    int a[episods][seasons] = {{0}};

    for (int i = 0; i < episods; i++) {
        for (int j = 0; j < seasons; j++) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> episod >> season;
        if (a[episod - 1][season - 1] != 1 && episod <= episods && season <= seasons) {
            count++;
        }
        a[episod - 1][season - 1] = 1;
    }

    cout << seasons * episods - count << endl;

    for (int i = 0; i < seasons; i++) {
        for (int j = 0; j < episods; j++) {
            //cout << i << " " << j << " " << a[i][j] << endl;
            if (a[j][i] == 0) {
                cout << j + 1 << " " << i + 1;
                cout << '\n';
            }
        }
    }
    return 0;
}
