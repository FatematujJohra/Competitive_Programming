#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
     cin >> s;

    vector<int> a;

    for(int i=0;i<s.size();i++){
        if(s[i] != '+'){
            a.push_back(s[i]-'0');//48-48=0,49-48=1..
        }
    }

    sort(a.begin(), a.end());

    for(int i=0;i<a.size();i++){
        cout << a[i];
        if(i != a.size()-1) 
        cout << "+";//if it is not the last one then give +
    }
    return 0;
}