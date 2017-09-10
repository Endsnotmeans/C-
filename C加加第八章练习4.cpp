#include <iostream>
#include <cstring>    // for strlen(), strcpy()
using namespace std;

struct stringy {
    char * str;        // points to a string
    int ct;        // length of string (not counting '\0')
    };


void show(const char *str, int cnt =  1);
void show(const stringy & bny, int cnt = 1);
void set(stringy & bny, const char * str);

int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);    // first argument is a reference,
            // allocates space to hold copy of testing,
            // sets str member of beany to point to the
            // new block, copies testing to new block,
            // and sets ct member of beany
    show(beany);        // prints member string once
    show(beany, 2);    // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3);    // prints testing string thrice
    show("Done!");
    return 0;
}

void show(const char *str, int cnt)
{
    while(cnt-- > 0)
    {
            cout << str << endl;
    }
}

void show(const stringy & bny, int cnt)
{
    while(cnt-- > 0)
    {
            cout << bny.str << endl;
    }
}

void set(stringy & bny, const char * str)
{
    bny.ct = strlen(str);
    bny.str = new char[bny.ct+1];
    strcpy(bny.str, str);
}

