/*#include <stdio.h>

int main() {
    int rows = 5, cols = 10;
    int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int rows = 5, cols = 10,i,j;
    
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int rows = 5,i,j;
    
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


#include <stdio.h>

int main() {
    int rows = 5,i,j,k;
    
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for ( k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


#include <stdio.h>

int main() {
    int rows = 5;
    int space, i, j;
    
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        
        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        
        printf("\n");
    }
    
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        
        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        
        printf("\n");
    }
    
    return 0;
}
*/
