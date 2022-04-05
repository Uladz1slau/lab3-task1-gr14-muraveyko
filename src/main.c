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
        numbers[i] = countOne(dec2bin(rand()%100));
        
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


