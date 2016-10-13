//
// Created by yanlei on 16-10-12.
//

#ifndef STL_PRINT_HPP
#define STL_PRINT_HPP

#include <iostream>

template <class T>
inline void PrintElements(const T& coll, const char* optcstr="")
{
    typename T::const_iterator pos;

    std::cout<<optcstr;

    for(pos=coll.begin();pos!=coll.end();++pos)
    {
        std::cout<<*pos<<' ';
    }
    std::cout<<std::endl;
}

#endif //STL_PRINT_HPP
