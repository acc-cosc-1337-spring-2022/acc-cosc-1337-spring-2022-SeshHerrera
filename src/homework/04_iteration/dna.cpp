#include "dna.h"


int factorial(int num){

    int i = num - 1;
	while(i > 1){
		num = num * i;
        i--;
    }
    return num;
}



int gcd(int num1, int num2){
    
    while (num1!=num2)
    {
        if (num1 > num2){
            num1 = num1 - num2;
        }
        else if(num1 < num2){
            num2 = num2 - num1;
            
        }
    }
    return num1;
    
}
