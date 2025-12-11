#include <stdio.h> 
#include <stdlib.h> 
#include "samplelib.h"

//main function to test fact and power
int main( void ) { 
printf("Main function to test fact and power\n");
int result = power( 2, 3 ); 
printf( "2^3 == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 

printf("*****************************\n");

//Main function to test permutation
printf("Main function to test permutation\n");
int first = 16 ;
int second = 20;
printf("first = %d || second = %d \n" , first, second);
permutation( &first, &second);
printf("first = %d || second = %d \n" , first, second);

return EXIT_SUCCESS; 
} 
   