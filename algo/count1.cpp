//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;

bool isEven(int elem)
{
    return elem%2==0;
}

int main()
{
    vector<int> coll;
    int num;
    Insert_Elements(coll, 1, 9);
    Print_Elements(coll, "coll:");

    //count and print elements with value 4
    num = count(coll.begin(), coll.end(), 4);
    cout<<"number of elements equal to 4: "
        <<num<<endl;

    //count elements with even value
    num = count_if(coll.begin(), coll.end(), isEven);
    cout<<"number of elements with even value: "
        <<num<<endl;

    //count elements that are greater than value 4
    num = count_if(coll.begin(), coll.end(), bind2nd(greater<int>(), 4));
    cout<<"number of elements greater than 4: "
        <<num<<endl;

    return 0;
}


