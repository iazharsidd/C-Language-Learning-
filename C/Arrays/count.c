 #include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count =0;
    int a;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i<=a-1; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
        if (arr[i]>n)
         count++;
    }
     printf("%d",count);
    return 0;
 }