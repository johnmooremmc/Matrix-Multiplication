#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][3], b[3][3], result[3][3];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int placeholder = 0;

    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    //printf("%d : %d \n", arows, acolumns);

    printf("Enter the elements of matrix a: \n");
    for(i=0; i<arows; i++)
    {

     for(j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);

        }
    }

    for(i=0; i<arows; i++){
        for(j=0; j<acolumns; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if(brows != acolumns) {
        printf("BREAK \n");
    }
    else {
        printf("Enter the elements of matrix b: \n");
        for(i=0; i<brows; i++) {
            for(j=0; j<bcolumns; j++){
                    scanf("%d", &b[i][j]);

            }
        }
    }

    for(i=0; i<brows; i++){
        for(j=0; j<bcolumns; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(i=0; i<arows; i++){
        for(j=0; j<bcolumns; j++){
            for(k=0; k<brows; k++){
                placeholder += a[i][k] * b[k][j];
            }
            result[i][j] = placeholder;
            placeholder = 0;
        }
    }



    for(i=0; i<arows; i++){
        for(j=0; j<bcolumns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    // 2by2 printf("%d %d \n%d %d", a[0][0], a[0][1], a[1][0], a[1][1]);


    return 0;
}

