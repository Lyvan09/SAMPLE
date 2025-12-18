#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 

// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ); 

// Definition d'une fonction de permutation.
void permutation(int *a, int *b  );

//Definition d'une fonction de resolution d'équation du second degré
int equationSecondDegre(int a, int b, int c, float *x1, float *x2);

//Definition d'une fonction qui determine si un nombre est premier
int estPremier(int num);

//Definition d'une structure point et fonction de calcul de la distance
typedef struct {
    float x;
    float y;
} Point;
float distance (Point p1, Point p2, float dist);

#endif 