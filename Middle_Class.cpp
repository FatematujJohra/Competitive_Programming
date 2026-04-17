#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;// number of people
        long long x;// minimum wealth to be considered rich
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
        cin >> a[i];

        sort(a.rbegin(), a.rend()); // বড় থেকে ছোট সাজানো

        long long sum = 0;// ধনী মানুষের মোট সম্পদ
        int ans = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum >= (long long)(i + 1) * x) {
                ans = i + 1; // এতজনকে ধনী করা সম্ভব
            }
        }
        cout << ans << "\n";
    }
    return 0;
}