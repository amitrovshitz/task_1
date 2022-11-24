#include <stdio.h>
#include "NumClass.h"
int main()
{
       int num_1,num_2;
    scanf("%d %d",&num_1,&num_2);
    printf("The Armstrong numbers are:");
    for(int i=num_1;i<=num_2;i++)
    {    
        if(isArmstrong(i)!=0)
        printf(" %d",i);
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i=num_1;i<=num_2;i++)
    {    
        if(isPalindrome(i)!=0)
        printf(" %d",i);
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i=num_1;i<=num_2;i++)
    {    
        if(isPrime(i)!=0)
        printf(" %d",i);
    }
     printf("\n");
     printf("The Strong numbers are:");
    for(int i=num_1;i<=num_2;i++)
    {    
        if(isStrong(i)!=0)
        printf(" %d",i);
    }
      printf("\n");

    return 1;
}