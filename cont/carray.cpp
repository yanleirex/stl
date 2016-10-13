//
// Created by yanlei on 16-10-12.
//
#include <iostream>
#include <algorithm>
#include <functional>
#include "carray.hpp"
#include "print.hpp"

using namespace std;

int main()
{
    carry<int, 10> a;

    for(unsigned i=0;i<a.size();++i)
    {
        a[i] = i+1;
    }
    PrintElements(a);

    reverse(a.begin(), a.end());

    PrintElements(a);

    transform(a.begin(), a.end(), a.begin(), negate<int>());

    PrintElements(a);

    return 0;
}

