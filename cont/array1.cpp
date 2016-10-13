//
// Created by yanlei on 16-10-12.
//
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main()
{
    int coll[] = {5, 6, 2, 4, 1, 3};

    //square all elements
    transform(coll,coll+6,
    coll,
    coll,
    multiplies<int>());

    //sort beginning with the second selement
    sort(coll+1, coll+3);

    //print all elements
    copy(coll, coll+6, ostream_iterator<int>(cout, " "));
    cout<<endl;

    return 0;
}
