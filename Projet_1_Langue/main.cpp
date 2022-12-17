#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


//Méthode qui calcul le nombre d'occurrences de chaque lettre de l'alphabet
float * Occurrences_Lettres(char * filename, float *tab_occ) {
    char occ;
    int nbOccA = 0, nbOccB = 0, nbOccC = 0, nbOccD = 0, nbOccE = 0, nbOccF = 0, nbOccG = 0, nbOccH = 0, nbOccI = 0, nbOccJ = 0, nbOccK = 0, nbOccL = 0, nbOccM = 0, nbOccN = 0, nbOccO = 0, nbOccP = 0, nbOccQ = 0, nbOccR = 0, nbOccS = 0, nbOccT = 0, nbOccU = 0, nbOccV = 0, nbOccW = 0, nbOccX = 0, nbOccY = 0, nbOccZ = 0;
    char tab_char[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'k', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    int caract;
    FILE* fic = NULL;
    //Ouverture du fichier en mode lecture
    fic = fopen(filename,"r");
    if (fic != NULL){

    //Tant que la lecture du fichier n'est pas terminé, on regarde la lettre courante et on incremente le nombre d'occurences si il y a une correspondance
            do{

                caract = fgetc(fic);

    //Code qui gére les accents et majuscule
                // Transforme les accents similaires a lettre "a" en "a"
                if ((caract >= 131 && caract <= 134) || (caract >= 142 && caract <= 143) || caract==160 || (caract >= 181 && caract <= 183) || (caract >= 198 && caract <= 199) || (caract >= -125 && caract <= -122) || (caract >= -114 && caract <= -113) || caract==-96 || (caract >= -75 && caract <= -73) || (caract >= -58 && caract <= -57)){
                    caract=97;
                }
                // Transforme les accents similaires a lettre "c" en "c"
                else if(caract==128 || caract==135 || caract==-121){
                    caract=99;
                }
                // Transforme les accents similaires a lettre "d" en "d"
                else if(caract == 209 || caract==-47){
                    caract=100;
                }
                // Transforme les accents similaires a lettre "e" en "e"
                else if(caract==130 || (caract >= 136 && caract <= 138) || caract==144 || (caract >= 210 && caract <= 212) || caract==-126 || (caract >= -120 && caract <= -118) || caract==-112 ||(caract >= -46 && caract <= -44)){
                    caract=101;
                }
                // Transforme les accents similaires a lettre "i" en "i"
                else if((caract >= 139 && caract <= 141) || caract==161 || caract==173 || (caract >= 214 && caract <= 216) || caract==222 || (caract >= -117 && caract <= -115) || caract==-95 || (caract >= -42 && caract <= -34)){
                    caract=105;
                }
                // Transforme les accents similaires a lettre "n" en "n"
                else if((caract >= 164 && caract <= 165) || (caract >= -92 && caract <= -91)){
                    caract=110;
                }
                // Transforme les accents similaires a lettre "o" en "o"
                else if((caract >= 147 && caract <= 149) || caract==153 || caract==162 || caract==208 || caract==224 || (caract >= 226 && caract <= 229) || (caract >= -109 && caract <= -107) || caract==-103 || caract==-94 || (caract >= -32 && caract <= -27)){
                    caract=111;
                }
                // Transforme les accents similaires a lettre "u" en "u"
                else if(caract==129 || (caract >= 150 && caract <= 151) || caract==154 || caract==163 || (caract >= 233 && caract <= 235) || caract==-127 || (caract >= -106 && caract <= -105) || caract==-102 || caract==-93 || (caract >= -23 && caract <= -21)){
                    caract=117;
                }
                // Transforme les accents similaires a lettre "y" en "y"
                else if(caract==152 || (caract >= 236 && caract <= 237) || caract==-104 || (caract >= -20 && caract <= -19)){
                    caract=121;
                }

                // Transforme les majuscules en minuscule ( A= int(a)-32 <=> A=99-32 )
                if(caract>=65 && caract<=90){
                    caract = caract+32;
                }
    //Fin Code accent et maj


    //Calcul de l'occurrence
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
    //Fin calcul occurence

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
            fic = fopen(filename,"a");
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
                    fprintf(fic, "%.0f", tab_occ[i]);
                    fprintf(fic, " %c ", ';');
                }
                fprintf(fic, "\n", ' ');
                for(int i = 0; i < 24; i++) {
                    fputc(occTab[i], fic);
                }
                fprintf(fic, " %c ", ':');
                for(int i = 0; i < 26; i++) {
                    fprintf(fic, "%.0f", tab_occ[i]);
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

    return tab_occ;
};


float* Calcul_ecart(float* T_occurence,float* tab_ecart) {

    float ecart_anglais = 0;
    float ecart_francais = 0;
    float ecart_allemand = 0;
    float ecart_espagnol = 0;
    float ecart_italien = 0;

    float resultat_anglais = 0;
    float resultat_francais = 0;
    float resultat_allemand = 0;
    float resultat_espagnol = 0;
    float resultat_italien = 0;

    float T_anglais[26] = {2721,393,1001,1239,3822,722,636,1470,2407,36,243,1333,807,2291,2605,675,17,2115,2204,2903,774,355,435,49,605,18};
    float T_francais[26] = {2341,242,1708,1487,5549,411,390,363,2289,98,16,1752,972,2403,2692,1049,241,2659,2880,2647,1795,436,7,285,107,60};
    float T_allemand[26] = {1879,587,1028,1449,5910,452,763,1603,2936,18,336,1007,1017,3747,702,189,2,2464,1956,2137,1317,217,328,7,12,331};
    float T_espagnol[26] = {11297,1395,5624,4539,13156,815,1367,576,8031,355,55,5420,2704,7426,10199,2645,75,16899,8338,4936,3997,1036,17,246,917,266};
    float T_italien[26] = {8268,494,3675,2830,8172,753,1499,589,9132,11,231,4996,1747,5087,7535,1685,189,4562,3478,5107,2311,925,26,28,110,648};

    float somme_elem_de_T_ocurrence=0;
    float somme_elem_de_T_anglais=0;
    float somme_elem_de_T_francais=0;
    float somme_elem_de_T_allemand=0;
    float somme_elem_de_T_espagnol=0;
    float somme_elem_de_T_italien=0;

    //Somme de tout les éléments de T_occurence (en paramètre)
    for(int i=0;i<26;i++){
        somme_elem_de_T_ocurrence = somme_elem_de_T_ocurrence + T_occurence[i];
    }

    //Somme de tout les éléments de T_occurence_anglais
    for(int i=0; i<26;i++){
        somme_elem_de_T_anglais = somme_elem_de_T_anglais + T_anglais[i];
    }

    //Somme de tout les éléments de T_occurence_francais
    for(int i=0; i<26;i++){
        somme_elem_de_T_francais = somme_elem_de_T_francais + T_francais[i];
    }

    //Somme de tout les éléments de T_occurence_allemand
    for(int i=0; i<26;i++){
        somme_elem_de_T_allemand = somme_elem_de_T_allemand + T_allemand[i];
    }

    //Somme de tout les éléments de T_occurence_espagnol
    for(int i=0; i<26;i++){
        somme_elem_de_T_espagnol = somme_elem_de_T_espagnol + T_espagnol[i];
    }

    //Somme de tout les éléments de T_occurence_iatlien
    for(int i=0; i<26;i++){
        somme_elem_de_T_italien = somme_elem_de_T_italien + T_italien[i];
    }



    //calcul de la différence euclidienne anglais (sans la racine carré)
    for(int i=0; i<26;i++){
        resultat_anglais += ((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_anglais[i]/somme_elem_de_T_anglais))*((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_anglais[i]/somme_elem_de_T_anglais));
    }

    //calcul de la différence euclidienne francais
    for(int i=0; i<26;i++){
        resultat_francais += ((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_francais[i]/somme_elem_de_T_francais))*((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_francais[i]/somme_elem_de_T_francais));
    }

    //calcul de la différence euclidienne allemand
    for(int i=0; i<26;i++){
        resultat_allemand += ((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_allemand[i]/somme_elem_de_T_allemand))*((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_allemand[i]/somme_elem_de_T_allemand));
    }

    //calcul de la différence euclidienne espagnol
    for(int i=0; i<26;i++){
        resultat_espagnol += ((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_espagnol[i]/somme_elem_de_T_espagnol))*((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_espagnol[i]/somme_elem_de_T_espagnol));
    }

    //calcul de la différence euclidienne italien
    for(int i=0; i<26;i++){
        resultat_italien += ((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_italien[i]/somme_elem_de_T_italien))*((T_occurence[i]/somme_elem_de_T_ocurrence) - (T_italien[i]/somme_elem_de_T_italien));
    }

    //Racine final du calcul de l'écart
    ecart_anglais = sqrt(resultat_anglais);
    ecart_francais = sqrt(resultat_francais);
    ecart_allemand = sqrt(resultat_allemand);
    ecart_espagnol = sqrt(resultat_espagnol);
    ecart_italien = sqrt(resultat_italien);

    tab_ecart[0]={ecart_anglais};
    tab_ecart[1]={ecart_francais};
    tab_ecart[2]={ecart_allemand};
    tab_ecart[3]={ecart_espagnol};
    tab_ecart[4]={ecart_italien};

    return tab_ecart;

}

void Trouve_Langue(float *tableau_ecart,char * filename) {
    float plus_petit_ecart = 10000;
    string langue_trouvee;
    int taille=0;
    char Texte_Ecart[5][32] = {"Anglais ; écart : ","Français ; écart : ","Allemand ; écart : ","Espagnol ; écart : ","Italien ; écart : "};

    //Récupère la plus petite valeur d'Ecart
    for(int i=0;i<5;i++){
        if(plus_petit_ecart>tableau_ecart[i]){
            plus_petit_ecart=tableau_ecart[i];
        }
    }

//Affiche la langue qui correspond au texte
    for(int i=0;i<5;i++){
        if(plus_petit_ecart==tableau_ecart[i]){
            if(i==0){
                langue_trouvee="Langue trouvée : Anglais";
                taille=24;
            }else if(i==1){
                langue_trouvee="Langue trouvée : Francais";
                taille=25;
            }else if(i==2){
                langue_trouvee="Langue trouvée : Allemand";
                taille=25;
            }else if(i==3){
                langue_trouvee="Langue trouvée : Espagnol";
                taille=25;
            }else if(i==4){
                langue_trouvee="Langue trouvée : Italien";
                taille=24;
            }
        }
    }

    FILE* fic = NULL;
    //Ouverture du fichier en mode append
            fic = fopen(filename,"a");
            if (fic != NULL){
                //Ecriture à la fin du fichier
                fprintf(fic, "\n\n", ' ');
                for(int i = 0; i < taille; i++) {
                    fputc(langue_trouvee[i], fic);
                }


                fprintf(fic, "\n");
                for(int i = 0; i < 5; i++) {
                    fprintf(fic,"%s",Texte_Ecart[i]);
                    fprintf(fic,"%lf\n",tableau_ecart[i]);
                }


                //Fermeture du fichier en mode append
                fclose (fic);
            }
            else {
                printf("Ouverture impossible en mode append");
            }
}




//Programme principal
int main() {
    //Déclaration des variables globales
    int choix;
    char * cheminAcces = (char *) malloc(40);
    char * nomTxt = (char *) malloc(40);
    char * extTxt = (char *) malloc(3);;
    float *tableau_occurrence;

    //Interface utilisateur
    cout<<"Bonjour vous\n"<<endl;
    cout<<"Et bienvenue dans notre programme special qui vous permettra de trouver les differentes occurences de votre texte ainsi que sa langue parmis les suivantes : \nle français, l'anglais, l'espagnol, l'allemand et l'italien\n\n"<<endl;
    cout<<"Saisissez un chiffre (1) pour le choix numero 1 et le chiffre (2) pour le choix numero 2 :\n"<<endl;
    cout<<"Choix 1 : Souhaitez-vous generer les occurrences des lettres\n"<<endl;
    cout<<"Choix 2 : Souhaitez-vous generer la langue du texte\n"<<endl;
    scanf("%d", &choix);

    //Cas si le choix n'est ni le 1 et ni le 2
    while(choix != 1 && choix != 2) {
        cout<<"\nChoix incorrecte !\n"<<endl;
        cout<<"Merci de resaisir votre choix\n"<<endl;
        cout<<"Choix 1 : Souhaitez-vous generer les occurrences des lettres\n"<<endl;
        cout<<"Choix 2 : Souhaitez-vous generer la langue du texte\n"<<endl;
        scanf("%d", &choix);
    }

    //Saisie du chemin d'acces au fichier
    if(choix==1 || choix==2) {
        cout<<"Tres bien!\n"<<endl;
        cout<<"\nSaisir le chemin d'acces de votre fichier texte (n'oubliez pas l'antislash de fin) : \n"<<endl;
        scanf("%s", cheminAcces);

        cout<<"\nSaisir le nom de votre fichier texte : \n"<<endl;
        scanf("%s", nomTxt);

        cout<<"\nSaisir l'extension de votre fichier texte (n'oubliez pas le point au debut): \n"<<endl;
        scanf("%s", extTxt);
    }


    strcat(cheminAcces, nomTxt);
    strcat(cheminAcces, extTxt);

    float tab_occ[26];
    float tab_ecart[5];

    //Cas si l'on recherche les occurrences des lettres du texte
    if(choix==1) {
        cout<<"Travail en cours. veuillez patientez..."<<endl;
        float *tableau_occurrence = Occurrences_Lettres(cheminAcces, tab_occ);
        cout<<"Travail terminer !"<<endl;
    }
    //Cas si l'on recherche la langue du texte
    if(choix==2) {
        cout<<"Travail en cours. veuillez patientez..."<<endl;
        float *tableau_occurrence = Occurrences_Lettres(cheminAcces, tab_occ);
        float *tableau_ecart = Calcul_ecart(tableau_occurrence,tab_ecart);
        Trouve_Langue(tableau_ecart,cheminAcces);
        cout<<"Travail terminer !"<<endl;
    }


    return 0;
}
