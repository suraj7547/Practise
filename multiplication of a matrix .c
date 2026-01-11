/*
Rules For Matrix Multiplication
a[m][n] x b[p][q] = res[m][q]
1). n and p should be equal 
2). resultant order will be m x q
*/
#include <stdio.h>
int main(){

//initialization 

int a[3][2] = {{1,2},{3,4},{5,6}};
int b[2][4] = {{1,2,3,4},{5,6,7,8}};
int res[3][4];
int t = 2; //rows and columns of the matrix

//multiplicaton of matrix 

for(int i = 0;i<3;i++){
    for(int j = 0;j<4;j++){
        res[i][j]=0;
        for(int k=0;k<2;k++){
            res[i][j] += a[i][k]*b[k][j];
        }
    }
}

//printing the result

for(int i = 0;i<3;i++){
    for(int j = 0;j<4;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}


return 0;
}
