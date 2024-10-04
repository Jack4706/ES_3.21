#include <stdio.h>

int main() {
    int giorni;
    int mesi;
    int anno;

    printf("inserisci il giorno:\n");
    scanf("%d", &giorni);
    printf("inserisci il mese:\n");
    scanf("%d", &mesi);
    printf("inserisci l'anno:\n");
    scanf("%d", &anno);

    int giorniMax = 0;

    switch(mesi){

            case 4:
            case 6:
            case 9:
            case 11:
                giorniMax = 30;
            break;

            case 2:
                if(anno % 400 == 0) {
                    giorniMax = 29;
                }
                else if(anno % 100 == 0) {
                    giorniMax = 28;
                }
                else if(anno % 4 == 0) {
                    giorniMax = 29;
                }
                else {
                    giorniMax = 28;
                }
            break;

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                giorniMax = 31;
            break;

            default:
                printf("data non valida");
            return 0;
    }


    if(giorni > giorniMax) {
        printf("data non valida");
           }

    else {
        printf("data valida");
           }

    return 0;
}
