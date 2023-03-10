#include"question2.h"

int main()
{
    char decision = 'N';
    do
    {
        double c;
        cout<<"Enter Celsius temperature for conversion: ";
        cin>>c;
        double fahrenheit = get_fahrenheit(c);
        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<"\n\n";
        cout<<"Continue? (Y/n): ";
        cin>>decision;
    }
    while ((decision == 'Y') || (decision == 'y'));
    
    return 0;
}