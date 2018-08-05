#include <stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(void) {
 int i,minIndex,maxIndex,n;
 int max=-32768; //negative limit for integer value
 int min=32767; //positive limit for integer value
 int array[10001];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&array[i]);
//logic starts here and will extract max as maximum and min as minimum value and record their indexes
  for(i=0;i<n;i++)
   {
       if(max<array[i])
        {
          max=array[i];
          maxIndex=i;
        }
       if(min>array[i])
        {
          min=array[i];
          minIndex=i;
        }
   }
           swap(&array[0],&array[maxIndex]);  //place maximum value at first position
           swap(&array[1],&array[minIndex]);  //place minimum value at second position
           for(i=0;i<n;i++)
             printf("%d ",array[i]);
    return 0;
}
