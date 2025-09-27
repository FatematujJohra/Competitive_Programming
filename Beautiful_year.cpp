#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
bool isDistinct(int year)
{
    set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit)) {
            return false; // Digit is repeated
        }
    
        digits.insert(digit);
        year /= 10;
    }
    return true; // All digits are distinct
} 
int main()
{
  int y;
    cin>>y;
    int current_year=y+1;
    while(true)
    {
        if(isDistinct(current_year))
        {
            cout<<current_year<<endl;
            break;
        }
        current_year++;
    } 
    return 0;
}