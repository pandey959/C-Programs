#include <stdio.h>    
#include<conio.h>
void main()    
{      
    int arr[] = {5, 2, 8, 7, 1};     
    int temp = 0;    
    int length = sizeof(arr)/sizeof(arr[0]);        
    printf("Elements of Original Array:\n");   
  
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
            
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
    printf("Elements of array sorted in Ascending Order:\n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    getch();    
}     
