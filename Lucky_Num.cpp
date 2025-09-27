#include<iostream>
using namespace std;
int main(){
    long long num;
    cin>>num;
    int count=0;
    while(num>0)
    {
        int digit=num%10;
        if(digit==4 || digit==7)
            count++;
        num/=10;
    }
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}