#include<stdio.h>
#include<stdlib.h>
#include <iostream>


using namespace std;


void Francais(){

    int Tableau[25];


    int caract;
    FILE* fic = NULL;
    fic = fopen("it.txt","r");
    if (fic != NULL)
    {
        do{caract = fgetc(fic);
        //printf("%c",caract);
        cout << static_cast<char>(caract) <<endl;

        } while (caract != EOF);
            printf("\n");
            fclose (fic);
    } else
        printf("Ouverture impossible");





}
/*
à â ä ç é è ê ë î ï ô ö ù û ü ÿ
À Â Ä Ç É È Ê Ë Î Ï Ô Ö Ù Û Ü Ÿ
*/



int main()
{

    Francais();

    return 0;
}

