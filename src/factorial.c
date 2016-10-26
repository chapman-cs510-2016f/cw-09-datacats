#include "factorial.h"

/* Definition for "factorial"
 * Note: this must match the type specified in the header file above
 */
int factorial(int n) {
    /* By convention in C, all variables must by type defined at the top
     * of each function */
    int fac = n;
    int count = n;
    if (n == 0) {
    fac = 1; 
    }
    if (n < 0) {
    fac = 0;
    }
    while (count > 1) {
        /* var-- reads the contents of an integer variable, then decrements
           --var decrements the contents of an integer variable, then returns
         */
        count--;
        // a *= b is equivalent to a = a * b
        fac *=count;
    }
    return fac;
}
