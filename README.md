# Quelle-langue

Projet 1

Quelle langue (/lettres) ?


Vous ne devez utiliser aucune librairie autre que celles pour gérer l’affichage
courant et les entrées/sorties et maths.h et string.h.
L'objectif est de trouver la langue d'un texte choisi.

Vous devez créer cinq fichiers texte (fichier .txt) avec dedans, un texte dans l'une des
cinq langues suivantes : français, italien, allemand, anglais ou espagnol + un autre
texte qui sera le texte dont on veut trouver la langue. (Utilisez des textes longs, de
plusieurs milliers de mots, et actuels comme des articles de presse).

On va ici travailler sur les occurrences de lettres (nombre de lettres) dans des textes.




Contraintes
Vous devrez avoir entièrement programmé vous-même les algorithmes qui trouvent la
langue utilisée.
Vous programmerez de façon modulaire (fonctions et méthodes)
L'algorithme doit fonctionner sur un texte de 50 mots comme 2 000 mots.
Aucune interface d'affichage/saisie n'est à programmer.
Vous devrez créer une fonction/méthode Trouve_Langue qui retourne la langue du
texte.
Le programme gèrera les majuscules, les minuscules mais aussi les accents, les
cédilles, les trémas et les lettres comme suit :
• A, Â, À, Ä, â, à, ä, seront considérés comme des "a"
• É, È, Ê, Ë, é, è, ê, ë, seront considérés comme des "e"
• Ï, Î, ï, î, seront considérés comme des "i"
• Ô, ô, seront considérés comme des "o"
• Û, Ù, û, ù, seront considérés comme des "u"
• Ç, ç, seront considérés comme des "c"
Analyse des fréquences
Vous écrirez une fonction/méthode nommée Occurrences_Lettres qui calculera le
nombre d'occurrences de chaque lettre de l'alphabet pour ce texte. La fonction écrira
ensuite, à la fin du fichier texte, les lettres de l'alphabet et, à côté, les occurrences de
chacune des lettres comme, par exemple, ci-dessous :
Occurrences du texte à analyser : A : 13 ; B : 12 ; C : 46 ; D : 9 ; ………Z : 0
Tableau d'occurrences : [13 ;12 ; 46 ; 9 ;….0]
Dans un second temps, vous utiliserez cette fonction/méthode pour générer une liste
(tableau) des 26 occurrences des lettres de l'alphabet pour chacune des cinq langues.
Ces cinq tableaux serviront au programme principal.
Calcul de la différence euclidienne
Vous programmerez la fonction Calcule_écart qui va calculer l'écart (nombre à deux
décimales) entre les valeurs d'un texte à analyser et les valeurs d'un texte de référence
dans une langue donnée.
Ici, T sera le tableau avec les 26 occurrences de notre texte à analyser,
T_anglais sera, par exemple, le tableau avec les 26 occurrences pour la langue
anglaise.
La fonction Calcule_écart retournera :
Ecart =
√∑ ((T(i)/somme(éléments de T) – T_anglais(i)/ somme(éléments de T_anglais) )
𝟐𝟓 𝟐
𝟎
Cet écart sera calculé pour les cinq langues.
La langue du texte à analyser sera celle qui obtient le plus faible écart.
Programme
Le programme comportera, en dur, les tableaux avec les 26 occurrences de lettres
pour chacune des 5 langues.
Le programme demandera si l'on souhaite générer :
• Les occurrences des lettres d'un texte (on appellera Occurrences_Lettres )
• Trouver la langue d'un texte (on appellera Trouve_Langue).
Puis, le programme doit demander le chemin d'accès puis le nom du fichier texte à
analyser et de son extension.
Si l'on recherche les occurrences des lettres d'un texte :
Le programme écrira à la fin du fichier texte, par exemple :
Occurrences du texte à analyser : A : 13 ; B : 12 ; C : 46 ; D : 9 ; …………
Tableau d'occurrences : [13 ;12 ; 46 ; 9 ;…. 0]
Si l'on recherche la langue du texte :
Le programme écrira à la fin du fichier texte :
Langue trouvée : xxx où xxx est la langue du fichier texte situé dessus.
Puis, le programme écrira dessous, dans le fichier texte :
Français ; écart : …
Anglais ; écart : …
Italien ; écart : …
Allemand ; écart : …
Espagnol ; écart : …
Le programme écrira enfin, dessous, les occurrences des différentes lettres du texte
à analyser comme suit, par exemple :
Occurrences du texte à analyser : A : 13 ; B : 12 ; C : 46 ; D : 9 ; ……Z : 0
Et également sous la forme d'un tableau : [13 ;12 ; 46 ; 9 ;…. 0]
Exemple d'affichage généré sous le texte dont on veut trouver la langue :
Langue trouvée : Italien
Français ; écart : 0,13
Anglais ; écart : 0,18
Italien ; écart : 0,08
Allemand ; écart : 0,20
Espagnol ; écart : 0,11
Occurrences du texte à analyser : A : 13 ; B : 12 ; C : 46 ; D : 9 ; …………
Tableau d'occurrences : [13 ;12 ; 46 ; 9 ;…. 0]
Dans les deux cas, le programme affichera à la fin, de façon lisible et en mode console,
le fichier texte et toutes les informations contenues et écrites dedans.