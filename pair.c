#include "balance.h"
char opening_symbols[51];
char closing_symbols[51];

void pair(char list[]) {
    int len = strlen(list);

    for (int i = 0, j = 0;  j < len; i++, j += 4) {
        opening_symbols[i] = list[j];
        closing_symbols[i] = list[j + 2];
    }

    opening_symbols[strlen(opening_symbols)] = closing_symbols[strlen(closing_symbols)] = '\0';
}

