//
// Created by yanlei on 2016/10/11.
//
#include "algostuff.hpp"

using namespace std;

int main()
{
    vector<int> coll;
    Insert_Elements(coll, 1, 9);

    //process sum of elements
    cout<<"Sum: "
        <<accumulate(coll.begin(), coll.end(),0)
        <<endl;

    //process product of elements
    cout<<"Product: "
        <<accumulate(coll.begin(), coll.end(), 1, multiplies<int>())
        <<endl;

    //process sum of elements less 100
    cout<<"Sum: "
        <<accumulate(coll.begin(), coll.end(), -100)
        <<endl;

    //process product of elements(use 0 as initial value)
    cout<<"Product: "
        <<accumulate(coll.begin(), coll.end(), 0, multiplies<int>())
        <<endl;

    return 0;
}
