#include<iostream>
using namespace std ;

int add ( int n,int m){  // return type /name/(parameters) -- {program body}
int sum = n+m;
return sum;
}

int main()
{
    int n,m;
    cout<<" Enter your numbers : ";
    cin>>n>>m;

    cout<< add(n,m)<<endl;
return 0;
}