#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void viz_hofoka()
{
    int hofok;

    printf("Viz hofoka: ");
    scanf("%d", &hofok);

    if (hofok <= 0)
        printf("Halmazallapota jeg\n");
    else
        if (hofok < 100)
            printf("Halmazallapota folyekony\n");
        else printf("Halmazallapota gaz\n");
}

void gerely()
{
    int gerely1, gerely2, gerely3;
    char helyezesek[3];

    printf("\Gerely tavolsag (meter):\n");
    scanf("%d %d %d", &gerely1, &gerely2, &gerely3);

    helyezesek[gerely1]='A';
    helyezesek[gerely2]='B';
    helyezesek[gerely3]='C';

    printf("\nSorrend: \n");
    for (int i=1;i<=3;i++)
    {
        printf("%c \n", helyezesek[i]);
    }
}

int main()
{
    // 1. Kérd be a víz hőfokát, állapítsd meg belőle a halmazállapotát!
    viz_hofoka();

    // 2. Kérd be három gerelyhajító legjobb eredményét (méterben) és hirdess győztest!
    gerely();


    return 0;
}
