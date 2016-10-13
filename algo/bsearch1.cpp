//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;

int main()
{
    list<int> coll;

    Insert_Elements(coll, 1, 9);
    Print_Elements(coll);

    //check existence of elements with value 5
    if(binary_search(coll.begin(), coll.end(), 5))
    {
        cout<<"5 is present"<<endl;
    }
    else
    {
        cout<<"5 is not present"<<endl;
    }

    //check existence of elements with value 42
    if(binary_search(coll.begin(), coll.end(), 42))
    {
        cout<<"42 is present"<<endl;
    }
    else
    {
        cout<<"42 is not present"<<endl;
    }

    return 0;


}

