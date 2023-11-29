void insane(int lower, int upper, int val){
    srand(time(0));

    printf("\n%i lower\n %i upper\n %i val\n", lower, upper, val);

    for(int i = 0; i< val; i++){
        int tal = (rand() %(upper - lower + 1)) + lower;
        printf("%d\n", tal);
    }
    meny();
}