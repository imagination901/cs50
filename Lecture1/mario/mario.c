#include <stdio.h>

int main(void)
{
    int pyramide_height;
    do {
        printf("Enter a positive nubmer between 1 and 8: ");
        scanf("%d", &pyramide_height);
    } while (pyramide_height < 1 || pyramide_height > 8);

    for (int row = 1; row <= pyramide_height; row++){
        for (int left_spacing = pyramide_height - row; left_spacing > 0; left_spacing--){
            printf(" ");
        }
        for (int left_block = 0; left_block < row; left_block++){
            printf("#");
        }

        printf("  ");

        for (int right_block = 0; right_block < row; right_block++){
            printf("#");
        }
        printf("\n");
    }
}