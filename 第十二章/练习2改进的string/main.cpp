#include <iostream>
#include<cstdlib>
#include"ImprovedString.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ImprovedString s1(" and I am a C++ student.");
	ImprovedString s2 = "Please enter your name: ";
	ImprovedString s3;
	std::cout << s2;// << "\n" << s1 << "\n";
	std::cin >> s3;
	s2 = "My name is " + s3;
	std::cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringUpper();
	std::cout << "The string\n" << s2 << "\ncontains " << s2.hasChar('A') << " 'A' characters in it.\n" << std::endl;
	s1 = "red";
	ImprovedString rgb[3] = { ImprovedString(s1), ImprovedString("green"), ImprovedString("blue") };
	std::cout << "Enter the name of a primer color for mixing light: ";
	ImprovedString ans;
	bool success = false;
	while (std::cin >> ans)
	{
		ans.stringLow();
		for(int i=0;i<3;i++)
			if (ans == rgb[i])
			{
				std::cout << "That's right!\n";
				success = true;
				break;
			}
		if (success)break;
		else std::cout << "Try again!\n";
	}
	std::cout << "Bye!\n";
	return 0;
}
