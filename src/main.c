#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int summ (int);
int countOne(int);

int main(int argc, const char * argv[]) {
    int dec2bin(int a);
    srand(time(NULL));

    int amount;//кол-во чисел в массиве
    scanf("%d", &amount);
    int numbers[amount]; //массив
   // int num; // числа в массиве
    int i;
  
   
    
    for (i=0; i< amount; i++) {
       // numbers[i] = rand()%100;
       numbers[i] = countOne(dec2bin(rand()%100));
        printf("numbers[%d] = %d\n", i, numbers[i]);
        
        }
    
    for (int i=0; (i < (amount-1)); i++)
    {
        for (int m=0; (m < (amount - i - 1)); m++)
        {
            if(numbers[m] > numbers[m+1])
            {
                int p = numbers[m];
                numbers[m]=numbers[m + 1];
                numbers[m + 1] = p;
            }
        
        }
    
    }
    
    for (i=0; i < amount; i++) {
        
    printf("numbers[%d] = %d\n", i, numbers[i]);
        
    }
    
    return 0;
}


int countOne(int c)
{
    int count;
    for (count = 0; c != 0; c &= (c - 1))
        ++count;
    return count;
    
}

int dec2bin(int a)
{
    int bin = 0;
    int k = 1;
    
    while (a)
    {
        bin += (a % 2) * k;
        k = k * 10;
        a = a / 2;
    }

    return bin;
}
