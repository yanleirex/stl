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
    list<int>::iterator pos1, pos2;

    pos1 = lower_bound(coll.begin(), coll.end(), 5);
    pos2 = upper_bound(coll.begin(), coll.end(), 5);

    cout<<"5 could get position "
        <<distance(coll.begin(), pos1) + 1
        <<" up to "
        <<distance(coll.begin(), pos2) + 1
        <<" without breaking the sorting"
        <<endl;

    //insert 3 at the first possible position without breaking the sorting
    coll.insert(lower_bound(coll.begin(), coll.end(), 3), 3);

    //insert 7 at the last possible position without breaking the sorting
    coll.insert(upper_bound(coll.begin(), coll.end(), 7), 7);

    Print_Elements(coll);

    return 0;
}

