int menu()
{
    int choix = 0;

    while (choix < 1 || choix > 6)
    {
        printf("Menu:\n");
        printf("1: addition binaire\n");
        printf("2: soustraction binaire\n");
        printf("3: multiplication binaire\n");
        printf("4: division binaire\n");
        printf("5: convertir un binaire en decimal\n");
        printf("6: convertir un decimal en binaire\n");

        printf("Votre choix ? ");
        scanf("%d", &choix);
    }

    return choix;
}
