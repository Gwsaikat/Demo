#include<iostream>
using namespace std ;
int main()
{

    int n;
    cout<< " Enter thr Number : ";
    cin>>n;

        int Reverse = 0;

        while (n>0)
        {
            int digit = n % 10;    // 1234 = 4
            Reverse = Reverse * 10 + digit; // reverse = 00 + 4
            n = n / 10; // for next loop : n will be 123 , coz int store only int nor float 

        }

cout << Reverse << endl;        

return 0;
}