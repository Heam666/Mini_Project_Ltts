#include "crypto.h"
/**
 * @brief :For encrypting the message using the plain messahe and the  key
 * 
 * @param message :Plain message which should be encrypted 
 * @param key :Key to encrypt the plain text.
 */

void cc_encrypt(char message[100], int key)
{
    for(int i = 0; message[i] != '\0'; ++i)
    {
        char ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if(ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
        message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if(ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
        message[i] = ch;
        }
    }
    printf("%s", message);
} 
/*   
int main()
{
    char he[100]="heam";
    cc_encrypt(he,3);

}*/