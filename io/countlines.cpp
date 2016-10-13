//
// Created by yanlei on 16-10-12.
//
#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream>

int countLines(std::istream& in);

int main(int argc, char* argv[])
{
    int count;

    if(argc==1)
    {
        count = countLines(std::cin);
    }
    else
    {
        std::ifstream in;
        count=0;
        for(int i=1;i<argc;i++)
        {
            in.open(argv[i]);
            if(!in)
            {
                std::cerr<<"failed to open "<<argv[1]<<"\n";
            }
            else
            {
                count += countLines(in);
            }
        }
    }
    std::cout<<count<<std::endl;
    return 0;
}

int countLines(std::istream& in)
{
    return std::count(std::istreambuf_iterator<char>(in),
    std::istreambuf_iterator<char>(),'\n');
}
