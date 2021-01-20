#include <stdio.h>
#include <stdlib.h>

int main(int arg, char **argv) 
{   

    //not my actual grades but the principle works.
    int grades_1[6] = {1,2,3,4,5,6};

    //since we need to know what to put in the new array I just put the data in here
    int grades_2[10] = {7,8,9,10,11,12,13,14,15,16};
    int matric = 40417349;

    //this is the new array we will work with in the end
    int *array_malloc;
    
    //helper vars
    int count;
    int i;



    //get original array size
    size_t n = sizeof(grades_1);
    int grades_1_size = n;
    int grades_1_actual_size = n / sizeof(int);

    //get size of other grades array for later math
    n = sizeof(grades_2);
    int grades_2_size = n;
    int grades_2_actual_size = n / sizeof(int);

    printf("size of grades_1: %zu.\n", grades_1_actual_size );

    //get size for final array
    count = grades_1_actual_size + grades_2_actual_size + 1;

    printf("size of new array_malloc will be: %zu.\n", count );

    //allocate memory for new array
    array_malloc = malloc(count * sizeof(int));


    //populate new array and print to console the results
    for (i = 0; i < count; i++)
    {
        //this is ugly but it seems to work
        //starts new array with grades_1 content then add the rest of the required elements
        if (i < grades_1_actual_size) 
        {
            array_malloc[i] = grades_1[i];
        }
        if (i >= grades_1_actual_size && i != count - 1) 
        {
            array_malloc[i] = grades_2[i - grades_1_actual_size];
        }
        if (i == count - 1)
        {
            array_malloc[i] = matric;
        }

        printf("%zu\n", array_malloc[i]);  
    }

    return 0;
}