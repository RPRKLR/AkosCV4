#include <stdio.h>

int main() {
    /// elso példa ezeket utállom mint a kecske a vágókést

    int input, inputHelper;
    printf("Kérem adjon meg egy szamot 1 és 15 kozott: ");
    scanf("%d", &input);
    inputHelper = input;
    for (int i = 1; i < input+ 1; ++i) {
        printf("%d: ",i);
        for (int j = 1; j < inputHelper + 1; ++j) {
            printf("%d ", j);
        }
        inputHelper--;
        printf("\n");
    }

    ///a második példa szinte ugyan az csak reverzben oldanám meg, ezt meghagyom ákosnak hogy dolgozzon vele kicsit KEKW

    /// harmadik példa egy okádék és lusta szar vagyok, meghagyom ákosnak kek

    /// kibaszott csillagok és kotojelek utállom az ilyet xd


    /// ez nem megy mert egy ostoba szotyok vagyok KEKW Majd késobb foglalkozom vele
    /// ha lesz rá idegzetem inkább megyek felkotom magamat, Ha Laci ezt olvasod, gyere
    /// nyugodtan, van még azon a fán hely boven :thinking_face:
    int inputTwo, counter = 1;
    printf("Kérem adjon meg egy szamot 1 és 15 kozott: ");
    scanf("%d", &inputTwo);
    for (int i = 1; i < inputTwo; ++i) {
        for (int j = 1; j < inputTwo; ++j) {

            if (i <= counter) {
                printf("*");
            }
            if(i > counter){
                printf("-");
            }
        }
        counter++;
        printf("\n");
    }
    for (int i = 0; i <= inputTwo; ++i) {
        printf("*");
    }
    printf("\n");
    counter--;
    for (int i = inputTwo - 1; i >= 1; ++i) {
        for(int j = inputTwo;j >= 1; j++) {
            if (j <= counter) {
                printf("*");
            } else if (j > counter) {
                printf("-");
            }
        }
        counter--;
        printf("\n");
    }
    
        int intput;
    printf("kérem adjon meg egy számot: ");
    scanf("%d",&intput);
    for (int i = 1; i <= intput ; ++i) {
        for (int j = 1; j <= intput; ++j) {
            if(i == ((intput)/2)+1){
                for (int k = 0; k<intput; k++){
                    printf("*");
                }
                i++;
                printf("\n ");
            }
            if(j == i || j == (intput/2)+1|| j == intput-i+1){
                printf("*");
            } else{
                printf("-");
            }
        }
        printf("\n ");
    }

    //printf("Hello, World!\n");
    return 0;
}
