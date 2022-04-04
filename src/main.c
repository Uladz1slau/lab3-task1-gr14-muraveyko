#include <stdio.h>

int main(int argc, const char * argv[]) {
    int dec2bin(int a);
    int amount;//кол-во чисел в массиве
    scanf("%d", &amount);
    int numbers[amount]; //массив
    int num; // числа в массиве
    //int second[amount];
    //int numSecond;
    
    for(int i = 0; i < amount; i++)
      {
        scanf("%d", &num);
          numbers[i] = dec2bin(num);
          
      }
    
    
   
    
    for(int i = 0; i< amount; i++){ // Запускаем цикл для вывода массива на экран
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    return 0;
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

