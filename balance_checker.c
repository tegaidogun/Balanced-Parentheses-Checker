#include "balance.h"
char getword(char word[], int limit){
	char c;
	int i = 0;
	while(i < limit){
		c = getchar();
		if(c == EOF || c == ' ' || c == '\n' || c == '\t')
			break;
		word[i++] = c;
	}
	word[i] = '\0';//end of string
	return c;//last character
}
char get_line(char line[], int limit){
	char c;
	int i = 0;
	while(i < limit){
		c = getchar();
		if(c == EOF || c == '\n')
			break;
		line[i++] = c;
	}
	line[i] = '\0';//end of string
	return c;//last character
}
void main(void){
	char word[MAX_LEN];
	char line[MAX_LEN];
	while(getword(word, MAX_LEN) != EOF){
		if(strcmp(word, "quit") == 0)//if it is quit
			return;
		if(strcmp(word, "check") == 0){//checking
			get_line(line, MAX_LEN);
			printf("%s is %s balanced.\n",
				line, check(line)? "" : "not");
		}else if(strcmp(word, "pair") == 0){//checking
			get_line(line, MAX_LEN);
			pair(line);
		}else{
			printf("undefined command %s. Use check or quit only!\n");
			return;
		}
	}
}