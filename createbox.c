#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char* userH = malloc(sizeof(unsigned char));
    char* userW = malloc(sizeof(unsigned char));
    printf("Height: ");
    scanf("%s", userH);
    printf("Width: ");
    scanf("%s", userW);
    int height = atoi(userH);
    int width = atoi(userW);
    free(userH);
    free(userW);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}