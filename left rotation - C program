#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int new[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    int rot;
    printf("Enter rotations : ");
    scanf("%d",&rot);
    
    for(int i=rot;i<n;i++){
        new[i-rot]=arr1[i];
    }
    for(int i=0;i<rot;i++){
        new[n-rot+i]=arr1[i];
    }
    
    printf("\nAfter rotations: ");
    for(int i=0;i<n;i++){
        printf("%d ",new[i]);
    }
    
    return 0;
}
