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

void dolgozat_szazalek ()
{
    int pontszam;
    double szazalek;

    do
    {
        printf("Dolgozat pontszama: ");
        scanf("%d", &pontszam);
    }
    while ( (pontszam<0) || (pontszam>20) );

    szazalek = 1.0 * pontszam / 20 * 100;

    if (szazalek>=90)
        printf("Jegy: 5\n");
    else
        if (szazalek>=80)
            printf("Jegy: 4\n");
        else
            if (szazalek>=70)
                printf("Jegy: 3\n");
            else
                if (szazalek>=60)
                    printf("Jegy: 2\n");
                else
                    printf("Jegy: 1\n");
    return;
}

int main()
{
    // 1. Kérd be a víz hőfokát, állapítsd meg belőle a halmazállapotát!
    //viz_hofoka();

    // 2. Kérd be három gerelyhajító legjobb eredményét (méterben) és hirdess győztest!
    //gerely();

    // 3. Készíts programot, ami egy dolgozat pontszámából kiszámítja a százalékos eredményt, majd kiírja a jegyet!
    //    Egy dolgozatra legfeljebb 20 pont adható, az eredmények: 60% - 2, 70% - 3, 80% - 4, 90% - 5
    dolgozat_szazalek();

    return 0;
}
