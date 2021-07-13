#include "crypto.h"

long int p,q,n,t,flag,e[100],d[100],temp[100],j,m[100],en[100],i,z; 
char msg[100]; 
void ce(); 
long int cd(long int); 
void encrypt(int); 
void decrypt(int);

int main()
{
    char mess[100];
    int a,b,c;
    printf("Select the following\n");
    printf("1)Low security.\n2)High security.\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("1: To encrypt\n2: To decrypt\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("Enter the message:");
            scanf("%s",&mess);
            printf("Enter the key:");
            scanf("%d",&b);
            printf("The encrypted message is:");
            cc_encrypt(mess,b);
        }
        else
        {
            printf("Enter the message:");
            scanf("%s",&mess);
            printf("Enter the key:");
            scanf("%d",&b);
            cc_decrypt(mess,b);
        }

    }
    else if(c==2)
    {
        printf("High level security using RSA");
        printf("\nENTER FIRST PRIME NUMBER\n");
        scanf("%ld",&p);
        flag=prime(p);
        if(flag==0)
        {
            printf("\nWRONG INPUT\n"); 
            exit(1);
        }
        printf("\nENTER ANOTHER PRIME NUMBER\n");
        scanf("%ld",&q);
        flag=prime(q);
        if(flag==0||p==q)
        {
            printf("\nWRONG INPUT\n");
            exit(1);
        }
        n=p*q;
        t=(p-1)*(q-1);
        ce();
        printf("\nPOSSIBLE VALUES OF e AND d ARE\n");
        for(i=0;i<j-1;i++)
        {
            printf("\n%ld)\t%ld\t\t%ld",i,e[i],d[i]);
        }
        printf("\nSelect thr key combination:");
        scanf("%ld",&z);
        printf("\nENTER MESSAGE\n"); 
        fflush(stdin); 
        scanf("%s",msg);
        for(i=0;msg[i]!=NULL;i++)
        {
            m[i]=msg[i];
        } 
        encrypt(e[z]);
        decrypt(d[z]);
        }
        //test_main();
        return 0;
}
 
 
void ce() 
{ 
    int k; 
    k=0; 
    for(i=2;i<t;i++) 
        {
            if(t%i==0)
                continue;
                flag=prime(i);
                j=sqrt(i);
            if(flag==1&&i!=p&&i!=q)
            {
                e[k]=i; flag=cd(e[k]);
                if(flag>0) 
        { 
            d[k]=flag; 
            k++; 
        } 
        if(k==99) 
            break; 
        } 
    } 
}
 
long int cd(long int x) 
{ 
    long int k=1; 
    while(1) 
    { 
        k=k+t; 
        if(k%x==0) 
            return(k/x); 
    } 
} 
void encrypt(int key) 
{ 
    long int pt,ct,k,len; 
    i=0; 
    len=strlen(msg); 
    while(i!=len) 
    { 
        pt=m[i]; 
        pt=pt-96; 
        k=1; 
        for(j=0;j<key;j++) 
        { 
            k=k*pt; 
            k=k%n; 
        } 
        temp[i]=k; 
        ct=k+96; 
        en[i]=ct; 
        i++; 
    } 
    en[i]=-1; 
    printf("\nTHE ENCRYPTED MESSAGE IS\n"); 
    for(i=0;en[i]!=-1;i++) 
        printf("%c",en[i]); 
} 
void decrypt(int key) 
{ 
    long int pt,ct,k; 
    i=0; 
    while(en[i]!=-1) 
    { 
        ct=temp[i]; 
        k=1; 
        for(j=0;j<key;j++) 
        { 
            k=k*ct; 
            k=k%n; 
        } 
        pt=k+96; 
        m[i]=pt; 
        i++; 
    } 
    m[i]=-1; 
    printf("\nTHE DECRYPTED MESSAGE IS\n"); 
    for(i=0;m[i]!=-1;i++) 
        printf("%c",m[i]); 
}
 