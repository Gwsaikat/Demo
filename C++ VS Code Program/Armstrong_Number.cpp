#include<iostream>
#include<math.h>

using namespace std ;
int main()
{
    int n;
    cout<< " Enter The Number : ";
    cin >> n;

    int sum = 0;
    int original = n;

    while (n>0)
    {
        int lastdigit = n%10;
        sum += round ( pow ( lastdigit,3));
        n=n/10;   
    }
        if (sum == original)
        {
            cout << " The Number Is An Armstrong Number " << endl;
        }
        else {
            cout << " The Number Is Not An Armstrong Number " << endl;
        }
            

return 0;
}