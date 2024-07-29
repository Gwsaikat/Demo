#include<iostream>
#include<cmath>

using namespace std ;
int main()
{
    int n;
    cout<< " Enter the number : ";
    cin>>n;

    bool flag = 0; // using to check if the loop runed full or not 

    for (int i = 2; i < sqrt(n); i++) // using sqrt to shorter loop or time complexity 
    {
        if (n%i==0){
            cout<<"not prime"<<endl;
            flag = 1 ;
            break;
        }
    }
    if (flag==0)
    {
        cout<< " Prime "<<endl;
    }
    
return 0;
}