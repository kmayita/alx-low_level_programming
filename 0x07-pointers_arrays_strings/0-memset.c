#include "main.h" 

/**

* _memset - files a memory block with a constant byte 
* Qs: address to memory block
* Qb: char to be used 
* Qn: number of bytes to be used 
*
*Return: pointer to the memory block 
*/

char *_memset(char *s char b, unsigned int n)
{
         while (n) 
          {
                s[n - 1] = b;
                n--;
           }
           return (s);
