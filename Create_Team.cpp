#include<bits/stdc++.h>
using namespace std;
void team(){
    int n;
    long long x;
    cin>>n>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
 //sort in descending order
   sort(a.begin(),a.end(),greater<long long>());
 int total_team=0;
 int current_team_size=0;

   for(int i=0;i<n;i++)
    {
       current_team_size++;
    
    if(a[i]*current_team_size>=x)
    {
        total_team++;
        current_team_size==0;//reset for the next team
    }
}
 cout<<total_team<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        team();
    }
    return 0;
}
