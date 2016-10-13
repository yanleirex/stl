//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;

int main()
{
    vector<int> coll1;
    list<int> coll2;

    Insert_Elements(coll1, 1, 9);

    /*copy elements of coll1 into coll2
     * use back insert to insert instead of overwrite
     */
    copy(coll1.begin(), coll1.end(), back_inserter(coll2));

    /*print elements of coll2
     * copy elements to cout using an ostream iterator
     */
    copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    /*copy elements of coll1 into coll2 in reverse order
     * now overwriting
     */
    copy(coll1.rbegin(), coll1.rend(), coll2.begin());

    //print elements of coll2 again
    copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    return 0;
}

