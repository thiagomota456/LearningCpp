#include <iostream>

using namespace std;

struct Data
{
    unsigned short data; //|7|4|5|
    void define(short d, short m, short a);
    void exibe(void);
};

void Data::define(short d, short m, short a)
{
    data = ((a-1980)<<9) | (m<<5) | d;
}

void Data::exibe(void)
{
    cout << setw(2) << setfill('0')
    << (data & 0x1F) << "/"
    << setw(2) << setfill('0')
    << ((data>>5) & 0xF) << "/"
    << (data>>9)+1980 << endl;
}