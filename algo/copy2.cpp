//
// Created by yanlei on 16-10-11.
//
#include "algostuff.hpp"

using namespace std;

int main()
{
    /* initialize source collection with ".......abcedf......"
     */
    vector<char> source(10, '.');
    for(int c='a';c<='f';c++)
    {
        source.push_back(c);
    }

    source.insert(source.end(), 10, '.');
    Print_Elements(source, "source:");

    //copy all letters three elements in front of the 'a'
    vector<char> c1(source.begin(), source.end());
    copy(c1.begin()+10, c1.begin()+16, c1.begin()+7);
    Print_Elements(c1, "c1:    ");

    //copy all letters three elements behind the 'f'
    vector<char> c2(source.begin(), source.end());
    copy_backward(c2.begin()+10, c2.begin()+16, c2.begin()+19);
    Print_Elements(c2, "c2:    ");

    return 0;
}

