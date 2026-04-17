#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;//no of cadidate player
    long long D;//power of enemy
    cin >> N >> D;
    vector<long long> P(N);
    for (int i = 0; i < N; i++)
     cin >> P[i];

    sort(P.begin(), P.end()); // ascending sort

    int wins = 0;
    int used = 0; // মোট কতজন খেলোয়াড় ব্যবহার হয়েছে

    // বড় power থেকে শুরু
    for (int i = N - 1; i >= 0; i--) {
        long long Q = P[i];

        long long need = D / Q + 1; // দরকারি খেলোয়াড় সংখ্যা

        // যদি মোট ব্যবহার করা খেলোয়াড় + দরকারি খেলোয়াড় <= মোট খেলোয়াড়
        if (used + need <= N) {
            wins++;
            used += need; // need খেলোয়াড় ব্যবহার করা হলো

      }
    }
    cout << wins << "\n";
    return 0;
}