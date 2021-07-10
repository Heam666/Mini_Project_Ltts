#include "crypto.h"

int main()
{
    char mess[100];
    int n, k;
    printf("1: To encrypt\n2: To decrypt\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the message:");
        scanf("%s",&mess);
        printf("Enter the key:");
        scanf("%d",&k);
        cc_encrypt(mess,k);
    }
    else{
         printf("Enter the message:");
        scanf("%s",&mess);
        printf("Enter the key:");
        scanf("%d",&k);
        cc_decrypt(mess,k);
    }
    return 0;
}