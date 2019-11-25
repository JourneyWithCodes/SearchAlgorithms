#include<stdio.h>
void main()
{
    int arr[20],n,item,f=0,mid;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in sorted order: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the search item: ");
    scanf("%d",&item);

    int l=n-1;
    
    while(f<=l)
    {
        mid = (f+l)/2;                                              // calculate the mid location
        if(arr[mid]<item)                                           // if mid element<item set f=mid+1
            f=mid+1;
        else if(arr[mid]==item)
        {
            printf("Item %d Found.",item);
            break;
        }
        else                                                        // else set l=mid-1
            l=mid-1;
    }
    if(f>l)
    	 printf("Item %d NOT Found.",item);
}
