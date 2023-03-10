#include"question4.h"

int main()
{
    char decision = 'N';
    do
    {   
        int num1, num2;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"The GCD is: "<<find_gcd(num1, num2);
        cout<<"\n\nContinue? (Y/n): ";
        cin>>decision;
    }
    while((decision == 'Y') || (decision == 'y'));
    return 0;
}