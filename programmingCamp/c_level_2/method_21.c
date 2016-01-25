#include "method.h"

/*
*	2X2 * 2X2 행렬 연산하기
*/

int problem_21(){
    int A[2][2]={{5,7},{2,-5}};
	int B[2][2]={{3,0},{-5,1}};
    int S[2][2];
 
    int i,j,k;
    int sum;
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            sum=0;
            for(k=0; k<2; k++){
                sum+=A[i][k]*B[k][j];
            }
            S[i][j]=sum;
        }
    }
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t",S[i][j]);
        }
        printf("\n");
    }
 
	return 0;
}