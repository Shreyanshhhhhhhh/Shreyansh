// Find the second largest element in an array
// int a[10]={1,2,3,4,5,6} {4,3,2,1} {3,4,2,1} {3,2,4,1} {3,2,1,4}                        
#include<stdio.h>
int second_largest(int arr[],int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    printf("\nThis is the array in Ascending order: ");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nSecond Largest Element in the array is: %d ",arr[n-2]);

    return 0;
}

int main(){
    int n;
    printf("How many Elements you want to Enter:- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        int temp;
        printf("Enter The Element: ");
        scanf("%d",&temp);
        arr[i]=temp;
    }
    //Output the array
    printf("Your Enterd Array is here : \n");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    /* this is temporary */
    second_largest(arr,n);

    return 0;
}