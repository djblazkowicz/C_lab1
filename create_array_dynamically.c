#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#pragma warning(disable : 4996)

int main(int arg, char** argv)
{

    int* array;
    int cnt = 0;
    int size;
    char yesno[1];
    int tempInt;

    array = (int*)malloc(cnt * sizeof(int));

    bool ask = true;

    while (ask)
    {
        tempInt = 0;
        printf("give me a number: ");
        scanf("%d", &tempInt);
        size = cnt + 1;
        array = (int*)realloc(array, size * sizeof(int));
        array[cnt] = tempInt;
        cnt++;

        printf("do you want to add more numbers? y/n: ");
        scanf("%s", yesno);
        if (yesno[0] == 'n')
        {
            ask = false;
            break;
        }
        else {}
    }

    for (int i = 0; i < cnt; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;

}
