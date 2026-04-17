#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int mn = INT_MAX;

    // find minimum difference
    for (int i = 1; i < n; i++) {
        mn = min(mn, arr[i] - arr[i - 1]);
    }

    cout << "Pairs: ";
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] == mn) {
            cout<< "[" << arr[i - 1] << "," << arr[i] << "],";
        }
    }

    cout << endl;
}