#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t;
    cin>>t;
    string s="codeforces";
    while(t--)
    { 
    string p;
    cin>>p;
    int count=0;

    for(int i=0;i<s.length();i++)
    {
            if(s[i]!=p[i])
            {
               ++ count;
            }
        }  
        cout<<count<<endl; 
        }       
     return 0;
        
}
