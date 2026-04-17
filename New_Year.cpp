#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());

    int mid = v[1]; // median

    int ans = abs(v[0] - mid) + abs(v[1] - mid) + abs(v[2] - mid);

    cout << ans << endl;
    return 0;
}