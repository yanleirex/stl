//
// Created by yanlei on 2016/10/11.
//

#ifndef STL_ALGOSTUFF_HPP
#define STL_ALGOSTUFF_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

/* Print_Elements()
 * prints optional C-string optcstr followed by
 * all elements of the collection coll
 * separated by spaces
 */
template <class T>
inline void Print_Elements(const T& coll, const char* optcstr="")
{
    typename T::const_iterator pos;
    std::cout<<optcstr;
    for(pos=coll.begin();pos!=coll.end();++pos)
    {
        std::cout<<*pos<<' ';
    }
    std::cout<<std::endl;
}

/* Insert_Elements(collection, first, last)
 * fill values from first to last into the collection
 * NOTE:No half-open range
 */
template <class T>
inline void Insert_Elements(T& coll, int first, int last)
{
    for(int i=first;i<=last;++i)
    {
        coll.insert(coll.end(), i);
    }
}

#endif //STL_ALGOSTUFF_HPP
