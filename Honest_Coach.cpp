#include <bits/stdc++.h>
using namespace std;

void answer(){        
        int n; 
        cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++) 
        cin >> a[i];

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        for(int i=0;i<n-1;i++){
            int diff=a[i+1]-a[i];//a[2]-a[1]
            if(diff<ans)
            {
                ans=diff;
            }
        }

        cout << ans << endl;
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        answer();
    }
 return 0;
}