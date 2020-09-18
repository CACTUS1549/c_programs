/*
	CONSTANTS AND POINTERS
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	/*********************	POINTERS TO CONSTANTS	********************/

	//it means that while the data cannot be changed, the pointer pointed to it can be modified.

	int num = 5;
	const int limit = 500;

	int *pi;
	const int *pci;

	pi = &num;
	pci = &limit;

	printf(" num - Address: %p value: %d\n",&num, num); 
	printf("limit - Address: %p value: %d\n",&limit, limit); 
	printf(" pi - Address: %p value: %p\n",&pi, pi); 
	printf(" pci - Address: %p value: %p\n",&pci, pci);

	//Dereferencing a constant pointer is fine if we are simply reading the integer’s value.
	printf("Before change %d\n", *pci);

	/*
		We cannot dereference a constant pointer to change what the pointer references, 
		but we can change the pointer. The declaration simply limits 
		our ability to modify the referenced variable through the pointer.

		*pci = 700; //will generate an error -> 'pci' : you cannot assign to a variable that is const

		The pointer thinks it is pointing to a constant integer; therefore, 
		it does allow the mod‐ ification of the integer using the pointer. 

	*/

	/*
		The pointer value is not constant. The pointer can be changed to reference 
		another constant integer or a simple integer. Doing so will not be a problem.

		The declaration simply limits our ability to modify the referenced 
		variable through the pointer.
	*/

	int another_num = 70;

	pci = &another_num; // This is perfectly fine
	printf("After change %d\n", *pci);

	/*
		The declaration of pci as a pointer to a constant integer means:
			-- pci can be assigned to point to different constant integers.
			-- pci can be assigned to point to different nonconstant integers.
			-- pci can be dereferenced for reading purposes.
			-- pci cannot be dereferenced to change what it points to.

	*/


	/*********************	CONSTANT POINTERS TO NON-CONSTANTS	********************/

	//it means that while the pointer cannot be changed, the data pointed to can be modified. 

	int num_2 = 900;
	int *const cpi = &num_2;

	/*
		With the above declaration:
			-- cpi must be initialized to a nonconstant variable.
			-- cpi cannot be modified.
			-- The data pointed to by cpi can be modified

	*/

	//possible operations
	int num_3 = 99;
	*cpi = num_3; 
	printf("The value of num_3 before is %d \n", *cpi);
	*cpi = 25;
	printf("The value of num_3 after is %d \n", *cpi);

	//Not possible operations

	// const int num_4 = 500; 
	// cpi = &num_4;

	//Once an address has been assigned to cpi, we cannot assign a new value to cpi


	/*********************	CONSTANT POINTERS TO CONSTANTS	********************/

	// it means the pointer cannot be changed, and the data it points to cannot be changed through the pointer. 
	const int another_const_int = 909;

	const int * const cpci = &another_const_int;
	

	return 0;
}