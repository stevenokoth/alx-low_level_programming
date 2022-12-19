#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  Function to randomly generates password of length N
 *  First initialize counter
 *  Declare cahracter array of capital letter
 *  Declare charater array of all small letters
 *  And special numbers
 *  According to the program, if-else gets executes
 *  To genrate ranom possible passawords
 */
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^*&?";
       	char password[N];
	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{ 
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c" , password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c" , password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c" , password[i]);

		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c" , password[i]);
		}
	}

      
} 

int main()
{
	int N = 10;
	randomPasswordGeneration(N);
	return 0;
}
