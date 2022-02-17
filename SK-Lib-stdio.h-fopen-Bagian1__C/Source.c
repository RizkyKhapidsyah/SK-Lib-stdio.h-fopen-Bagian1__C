#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* pFile;
    pFile = fopen("myfile.txt", "w");

    if (pFile != NULL) {
        fputs("fopen example", pFile);
        fclose(pFile);
    }

    _getch();
    return 0;
}