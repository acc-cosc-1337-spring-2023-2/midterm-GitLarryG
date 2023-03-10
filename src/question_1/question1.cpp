#include "question1.h"

bool test_config()
{
    return true;
}

double get_dna_p_distance(string DNA_1, string DNA_2)
{
    double count = 0;
    double differ = 0;
    int length = DNA_1.size();
    for (int letter = 0; letter < length; letter ++)
    {
        //cout<<"("<<DNA_1[letter]<<DNA_2[letter]<<")\n";
        if (DNA_1[letter] != DNA_2[letter])
        {
            differ += 1;
            //cout<<"Differ: "<<differ<<"\n";
        }
        count += 1;
        //cout<<"Count: "<<count<<"\n";
    }
    //cout<<"Differ: "<<differ<<"\n";
    //cout<<"Count: "<<count<<"\n";
    double ratio_of_diff = differ/count;
    double rounded = round(ratio_of_diff * 10000.0) / 10000.0;
    //cout<<"Ratio: "<<rounded<<"\n";
    return rounded;
}