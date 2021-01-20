#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int arg, char **argv) 
{

    int *array;
    int cnt = 0;
    char str1[20];
    char yesno[1];
    int tempInt;

    array = (int*) malloc(0);

    bool ask = true;
    
    while (ask)
    {
        printf("give me a number: ");
        scanf("%s", str1);
        tempInt = atoi(str1);
        array = (int*) realloc(array, cnt + 1);
        array[cnt] = tempInt;
        cnt++;

        printf("do you want to add more numbers? y/n: ");
        scanf("%s", yesno);
        if (yesno[0] == 'n') 
        {
            ask = false;
        } else {}
    }

    for (int i = 0; i < cnt; i++)
    {
        printf("%o\n", array[i]);
    }
    
   return 0;
       
}