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
� � � � � � � � � � � � � � � �
� � � � � � � � � � � � � � � �
*/



int main()
{

    Francais();

    return 0;
}

