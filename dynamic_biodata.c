#include "stdbool.h"
#include "stdio.h"
#include "string.h"
#define MaxSize 200

bool isVariableEmpty(char name[MaxSize]);

int main(){

    char name [MaxSize];
    char birth_date [MaxSize];
    char address [MaxSize];
    char high_school [MaxSize];

    // input name
    name_input:
    printf("Nama panjang kamu apa? ");
    fgets(name, MaxSize, stdin);

    if (isVariableEmpty(name)){
        printf("Nama tidak boleh kosong!\n");
        goto name_input;
    }

    // input birt date
    birth_date_input:
    printf("Tanggal lahirnya? ");
    fgets(birth_date, MaxSize, stdin);

    if(isVariableEmpty(birth_date)){
        printf("Tanggal lahir tidak boleh kosong!\n");
        goto birth_date_input;
    }

    // input address
    address_input:
    printf("Alamatnya dimana? ");
    fgets(address, MaxSize, stdin);

    if(isVariableEmpty(address)){
        printf("Alamat tidak boleh kosong!\n");
        goto address_input;
    }

    // input high school
    high_school_input:
    printf("Asal sekolah mana? ");
    fgets(high_school, MaxSize, stdin);

    if(isVariableEmpty(high_school)){
        printf("Asal sekolah tidak boleh kosong!\n");
        goto high_school_input;
    }

    // clearing console
    printf("\e[1;1H\e[2J");

    // output data
    printf("-------- Biodata --------\n");
    printf("Nama            : %s", name);
    printf("Tanggal Lahir   : %s", birth_date);
    printf("Alamat          : %s", address);
    printf("Asal Sekolah    : %s", high_school);

    return 0;
}

bool isVariableEmpty(char name[MaxSize]) {
    return strlen(name) == 1;
}