#include<bits/stdc++.h>
using namespace std;
int main()
{
    string guest,host,pile;
    cin>>guest>>host>>pile;
    vector<int> freq(26,0);

    //count guest+host
    for( char ch:guest)
    {
        freq[ch-'A']++;
    }
    for(char ch:host)
    {
        freq[ch -'A']++;
    }
    //subtract pile
    for(char ch:pile)
    {
        freq[ch - 'A']--;
    }
    //check all zero
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
             cout<<"NO"<<endl;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}