#include <stdio.h>

void uniqueEle(int array[], int n){
   int i,j;
   int count = 1;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(array[i] == array[j] && i != j)
         break;
      }
      if(j == n ){
         printf("\n\t\tunique elements in an array is [%d] : %d \n\n\n\n",count,array[i]);
         ++count;
      }
   }

}

void find_duplicate(int arr[],int n)
{
int i,j;

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("\n\t\tDuplicate elements in given array: \n");

   printf("\n\t\tDuplicate elements are: \n\n");
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n\n\t\t",arr[i]);
    }
   }
   }
}
int remove_duplicate(int arr[], int n)
{
printf("\nArray Before Removing Duplicates: ");
  for (int i = 0; i < n; i++)
    printf("\n\n\t\t%d\n\n\t\t ", arr[i]);

  if (n == 0 || n == 1)
    return n;

  int temp[n];

  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];
  temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
    arr[i] = temp[i];

  return j;
}

int main()
{
    printf("\n\n\n\n\t\t\t\tenter array size\n\n\n\t\t");
  int n;
  scanf("%d", &n);
  int arr[n];
  int i;

  for (i = 0; i < n; i++)
  {
      printf("\n\n\n\n\t\t\t\tenter %d element\n\n\n\t\t",i);

    scanf("%d", &arr[i]);
  }
  do{
        printf("\t\t\t22MCI0004 Dhanvanth\n\t");
printf("\n\n\n\t\t\t\tMENU CARD\n\n\t\tEnter the choice\t\t \n\n\n\n\n\t\t");
printf("1.Remove duplicate elements\n\n\t\t 2.fIND duplicate \n\n\t\t 3.print unique elements\n\n\t\t 4 to EXIT \n\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
 case 1:
     printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  n = remove_duplicate(arr, n);

  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

    break;

case 2:find_duplicate(arr,n);break;
case 3:uniqueEle(arr,n);
break;

//default:exit(0);


}
  }while(1);




  return 0;
}
