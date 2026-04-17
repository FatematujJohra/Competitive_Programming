#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>s>>n;
    //a vector of pair:(strength,bonus)
    vector<pair<int,int>> dragons(n);
    for(int i=0;i<n;i++)
    {
        //Read strength into first and bonus into second
        cin>>dragons[i].first>>dragons[i].second;
    }
    //sort in ascending
    sort(dragons.begin(),dragons.end());

    bool can_win= true;
    for(int i=0;i<n;i++)
    {
        if(s>dragons[i].first)
        {
            //defeat dragon,add bonus
            s+=dragons[i].second;
        }
        else
        {
            can_win=false;
            break;
        }
    }
    if(can_win){
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}