#include "crypto.h"
int main()
{
char message[100], ch;
int i, key,n;
printf("For encryption type 1\nFor Decryption type 2\n");
scanf("%d",&n);
if(n==1)
{
printf("Enter a message to encrypt: ");
//gets(message);
scanf("%s",&message);
printf("Enter key: ");
scanf("%d", &key);
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 'z'){
ch = ch - 'z' + 'a' - 1;
}
message[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
message[i] = ch;
}
}
printf("Encrypted message: %s", message);
}
else
{
    
char message[100], ch;
int i, key;
printf("Enter a message to decrypt: ");
//gets(message);
scanf("%s",&message);
printf("Enter key: ");
scanf("%d", &key);
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch - key;
if(ch < 'a'){
ch = ch + 'z' - 'a' + 1;
}
message[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch - key;
if(ch < 'A'){
ch = ch + 'Z' - 'A' + 1;
}
message[i] = ch;
}
}
printf("Decrypted message: %s", message);

}
return 0;
}


