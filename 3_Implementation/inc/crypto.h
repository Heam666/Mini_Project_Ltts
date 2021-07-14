/**
 * @file crypto.h
 * @author Heam Kumar(heam@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __crypto_H
#define __crypto_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<conio.h>
#include<math.h>

/**
 * @brief 
 * for the validation purpose.
 * 
 */
int prime(long int );
void cc_encrypt(char message[100], int key);
void cc_decrypt(char message[100], int key);


#endif
