    #include <math.h>
    #include "Bibliothèque.h" 
    
    // Définition d'une fonction de calcul de factorielle. 
    unsigned int fact( unsigned int value ) { 
    unsigned int result = 1; 
    while ( value > 1 ) { 
    result *= value; 
    value --; 
    } 
    return result; 
    } 

    // Définition d'une fonction d'élévation à une puissance données. 
    int power( int value, unsigned int pow ) { 
    if ( pow == 0 ) return 1; 
    if ( pow == 1 ) return value; 
    int accumulator = 1; 
    while( pow > 0 ) { 
    accumulator *= value; 
    pow--; 
    } 
    return accumulator; 
    } 

    // Definition d'une fonction de permutation.
    void permutation(int *a, int *b  ){
        int c = 0;
        c = *a;
        *a = *b;
        *b = c;
    }

    //Definition d'une fonction de resolution d'équation du second degré
    int equationSecondDegre(int a, int b, int c, float *x1, float *x2){
        int delta = power(b , 2) - (4*a*c);
        if ( a != 0){
             if (delta < 0){
                return 0;
            }
            else if (delta == 0){
                *x1 = -b/(2*a);
                return 1;
            }
            else if (delta > 0){
                *x1 = (-b + sqrt(delta))/(2*a);
                *x2 = (-b - sqrt(delta))/(2*a);
                return 2;
            }
        }
        else{
            return 3;
        }
    }

    //Definition d'une fonction qui determine si un nombre est premier
    int estPremier(int num){
        if (num <= 1){
            return 0;
        }
        for (int i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                return 0;
            }
        }
        return 1;
    }
    
    //Definition d'une fonction pour calculer la distance entre deux points
    float distance (Point p1, Point p2, float dist){
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    dist = sqrt( power(dx, 2) + power(dy, 2) );
    return dist;
    }