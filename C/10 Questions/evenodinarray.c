 #include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int evenCount =0,oddCount=0;
    int a;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i<=a-1; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
         evenCount++;
        }
        else
        {
            oddCount++;
        }
        
    }
     printf("Even Numbers = %d\n",evenCount);
     printf("Odd Numbers = %d",oddCount);
    return 0;
 }
 