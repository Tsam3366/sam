#include<stdio.h>
int main(){
int n,i,j;
printf("Enter n:\n");
scanf("%d",&n);
int a[n][n];
printf("Enter the elements of matrix:\n");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
}
printf("Matrix is:\n");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
}
printf("Transpose Matrix is:\n");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[j][i]);
        }
        printf("\n");
}
return 0;
}

