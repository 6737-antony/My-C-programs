#include <stdio.h>

int main() 
{
    int i, j, k;
    int marks[2][2][3] = 
    {
        { {5, 12, 13},
          {9, 19, 21} },
        { {74, 55, 41},
          {12, 25, 84} }
    };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", marks[i][j][k]);
            }
            printf("\n"); 
        }
        printf("\n"); 
    }

    return 0;  
}