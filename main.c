#include <stdio.h> 
#include <stdlib.h> 
#include "samplelib.h"

//main function to test fact and power
int main( void ) { 
int result = power( 2, 3 ); 
printf( "2^3 == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
return EXIT_SUCCESS; 
} 
-   
//Main function to test permutation
int main(){ 
    int first = 16 ;
    int second = 20;
    printf(" first = %d \n second = %d \n" , first, second);
    permutation( &first, &second);
    printf(" first = %d \n second = %d" , first, second);
    return 0;
}