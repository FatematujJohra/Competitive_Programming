
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // টেস্ট কেস সংখ্যা
    while (t--) {
         int n;// স্ট্রিং এর দৈর্ঘ্য
        string s;// ইনপুট স্ট্রিং
        cin >> n >> s;

        char start = 'a'; // শুরুতে সবচেয়ে ছোট অক্ষর ধরা হলো
        for (char c : s) {
            if (c > start)
             start = c; // সবচেয়ে বড় অক্ষর বের করা
        }

        // অক্ষরের অবস্থান বের করা (যেমন 'a' = 1, 'b' = 2, ..., 'z' = 26)
        int ans = start - 'a' + 1;
        cout << ans << "\n";
    }
    return 0;
}