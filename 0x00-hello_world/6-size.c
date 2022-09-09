#include <stdio.>

/**
 * main-Print sizes of various types
 *
 * Author: Esidene 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%dbyte(s)\n",sizeof(a));
	printf("Size of an int:%dbyte(s)\n",sizeof(b));
	printf("Size of a long int:%dbyte(s)\n",sizeof(c));
	printf("Size of a long long int:%dbyte(s)\n",sizeof(d));
	printf("Size of a float:%dbyte(s)\n",sizeof(e));
	return (0);
}

