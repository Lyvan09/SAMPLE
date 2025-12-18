#include <stdio.h> 
#include <stdlib.h> 
#include "Bibliothèque.h"

//Fonction principale de test de la fonction fact 
int main( void ) { 
printf("*****************************\n");
printf("main principale de test de la  fonctions fact\n");
int result = power( 2, 3 ); 
printf( "2^3 == %d\n", result ); 

printf("\n");

//Fonction principale de test de la fonction power
printf("*****************************\n");
printf("main principale de test de la fonction power\n");
result = fact( 6 ); 
printf( "6! == %d\n", result ); 

printf("\n");

//fonction principale de test de la fonction permutation
printf("*****************************\n");
printf("main principale de test de la fonction permutation\n");
int first = 16 ;
int second = 20;
printf("first = %d || second = %d \n" , first, second);
permutation( &first, &second);
printf("first = %d || second = %d \n" , first, second);

printf("\n");

//fonction principale de test de la fonction equationSecondDegre
printf("*****************************\n");
printf("main principale de test de la fonction equationSecondDegre\n");
float x1 , x2 ;
int nombre_solutions = equationSecondDegre(1, -5, 6, &x1, &x2);
            if (nombre_solutions == 0) {
                printf("Il n'y a pas de solution reelle.\n");
            } 
            else if (nombre_solutions == 1) {
                printf("La solution double est x = %.2f\n", x1);
            } 
            else if (nombre_solutions == 2) {
                printf("Les solutions sont x1 = %.2f et x2 = %.2f\n", x1, x2);
            }
            else {
                printf("Ce n'est pas une équation du second degré.\n");
            }

printf("\n");

//main principale de test de la fonction estPremier
printf("*****************************\n");
printf("main principale de test de la fonction estPremier\n");
int nombre = 4;
if (estPremier(nombre)){
    printf("%d est un nombre premier.\n", nombre);
}
else{
    printf("%d n'est pas un nombre premier.\n", nombre);
}

printf("\n");

//fonction principale de test de la structure points
    printf("*****************************\n");
    printf("fonction principale de test de la structure points\n");
    Point p1 = {4.0, 8.0};
    Point p2 = {10.0, 12.0};
    float dist ;
    double resultat = distance(p1, p2, dist);
    printf("La distance entre les points p1(%.2f, %.2f) et p2(%.2f, %.2f) est %.2f\n", p1.x, p1.y, p2.x, p2.y, resultat);

return EXIT_SUCCESS; 
} 

