/*
	SIZES AND MAX VALUES OF DATA TYPES IN C.

	Note: After compiling, it is generating 53 warnings. I don't know why! 
	But the code works in any computer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	printf("Size of Char: %ld bytes\n",sizeof(char));
	printf("Size of Short: %ld bytes\n",sizeof(short));
	printf("Size of Int: %ld bytes\n",sizeof(int));
	printf("Size of Float: %ld bytes\n",sizeof(float));
	printf("Size of Double: %ld bytes\n",sizeof(double));
    printf("Size of Long: %ld bytes\n",sizeof(long));
	printf("Size of Long Long: %ld bytes\n",sizeof(long long));

    printf("The number of bits in a byte %d\n", CHAR_BIT);

    printf("The minimum value of SIGNED CHAR = %d\n",SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n",SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n",UCHAR_MAX);

    printf("The minimum value of CHAR = %d\n",CHAR_MIN);
    printf("The maximum value of CHAR = %d\n",CHAR_MAX);

    printf("The minimum value of SHORT INT = %d\n",SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n",SHRT_MAX);

    printf("The minimum value of INT = %d\n",INT_MIN);
    printf("The maximum value of INT = %d\n",INT_MAX);

    printf("The minimum value of LONG = %ld\n",LONG_MIN);
    printf("The maximum value of LONG = %ld\n",LONG_MAX);
	return 0;
}