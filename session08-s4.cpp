#include <stdio.h>

int main() {
    int max;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    
    printf("Phan tu lon nhat trong mang la:%d ", max);

    return 0;
}

