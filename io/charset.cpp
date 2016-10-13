//
// Created by yanlei on 16-10-12.
//
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//forward declarations
void writeCharsetToFile(const string& filename);
void outputFile(const string& filename);

int main()
{
    writeCharsetToFile("charset.out");
    outputFile("charset.out");
    return 0;
}

void writeCharsetToFile(const string& filename)
{
    //open output file
    ofstream file(filename.c_str());

    //file opened?
    if(!file)
    {
        //NO abort program
        cerr<<"can't open file \""<<filename<<"\""<<endl;
        exit(EXIT_FAILURE);
    }

    //write charset set
    for(int i=32;i<256;i++)
        file<<"value: "<<setw(3)<<i<<"  "
            <<"char:  "<< static_cast<char>(i)<<endl;
}

void outputFile(const string& filename)
{
    //open input file
    ifstream file(filename.c_str());

    //file opened?
    if(!file)
    {
        //NO, abort program
        cerr<<"can't open file \""<<filename<<"\""<<endl;
        exit(EXIT_FAILURE);
    }

    //copy file contents to cout
    char c;
    while(file.get(c))
    {
        cout.put(c);
    }
}
