#include "main.h"

int checkprime (int n , int i);

int checkprime (int n , int i)
  
{
  
  if ( n < 2)
    
    {
      
      return 0;
      
    }
  
  if (n == 2 || n == 3)
    
    return (1);
  
  if (n % i == 0)
    
    {
      
      return (0);
      
    }
  
  if ( i > n/2)
    
    return (1);
  
  else
    return  (checkprime  (n , i+1));
  
}



int is_prime_number(int n)
  
{
 int i = 2;
 return (checkprime (n , i));
    
    }
