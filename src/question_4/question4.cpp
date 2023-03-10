//
#include"question4.h"

bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2)
{
    while(num1 != num2) 
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    int gcd = num1;
    return gcd;
}