/*
description: Créez une fonction maximumTableau qui aura pour rôle de remettre à 0 toutes les cases du tableau ayant une valeur supérieure à un maximum.
Cette fonction prendra en paramètres le tableau ainsi que le nombre maximum autorisé (valeurMax).
Toutes les cases qui contiennent un nombre supérieur à valeurMax doivent être mises à 0.
*/

void maximumValue(int sourceArray[], int sizeArray, int maxValue) {
    int i;

    for (i = 0; i < sizeArray; i++) {
        if (sourceArray[i] > maxValue) {
            sourceArray[i] = 0;
        }
    }
}
