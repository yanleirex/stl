//
// Created by yanlei on 16-10-12.
//
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    typedef map<string, float> StringFloatMap;

    StringFloatMap stocks;

    stocks["BASF"] = 369.50;
    stocks["VW"] = 413.50;
    stocks["Daimler"] = 819.00;
    stocks["BMW"] = 834.00;
    stocks["Siemens"] = 842.20;

    StringFloatMap::iterator pos;
    for(pos=stocks.begin();pos!=stocks.end();++pos)
    {
        cout<<"stock: "<<pos->first<<"\t"
            <<"price: "<<pos->second<<endl;
    }
    cout<<endl;
    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        pos->second *= 2;
    }

    // print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stock: " << pos->first << "\t"
             << "price: " << pos->second << endl;
    }
    cout << endl;

    /* rename key from "VW" to "Volkswagen"
     * - only provided by exchanging element
     */
    stocks["Volkswagen"] = stocks["VW"];
    stocks.erase("VW");

    // print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
        cout << "stock: " << pos->first << "\t"
             << "price: " << pos->second << endl;
    }

    return 0;
}
