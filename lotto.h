void lotto()
{
    printf("lotto");
    int num[35], i, tal;

    printf("test ");

    srand((int)time(NULL));
    printf("antal rader? ");
    int n; //antalet rader
    scanf("%d", &n);
    for (int r = 1; r <= n; r++) //antalet rader man vill ha
    {
        //for (i = 0; i < 35; i++)
           // num[i] = 0;

        for (i = 0; i < 7; i++) //skapar 7 tal
        {
            tal = rand() % 35 + 1; //talet är mellan 1 och 35 24
            while (num[tal - 1] == 1) //detta är för att kola om talet redan fanns med sedan innan
                tal = rand() % 35 + 1;
            num[tal - 1] = 1;
            printf("%i ", tal);

            // här kan man skriva kod för att spara
        }
        printf("\n");
    }
    meny();
}