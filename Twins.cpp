#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end(), greater<int>()); // বড় থেকে ছোট

    int total = 0;
    for (int x : a) total += x;

    int mySum = 0, count = 0;

    for (int x : a) {
        mySum += x;
        total -= x;
        count++;

        if (mySum > total) break;
    }

    cout << count << endl;
}