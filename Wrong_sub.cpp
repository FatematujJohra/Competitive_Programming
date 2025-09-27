#include<iostream>
using namespace std;
void wrong_sub()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;++i)
    {
    if(n%10!=0)
    {
        n=n-1;
    }
    else
    {
        n/=10;
    }
}
   cout<<n<<endl;
}
int main()
{
    wrong_sub();
    return 0;
   
}