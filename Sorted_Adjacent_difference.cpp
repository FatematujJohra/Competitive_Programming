#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;// number of element
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
     cin >> a[i];

    // 1. Sort the array normally
    sort(a.begin(), a.end());

    // 2. Use two pointers starting from the middle
    int left = (n - 1) / 2;
    int right = left + 1;

    while (left >= 0 || right < n) {
        if (left >= 0) {
            cout << a[left] << " ";
            left--;
        }
        if (right < n) {
            cout << a[right] << " ";
            right++;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}