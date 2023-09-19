#include <iostream>
using namespace std;

int main() {
    int n;
    int ans = -1;
    cin >> n;
    int array[n];
    int sumarray[n+1];
    sumarray[0] = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        array[i] = temp;
        //cout << array[i] << " " << "el" << endl;
    }

    for (int i = 1; i < n + 1; i ++)
    {
        sumarray[i] = sumarray[i-1] + array[i-1];
        //cout << sumarray[i] << "  " << "summ " << endl;
    }
    sumarray[n+1] = sumarray[n];
    //cout << sumarray[n+1];
    for (int i = 1; i < n+2; i++)
    {
        if (sumarray[i-1] == sumarray[n] - sumarray[i]) {
            ans = i-1;
            break;
        }
    }
    cout << ans;
    return 0;
}
