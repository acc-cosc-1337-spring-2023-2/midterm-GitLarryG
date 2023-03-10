#include "question3.h"

bool test_config()
{
    return true;
}

string get_fib_sequence(int input_range)
{
    int first = 0;
    int second = 1;
    int next = 0;
    string fib = "";
    
    for (int i = 0; i <= input_range; ++i)
    {
        if (i == 0)
        {
            fib += "0";
            continue;
        }
        if (i == 1)
        {
            fib += " ";
            fib += "1";
            continue;
        }
        next = first + second;
        string str = to_string(next);
        fib += " ";
        fib += str;
        first = second;
        second = next;
    }
    return fib;
}