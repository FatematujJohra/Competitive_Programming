#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    set<int> s;// no duclicate 

    for(int i=0;i<n;i++){
        int score;
         cin >> score;
        if(score != 0)
         s.insert(score);
    }

    cout << s.size();
    return 0;
}