#include "crypto.h"
/**
 * @brief :Function to check wheather the entered number is prime or not.
 * 
 * @param pr : Prime value which has been tentered by the user.
 * @return int : returned value is 0 then its not prime and the returned value is 1 then it is prime.
 */
int prime(long int pr) 
{ 
    long int i,j; 
    j=sqrt(pr); 
    for(i=2;i<=j;i++) 
    { 
        if(pr%i==0) 
            return 0; 
    } 
    return 1; 
}
