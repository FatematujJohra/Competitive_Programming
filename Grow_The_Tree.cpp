#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<long long> a(n);

    for(int i=0;i<n;i++) 
    cin >> a[i];

    sort(a.begin(), a.end());

    long long x=0, y=0;
    int mid=n/2;
    // smaller half for x
    for(int i=0;i<mid;i++) 
        x+= a[i];
    // bigger half for y
    for(int i=mid;i<n;i++) 
        y+= a[i];

    cout << x*x + y*y << endl;
    return 0;
}