#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    for(int i=0;i<t;i++){
        int n; cin >> n;

        vector<int> a(n), b(n);

        for(int j=0;j<n;j++) cin >> a[j];
        for(int j=0;j<n;j++) cin >> b[j];

        int diff = 0, onesA=0, onesB=0;

        for(int j=0;j<n;j++){
            if(a[j] != b[j]) diff++;
            if(a[j] == 1) onesA++;
            if(b[j] == 1) onesB++;
        }

        cout << min(diff, abs(onesA - onesB) + 1) << endl;
    }
}