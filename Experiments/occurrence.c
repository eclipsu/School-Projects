#include <stdio.h>
#include <string.h>

int main () {
    int i, k, fq = 0, f = 0;


    char sen[2000], qry[20], bsen[2000][20];

    printf("Enter a sentence: ");
    fgets(sen, 1000, stdin);

    printf("Search word: ");
    fgets(qry, 20, stdin);

    int loc[f];
    for (i = 0, k = 0; i < 3; i++)
        if (sen[i] == ' ' && sen[i + 1] != ' ') 
    
    printf("\nThe word : %s appears %d many times in position: \n", qry, f);
    for (i = 0; i < f; i++)
        printf("%d, ", loc[i]);

    return 0;
}