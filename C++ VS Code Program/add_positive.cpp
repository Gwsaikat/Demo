#include<iostream>
using namespace std ;
int main()
{

    int n;
    int sum = 0;
    cin>>n;

        while (n>=0)
        {
            sum = sum + n;
            n-- ; // ddecrement n
        }
        cout<<" The sum is : "<<sum;
        
return 0;
}