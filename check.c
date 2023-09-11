#include "balance.h"
#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }

    top++;
    stack[top] = value;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return '\0';
    }

    char value = stack[top];
    top--;
    return value;
}

char peek() {
    if (top == -1) {
        return '\0';
    }

    return stack[top];
}

int is_empty() {
    return top == -1;
}
int is_opening_symbol(char c, char opening_symbols[]) {
	int len = strlen(opening_symbols);
	for (int i = 0; i < len; i++) {
		if (c == opening_symbols[i]) {
			return 1;
		}
	}
	return 0;
}
int is_closing_symbol(char c, char closing_symbols[], char opening_symbols[]) {
	int len = strlen(closing_symbols);
	for (int i = 0; i < len; i++) {
		if (c == closing_symbols[i]) {
			if (peek() == opening_symbols[i]) {
				pop();
				return 0;
			} else {
				return 1;
			}
		}
	}
	return 0;
}
int check(char input[]){
	extern char opening_symbols[];
	extern char closing_symbols[];
	if (strlen(opening_symbols) == 0) {
		opening_symbols[0] = '(';
		closing_symbols[0] = ')';
	}
	printf("Checking %s\n", input);
	top = -1;
	int len = strlen(input);
	for(int i = 0; i < len;i++){
		if (is_opening_symbol(input[i], opening_symbols)) {
			push(input[i]);
		} else if (is_closing_symbol(input[i], closing_symbols, opening_symbols)) {
			return 0;
		} else {
			continue;
		}
	}
	return is_empty();
}