#include <stdio.h>
#include <stdlib.h>

unsigned short askNumber();
void printHex(unsigned short);
_Bool askQuit();

int main(void) {
	// variables
	unsigned short num;
	_Bool quit;
	
	while (1) {
		// ask a number
		num = askNumber();
		
		// print hexadecimal value
		printHex(num);
		
		quit = askQuit();
		if (quit) break;
	}
	
	return 0;
}

unsigned short askNumber()
{
	unsigned short num;
	printf("\nEnter a number: ");
	scanf("%u", &num);
	
	return num;
}

void printHex(unsigned short num)
{
	char hex[sizeof(short) * 4 + 1];
	sprintf(hex, "%X", num);
	puts(hex);
}

_Bool askQuit()
{
	char choice;
	_Bool quit;
	printf("\nDo you want to continue? (Y/n): ");
	while (1) {
		scanf("%c", &choice);
		if (choice == 'y' || choice == 'Y'
		|| choice == 'n' || choice == 'N') break;
	}
	
	if (choice == 'y' || choice == 'Y') quit = 0;
	else if (choice == 'n' || choice == 'N') quit = 1;
	
	return quit;
}