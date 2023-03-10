#include"question3.h"

int main()
{
    char decision = 'N';
    do
    {
        int input_range;
        cout<<"Enter the number of nums in the Fib sequence you want: ";
        cin>>input_range;
        cout<<get_fib_sequence(input_range);
        cout<<"\n\nContinue? (Y/n): ";
        cin>>decision;
    }
    while((decision == 'Y') || (decision == 'y'));

    return 0;
}