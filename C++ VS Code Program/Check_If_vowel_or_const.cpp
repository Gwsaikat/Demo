#include<iostream>
using namespace std;

int main()
{
    char A,B;
    cin>>A>>B;

    A = tolower(A); // convert A to lowercase
    B = tolower(B); // convert B to lowercase

    if (A=='a' || A=='e' || A=='i' || A=='o' || A=='u')
    {
        cout<<"A is a vowel"<<endl;
    }
    else
    {
        cout<<"A is a consonant"<<endl;
    }

    if (B=='a' || B=='e' || B=='i' || B=='o' || B=='u')
    {
        cout<<"B is a vowel"<<endl;
    }
    else
    {
        cout<<"B is a consonant"<<endl;
    }

    return 0;
}