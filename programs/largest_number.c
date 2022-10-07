/*
* C Program to find second maximum element in an array
*/
#include <stdio.h>
#include <conio.h>
#include <limits.h>
 
int main(){
    int inputArray[500], elementCount, counter;
    int maxElement, secondMaxElement;
     
    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    if(elementCount < 2){
        printf("Number of elements should be more \
            than or equal to two");
        return 0;
    }
         
    printf("Enter %d numbers \n", elementCount);
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    /* Initialize maxElement and secondMaxElement 
       with INT_MIN */
     
    maxElement = secondMaxElement = INT_MIN;
     
    for(counter = 0; counter < elementCount; counter++){
        if(inputArray[counter] > maxElement){
            secondMaxElement = maxElement;
            maxElement = inputArray[counter];
        } else if (inputArray[counter] > secondMaxElement 
            && inputArray[counter] != maxElement){
            secondMaxElement = inputArray[counter];
        }
    }
    /* Print Second Maximum element */
    printf("Second Maximum element: %d", secondMaxElement);
         
    getch();
    return 0;
}
