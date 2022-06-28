/*
DOCUMENTATION
IF YOU WANT TO KNOW HOW CODE WORKS REMOVE THE COMMENTS AND RUN
*/


#include<stdio.h>
#include<stdlib.h>

int size;
int partition(int *array,int low,int high);
void swap(int *a,int *b);
void quicksort(int *array,int start, int end);
void printArray(int *array,int size) ;


void printArray(int *array,int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void swap(int *a,int *b)

{
    int t=*a;
    *a=*b;
    *b=t;
    
}

int partition(int *array,int low,int high)
{

 int pointer=low;
 int pivot=low;

 for(int i=low;i<=high;i++)
 {
  //printArray(array,size);

  if(array[i]<array[pivot])
  {
     pointer++;
     //printf("SWAPPED %d AND %d \n",array[pointer],array[i]);
     swap(array+pointer,array+i);

  }
 }
 printf("MASTER SWAPPED %d AND %d \n",array[pointer],array[pivot]);
 swap(array+pointer,array+pivot);
 return(pointer);

}

void quicksort(int *array,int low,int high)

{

    if(low<=high) //SERVES AS AND END TO THE BELOW RECURSION FOR THAT IT DOESNT LET LOW=HIGH AND BEYOND
    {
    int pi=partition(array,low,high);
    quicksort(array,low,pi);
    quicksort(array,pi+1,high);
    }
}

int main()

{
    printf("ENTER THE SIZE OF ARRAY YOU WANT :\n");
    scanf("%d",&size);                              //GLOBAL VARIABLE
    int *array=(int *)malloc(sizeof(int)*size);

    for(int i=0;i<size;i++){
        printf("ENTER THE ELEMENT %d :",i+1);
        scanf("%d",array+i);
    }

    printf("THE ARRAY GIVEN IS :\n");
    printArray(array,size);//PRINT ARRAY NEEDS SIZE FOR PASSIG SIZE 

    quicksort(array,0,size-1);//QUICKSORT NEEDS INDEX FOR PASSING SIZE-1
    printf("THE ARRAY SORTED IS :\n");
    printArray(array,size);


}
