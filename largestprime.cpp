/* 
 * File:   main.cpp
 * Author: eamorrow
 * 
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

/*
 * Project Euler 3
 */

bool isPrime(long number)
{
    if(number == 1)
        return true;
    
    int factors=0;
    long i = 2;
    
    while((factors<1) && (i<number))
    {
        if(number%i == 0)
        {
            factors++;
        }
        i++;
    }
    
    if(factors > 0)
        return false;
    else
        return true;
        
}
long LargestPrimeFactor(long num)
{
   long largest = 0;
   long n;
   
   if(num%2 == 0)
   {
       largest =2;
       n=3;
   }
   else
   {
        n = 1;
   }
   
   while(n<num)
   {
       // if n is a factor
       if(num%n == 0)
       {
            if(isPrime(n))
            {
                largest = n;
            }
       }
       
       n+=2;
   }
   return largest;     
}

int main(int argc, char** argv) {
    std::cout<<LargestPrimeFactor(600851475143);
    return 0;
}



