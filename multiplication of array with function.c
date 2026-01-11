#include <stdio.h>
void input(int r,int c,int a[r][c]){
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void print(int r,int c, int a[r][c]){
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    int res[r][c];
    input(r,c,a);
    input(r,c,b);
    // print(r,c,a);
    // print(r,c,b);
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            matrix[i][j]=0;
            for(int k =0;k<c;k++){
                matrix[i][j] += a[i][k]*b[k][j];
            }
        }
    }

print(r,c,matrix);
    

}
