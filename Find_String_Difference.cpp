#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int sumS = 0, sumT = 0;

    for (char c : s) 
    sumS += c;
    for (char c : t)
     sumT += c;

    char extra = sumT - sumS;

    cout << extra << endl;
    return 0;
}