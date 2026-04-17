#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m;
   unordered_set<int> all_elements;
  //Number 1  
    cout << "Enter size of A: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter A: ";
    for (int i = 0; i < A.size(); i++) 
    {
        cin >> A[i];
        all_elements.insert(A[i]);
    }

    //Number 2
    cout << "Enter size of B: ";
    cin >> m;

    vector<int> B(m);
    cout << "Enter B: ";
    for (int i = 0; i < B.size(); i++) 
    {
        cin >> B[i];
        all_elements.insert(B[i]);
    }

   for(int a:A)
   {
    for(int b:B)
    {
        int sum = a+b;
        //check if sum is not in the set of existing element
        if(all_elements.find(sum)==all_elements.end())
        {
            cout<<a<<" "<<b<<endl;
            return 0;//Exist after find the first valid pair
        }
    }
   }
   return 0;
}