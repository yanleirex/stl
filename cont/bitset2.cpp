//
// Created by yanlei on 16-10-12.
//
#include <bitset>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    /*
     * print some number in binary representation
     */
    cout<<"267 as binary short:     "
        <<bitset<numeric_limits<unsigned short>::digits>(267)
        <<endl;

    cout<<"267 as binary long:      "
        <<bitset<numeric_limits<unsigned long>::digits>(267)
        <<endl;

    cout<<"10,000,000 with 24 bits: "
        <<bitset<24>(1e7)<<endl;

    /*
     * transform binary representation into integral number
     */
    cout<<"\"1000101011\" as number:    "
        <<bitset<100>(string("1000101011")).to_ulong()<<endl;

    return 0;
}

