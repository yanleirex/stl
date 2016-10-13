//
// Created by yanlei on 16-10-12.
//
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

/*
 * function object to compare strings
 * -allows you to set the comparison criterion at runtime
 * -allows you to compare case insensitive
 */
class RuntimeStringCmp
{
public:
    enum cmp_mode { normal, nocase };

private:
    //actual comparison mode
    const cmp_mode mode;

    static bool nocase_compare(char c1, char c2)
    {
        return toupper(c1)<toupper(c2);
    }

public:
    RuntimeStringCmp(cmp_mode m=normal):mode(m)
    {

    }

    bool operator()(const string& s1, const string& s2) const
    {
        if(mode==normal)
        {
            return s1<s2;
        }
        else
        {
            return lexicographical_compare(s1.begin(),
            s1.end(), s2.begin(), s2.end(), nocase_compare);
        }
    }
};

/* container type:
 * map with
 *      -string keys
 *      -string values
 *      -the special comparison object type
 */
typedef map<string, string, RuntimeStringCmp> StringStringMap;

void fillAndPrint(StringStringMap& coll);

int main()
{
    StringStringMap coll1;
    fillAndPrint(coll1);

    RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);

    StringStringMap coll2(ignorecase);
    fillAndPrint(coll2);
}

void fillAndPrint(StringStringMap& coll)
{
    // fill insert elements in random order
    coll["Deutschland"] = "Germany";
    coll["deutsch"] = "German";
    coll["Haken"] = "snag";
    coll["arbeiten"] = "work";
    coll["Hund"] = "dog";
    coll["gehen"] = "go";
    coll["Unternehmen"] = "enterprise";
    coll["unternehmen"] = "undertake";
    coll["gehen"] = "walk";
    coll["Bestatter"] = "undertaker";

    // print elements
    StringStringMap::iterator pos;
    cout.setf(ios::left, ios::adjustfield);
    for (pos=coll.begin(); pos!=coll.end(); ++pos) {
        cout << setw(15) << pos->first.c_str() << " "
             << pos->second << endl;
    }
    cout << endl;
}