//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;
int main()
{
    deque<int> coll;

    Insert_Elements(coll, 1, 6);
    Print_Elements(coll);

    //print all differences between elements
    adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    //print all sums with the predecessors
    adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), plus<int>());
    cout<<endl;

    //print all products between elements
    adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), multiplies<int>());
    cout<<endl;

    return 0;
}


