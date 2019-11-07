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


struct gerelyhajito
{
   char nev;
   int tavolsag;
};
struct gerelyhajito gerelyhajitok[3] = {{'A',0},{'B',0},{'C',0}};

void swap(struct gerelyhajito *a, struct gerelyhajito *b)
{
    struct gerelyhajito  temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct gerelyhajito arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j].tavolsag < arr[j+1].tavolsag)
                swap(&arr[j], &arr[j+1]);
}

void gerely()
{
    printf("Gerely tavolsag (meter):\n");
    for (int i=0; i<3; i++)
    {
        printf("%c gerelyhajito tavolsag: ", gerelyhajitok[i].nev);
        scanf("%d", &gerelyhajitok[i].tavolsag);
    }
    bubbleSort(gerelyhajitok, 3);

    printf("\nSorrend: \n");
    for (int i=0; i<3; i++)
    {
        printf("%c gerelyhajito tavolsag: %d\n", gerelyhajitok[i].nev, gerelyhajitok[i].tavolsag);
    }
}

int main()
{
    // 1. Kérd be a víz hőfokát, állapítsd meg belőle a halmazállapotát!
    //viz_hofoka();

    // 2. Kérd be három gerelyhajító legjobb eredményét (méterben) és hirdess győztest!
    gerely();


    return 0;
}
