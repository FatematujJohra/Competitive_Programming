#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    double ans = 0;

    // gap from start
    ans = max(ans, (double)a[0]);

    // gap between lanterns
    for (int i = 1; i < n; i++) {
        ans = max(ans, (a[i] - a[i - 1]) / 2.0);
    }

    // gap from end
    ans = max(ans, (double)(l - a[n - 1]));

    cout << fixed << setprecision(10) << ans << endl;
}