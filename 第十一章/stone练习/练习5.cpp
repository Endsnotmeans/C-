#include<iostream>
using std::cout;
#include "stonewt.h"

int main(int argc, char** argv) 
{
	Stonewt fullback(245.5);
    Stonewt cornerback(13, 5.2);
    cout << fullback;
    cout << cornerback;
     cornerback.set_mode('w');
     cout << cornerback;
     Stonewt lump;
     lump = fullback + cornerback;
     cout << lump;
     fullback = fullback * 1.1;
     cout << fullback;
     lump = lump - fullback;
     cout << lump;
     lump = 1.3 * lump;
     lump.set_mode('s');
     cout << lump;
     
	return 0;
}

