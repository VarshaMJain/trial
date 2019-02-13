******************************************************************************
* File Name: check_little_big_endian.c
* Description:  This file contains function to check big or little endian
* Tool-Chain: AVR GCC Compiler
**************************************************/

/*************************************************
*                      Includes
**************************************************/

#include<stdio.h>
#include<stdlib.h>
/**************************************


/************************************************
*                      Internal function
****************************************************/
/***********************************************
* Name:in main function itself we are checking whether the stored number is big or little endian


**********************************************/


int main()
{
unsigned int x=0x88994411;
char *ch =(char *)&x ;
if(*ch==0x10)
{
 printf("little endian\n");

}
else
{
 printf("big endian\n");

}
return 0;

}


/******************************************************************************
*                      End of File
******************************************************************************/