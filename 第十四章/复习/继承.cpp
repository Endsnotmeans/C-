#include"Frabjous1.h"
#include<cstdlib>

int main()
{
	Gloam fGloam;
	fGloam.tell();
	Gloam gGloam(20, "Schrodinger's cat");
	gGloam.tell();
	Gloam hGloam;
	hGloam = gGloam;
	hGloam.tell();
	system("pause");
	return 0; 
}
