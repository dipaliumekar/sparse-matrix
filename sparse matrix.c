#include <stdio.h>

int main() {
    int r,c,nz=0;
    printf("Enter the no. of rows and columns \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the element at a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0){
                nz++;
            }
        }
    }
    if(nz<=(r*c)/2){
        printf("Matrix is Sparse Matrix\n");
        int trip[nz][3],l=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(a[i][j]!=0){
                    trip[l][0]=i+1;
                    trip[l][1]=j+1;
                    trip[l][2]=a[i][j];
                    l++;
                }
            }
        }
        printf("Triplet Representation : \n");
        printf("Row  Col  Val\n");
        for(int i=0; i<nz; i++){
            for(int j=0; j<3; j++){
                printf(" %d   ",trip[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Not A sparse Matrix\n");
    }
    return 0;
}
