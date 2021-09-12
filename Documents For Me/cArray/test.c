#include <stdio.h>

#include "thirukkural.c"

int main() {
    for (int j = 0; j < 1330; j++) {
        for (int i = 0; i < 12; i++) {
            printf(strNameList[j][i]);
            printf(" ");    
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 12; i++) {
      printf(strNameList[175][i]);
      printf("\n");
    }
    
    return 0;
}
