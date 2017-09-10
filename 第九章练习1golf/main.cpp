#include <iostream>
#include "golf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int Mems=5;
int main(int argc, char** argv) 
{
	using namespace std;
	
	golf team[Mems];
	cout<<"Enter up to "<<Mems<<" golf team members:\n";
	int i;
	for(i=0;i<Mems;i++)
		if(setgolf(team[i])==0)
			break;
	for(int j=0;j<i;j++)
		showgolf(team[j]);
	setgolf(team[0], "Fred Norman", 5);
    showgolf(team[0]);
    handicap(team[0], 3);
    showgolf(team[0]);
	
	return 0;
}
