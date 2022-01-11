#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][3], b[3][3];
    int arows, bcolumns, dimension;
    int i, j, k;
    int dot = 0;
    int amag = 0, bmag = 0;
    float anglerad, angledeg, magnitude;

    printf("Dimensionality Degree: ");
    scanf("%d", &dimension);

    printf("\n");


    arows = 1;
    bcolumns = 1;

    printf("Elements of A: \n");
    for(i=0; i<arows; i++){
        for(j=0; j<dimension; j++){
            scanf("%d", &a[i][j]);
        }
    }

        printf("\n");

        printf("Elements of B: \n");
        for(i=0; i<dimension; i++){
            for(j=0; j<bcolumns; j++){
                scanf("%d", &b[i][j]);
            }
        }

         for(i=0; i<arows; i++){
            for(j=0; j<bcolumns; j++) {
                for(k=0; k<dimension; k++){
                    dot += a[i][k] * b[k][j];
                }
            }
        }

        printf("\n");


        printf("Matrix A: \n");
         for(i=0; i<arows; i++){
            for(j=0; j<dimension; j++) {
                printf("%d ", a[i][j]);
                amag += a[i][j];
            }
            printf("\n");
        }

        printf("\n");

         printf("Matrix B: \n");
         for(i=0; i<dimension; i++){
            for(j=0; j<bcolumns; j++) {
                printf("%d ", b[i][j]);
                bmag += b[i][j];
            }
            printf("\n");
        }

        magnitude = sqrt(amag) * sqrt(bmag);
        anglerad = acos(dot/magnitude);
        angledeg = 57.2957795*anglerad;


        printf("\n");
        printf("Dot product: %d \n", dot);
        printf("Angle: %f : %f \n", anglerad, angledeg);

    return 0;
}
