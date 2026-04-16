/* A string s  of length n consisting of lowercase letters of the English alphabet, is given.
 You must choose some number k between 0 and n. Then, you select k characters of s and
  permute them however you want. In this process, the positions of the other n−k characters
   remain unchanged. You have to perform this operation exactly once. 
   For example, if s="andrea", you can choose the k=4 characters "a_d_ea"and permute them into 
   "d_e_aa" so that after the operation the string becomes "dneraa" . 
 Determine the minimum k so that it is possible to sort s alphabetically (that is,
  after the operation its characters appear in alphabetical order).
 Input The first line contains a single integer t(1≤t≤1000) — the number of test cases. 
 Then t test cases follow.
 The first line of each test case contains one integer n  (1≤n≤40) — the length of the string.
 The second line of each test case contains the string s. It is guaranteed that s contain
  only lowercase letters of the English alphabet.
 Output
 For each test case, output the minimum k
  that allows you to obtain a string sorted alphabetically,
   through the operation described above.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        string t = s;
        sort(t.begin(), t.end());

        int k = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i])
             k++;
        }

        cout << k << "\n";
    }
    return 0;
}