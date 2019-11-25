#include<stdio.h>
int linearSearch(int [], int, int);
void main()
{
    int arr[20],n,item,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the search item: ");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
        if(arr[i]==item)
            flag=1;
    if(flag==1)
        printf("Item %d Found\n",item);
    else
        printf("Item %d NOT Found\n",item);
    /*
    if(linearSearch(arr[20], item, n)==1)
        printf("Item %d Found\n",item);
    else
        printf("Item %d Not Found\n",item);*/
}
/*int linearSearch(int a[20], int it, int f)
{
    int flag=0;
    for(int i=0; i<f; i++)
    {
        if(a[i]==it)
            flag = 1;
    }
    return flag;
}
*/
