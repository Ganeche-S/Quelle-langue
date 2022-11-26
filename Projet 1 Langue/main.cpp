#include<stdio.h>
#include<stdlib.h>
#include <iostream>


using namespace std;


void Francais(){

    //int Tableau[25];


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

//Méthode qui calcul le nombre d'occurrences de chaque lettre de l'alphabet
void Occurrences_Lettres() {
    char occ;
    int nbOccA = 0, nbOccB = 0, nbOccC = 0, nbOccD = 0, nbOccE = 0, nbOccF = 0, nbOccG = 0, nbOccH = 0, nbOccI = 0, nbOccJ = 0, nbOccK = 0, nbOccL = 0, nbOccM = 0, nbOccN = 0, nbOccO = 0, nbOccP = 0, nbOccQ = 0, nbOccR = 0, nbOccS = 0, nbOccT = 0, nbOccU = 0, nbOccV = 0, nbOccW = 0, nbOccX = 0, nbOccY = 0, nbOccZ = 0;
    char tab_char[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'k', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int tab_occ[26];


    int caract;
    FILE* fic = NULL;
    //Ouverture du fichier en mode lecture
    fic = fopen("fr-test_occurences.txt","r");
    if (fic != NULL){

    //Tant que la lecture du fichier n'est pas terminé, on regarde la lettre courante et on incremente le nombre d'occurences si il y a une correspondance
            do{

                caract = fgetc(fic);

                //////////////////////////////////////////////

                if(!(caract >= 48 && caract <= 57)){
                    if ((caract >= 131 && caract <= 134) || (caract >= 142 && caract <= 143) || caract==160 || (caract >= 181 && caract <= 183) || (caract >= 198 && caract <= 199) || (caract >= -125 && caract <= -122) || (caract >= -114 && caract <= -113) || caract==-96 || (caract >= -75 && caract <= -73) || (caract >= -58 && caract <= -57)){
                        caract=97;
                    }

                    else if(caract==128 || caract==135 || caract==-121){
                        caract=99;
                    }

                    else if(caract == 209 || caract==-47){
                        caract=100;
                    }

                    else if(caract==130 || (caract >= 136 && caract <= 138) || caract==144 || (caract >= 210 && caract <= 212) || caract==-126 || (caract >= -120 && caract <= -118) || caract==-112 ||(caract >= -46 && caract <= -44)){
                        caract=101;
                    }

                    else if((caract >= 139 && caract <= 141) || caract==161 || caract==173 || (caract >= 214 && caract <= 216) || caract==222 || (caract >= -117 && caract <= -115) || caract==-95 || (caract >= -42 && caract <= -34)){
                        caract=105;
                    }

                    else if((caract >= 164 && caract <= 165) || (caract >= -92 && caract <= -91)){
                        caract=110;
                    }

                    else if((caract >= 147 && caract <= 149) || caract==153 || caract==162 || caract==208 || caract==224 || (caract >= 226 && caract <= 229) || (caract >= -109 && caract <= -107) || caract==-103 || caract==-94 || (caract >= -32 && caract <= -27)){
                        caract=111;
                    }

                    else if(caract==129 || (caract >= 150 && caract <= 151) || caract==154 || caract==163 || (caract >= 233 && caract <= 235) || caract==-127 || (caract >= -106 && caract <= -105) || caract==-102 || caract==-93 || (caract >= -23 && caract <= -21)){
                        caract=117;
                    }

                    else if(caract==152 || (caract >= 236 && caract <= 237) || caract==-104 || (caract >= -20 && caract <= -19)){
                        caract=121;
                    }
                }else if(caract>=65 && caract<=90){
                    caract = caract+32;
                }

                //////////////////////////////////////////////////

                occ = static_cast<char>(caract);

                if (occ == 'a') {
                    nbOccA = nbOccA + 1;
                }
                else if (occ == 'b') {
                    nbOccB = nbOccB + 1;
                }
                else if (occ == 'c') {
                    nbOccC = nbOccC + 1;
                }
                else if (occ == 'd') {
                    nbOccD = nbOccD + 1;
                }
                else if (occ == 'e') {
                    nbOccE = nbOccE + 1;
                }
                else if (occ == 'f') {
                    nbOccF = nbOccF + 1;
                }
                else if (occ == 'g') {
                    nbOccG = nbOccG + 1;
                }
                else if (occ == 'h') {
                    nbOccH = nbOccH + 1;
                }
                else if (occ == 'i') {
                    nbOccI = nbOccI + 1;
                }
                else if (occ == 'j') {
                    nbOccJ = nbOccJ + 1;
                }
                else if (occ == 'k') {
                    nbOccK = nbOccK + 1;
                }
                else if (occ == 'l') {
                    nbOccL = nbOccL + 1;
                }
                else if (occ == 'm') {
                    nbOccM = nbOccM + 1;
                }
                else if (occ == 'n') {
                    nbOccN = nbOccN + 1;
                }
                else if (occ == 'o') {
                    nbOccO = nbOccO + 1;
                }
                else if (occ == 'p') {
                    nbOccP = nbOccP + 1;
                }
                else if (occ == 'q') {
                    nbOccQ = nbOccQ + 1;
                }
                else if (occ== 'r') {
                    nbOccR = nbOccR + 1;
                }
                else if (occ == 's') {
                    nbOccS = nbOccS + 1;
                }
                else if (occ == 't') {
                    nbOccT = nbOccT + 1;
                }
                else if (occ == 'u') {
                    nbOccU = nbOccU + 1;
                }
                else if (occ == 'v') {
                    nbOccV = nbOccV + 1;
                }
                else if (occ == 'w') {
                    nbOccW = nbOccW + 1;
                }
                else if (occ == 'x') {
                    nbOccX = nbOccX + 1;
                }
                else if (occ == 'y') {
                    nbOccY = nbOccY + 1;
                }
                else if (occ == 'z') {
                    nbOccZ = nbOccZ + 1;
                }

            } while (caract != EOF);

            //Fermeture du fichier
            fclose (fic);

            //Instanciation des nombres d'occurences dans un tableau
            tab_occ[0] = nbOccA;
            tab_occ[1] = nbOccB;
            tab_occ[2] = nbOccC;
            tab_occ[3] = nbOccD;
            tab_occ[4] = nbOccE;
            tab_occ[5] = nbOccF;
            tab_occ[6] = nbOccG;
            tab_occ[7] = nbOccH;
            tab_occ[8] = nbOccI;
            tab_occ[9] = nbOccJ;
            tab_occ[10] = nbOccK;
            tab_occ[11] = nbOccL;
            tab_occ[12] = nbOccM;
            tab_occ[13] = nbOccN;
            tab_occ[14] = nbOccO;
            tab_occ[15] = nbOccP;
            tab_occ[16] = nbOccQ;
            tab_occ[17] = nbOccR;
            tab_occ[18] = nbOccS;
            tab_occ[19] = nbOccT;
            tab_occ[20] = nbOccU;
            tab_occ[21] = nbOccV;
            tab_occ[22] = nbOccW;
            tab_occ[23] = nbOccX;
            tab_occ[24] = nbOccY;
            tab_occ[25] = nbOccZ;

            //Ouverture du fichier en mode append
            fic = fopen("fr-test_occurences.txt","a");
            if (fic != NULL){
                string occText = "Occurrences du texte à analyser";
                string occTab = "Tableau d'occurrences";

                //Ecriture à la fin du fichier
                fprintf(fic, "\n\n", ' ');
                for(int i = 0; i < 32; i++) {
                    fputc(occText[i], fic);
                }
                fprintf(fic, " %c ", ':');
                for(int i = 0; i < 26; i++) {
                    fprintf(fic, "%c", tab_char[i]);
                    fprintf(fic, " %c ", ':');
                    fprintf(fic, "%d", tab_occ[i]);
                    fprintf(fic, " %c ", ';');
                }
                fprintf(fic, "\n", ' ');
                for(int i = 0; i < 24; i++) {
                    fputc(occTab[i], fic);
                }
                fprintf(fic, " %c ", ':');
                for(int i = 0; i < 26; i++) {
                    fprintf(fic, "%d", tab_occ[i]);
                    fprintf(fic, " %c ", ';');
                }
                //Fermeture du fichier en mode append
                fclose (fic);
            }
            else {
                printf("Ouverture impossible en mode append");
            }

    }
    else {
        printf("Ouverture impossible en mode lecture");
    }
}

int main()
{

    //Francais();
    Occurrences_Lettres();

    return 0;
}

