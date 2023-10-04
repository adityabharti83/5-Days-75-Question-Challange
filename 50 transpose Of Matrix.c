#include <stdio.h>

int main() {
    int matrix[3][3]={1,2,3,4,5,6,7,8,9}, transpose[3][3]={{0}};
	int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

