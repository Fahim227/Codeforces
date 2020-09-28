#include<stdio.h>
#include<string.h>
#define WORD 15
int main(void)
{
    char a[WORD];
    int x, y;
    int lenght, occurrences;
    int noduplicate, print;
    printf("Enter a word>\n");
    scanf("%s",a);
    lenght = strlen(a);
    noduplicate = 0;
    for (x = 0; x < lenght; x++)
    {
        occurrences = 0;
        print = 0;
        for (y = 0; y < lenght; y++)
        {
            if (a[x] == a[y])
            {
                occurrences++;
                noduplicate++;
                if (occurrences > 0 && x > y)
                    print = 1;
            }
        }
        if (print != 0)
        {
                 continue;
            }
        if(occurrences >= 2 && a[x])
            {
                printf("Duplicate letter: %c, Occurrences: %d\n", a[x], occurrences);
            }
    }
        if (noduplicate == lenght)
        {
            printf("No duplicates found\n");
        }
    return 0;
}
