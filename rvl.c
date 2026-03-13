#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
	This program is a part of the QNU project.
	      QNU rvl version 1.0 (2026-03)
*/

const char *BIG[] = {
    "А","Б","В","Г","Д","Е","Ж","З","И","Й","К","Л","М","Н","О","П",
    "Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ъ","Ы","Ь","Э","Ю","Я", "Ǝ", "Є"
};

const char *SMA[] = {
    "а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п",
    "р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я", "ǝ", "є"
};

void RVLY(const char *arr[], int count, int size) {
    for(int i = 0; i < count; i++) {
        int r = rand() % size;
        printf("%s", arr[r]);
    }
}

int main() {
    srand(time(NULL));

    int SIZE_BIG = sizeof(BIG)/sizeof(BIG[0]);
    int SIZE_SMA = sizeof(SMA)/sizeof(SMA[0]);

    while(1) {
        RVLY(BIG, 3, SIZE_BIG);
        printf(" ");
        RVLY(SMA, 5, SIZE_SMA);
        printf(" ");
        RVLY(SMA, 10, SIZE_SMA);
        printf(".\n");
    }

    return 0;
}
