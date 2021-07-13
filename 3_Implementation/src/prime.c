#include "crypto.h"

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
