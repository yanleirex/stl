//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;

int main()
{
    list<int> coll;

    Insert_Elements(coll, 1, 9);
    Insert_Elements(coll, 1, 9);
    coll.sort();
    Print_Elements(coll);

    //print first and last position 5 could get inserted
    pair<list<int>::iterator, list<int>::iterator> range;

    range = equal_range(coll.begin(), coll.end(), 5);

    cout<<"5 could get position "
        <<distance(coll.begin(), range.first) + 1
        <<" up to "
        <<distance(coll.begin(), range.second) + 1
        <<" without breaking the sorting"
        <<endl;

    return 0;
}

