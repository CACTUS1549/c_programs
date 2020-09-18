/*
	POINTERS TO POINTERS
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//how do you define a string?

	char *some_string = "This is a string";

	//how do you define array of strings?
	char *titles[] = {"A Tale of Two Cities", "Wuthering Heights",
						"Don Quixote", "Odyssey","Moby-Dick",
						"Hamlet", "Gulliver's Travels"};


	/*
		Two additional arrays are provided whose purpose is to maintain a 
		list of the “best books” and English books. Instead of holding copies 
		of the titles, they will hold the address of a title in the titles array.

		The array’s elements will hold the addresses of the titles array’s
		elements. This will avoid having to duplicate memory for each title and 
		results in a single location for titles. If a title needs to be changed, 
		then the change will only have to be performed in one location.

	*/


	//how do you define a pointer that points to an array of strings?

	char **bestBooks[3]; //a pointer to an array of strings. The space between ** is user a conviniance.
	char **englishBooks[4]; //a pointer to an array of strings or a pointer to pointer 

	//how do you access a particular string from an array full of strings? 
	//The same way you access array elements using their indexes. 

	bestBooks[0] = &titles[0];
	bestBooks[1] = &titles[3]; 
	bestBooks[2] = &titles[5];

	englishBooks[0] = &titles[0]; 
	englishBooks[1] = &titles[1]; 
	englishBooks[2] = &titles[5]; 
	englishBooks[3] = &titles[6];

	//how do you print the above elements to the output? 
	//bestBooks[] ==> holds the addresss. Use * to dereference it to get the underlying value.(string)
	printf("Best Book 1 title: %s\n", *bestBooks[0]);
	printf("Best Book 2 title: %s\n", *bestBooks[1]);
	printf("Best Book 3 title: %s\n", *bestBooks[2]);

	printf("English Book 1 title: %s\n", *englishBooks[0]);
	printf("English Book 2 title: %s\n", *englishBooks[1]);
	printf("English Book 3 title: %s\n", *englishBooks[2]);
	printf("English Book 4 title: %s\n", *englishBooks[3]);


	return 0;
}