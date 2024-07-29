#include<iostream>
using namespace std ;

int main()
{
    int side_a,side_b,side_c;
    cout<<" Enter The Sides : ";
    cin>>side_a>>side_b>>side_c;

        if(side_a==side_b && side_b==side_c)
        {
            cout<<"equilateral triangle"<<endl;
        }
        else if (side_a==side_b ||side_c==side_a|| side_b==side_c )
        {
            cout<<"isosceles triangle"<<endl;
        }
        else 
        {
            cout<<"scalene triangle"<<endl;
        }
return 0;
}