#include <stdio.h>
#include <string.h>

int aeiou(char x)
{
	if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')return 1;
	else return 0;
}

int main(){
	char word[100000];
	char line[100000];
	while(gets(line)){
   		char * token = strtok(line, " ");
   		while( token != NULL ) {
			if(aeiou(*token))
      				printf( "%say ", token );
			else {
				char temp = *token;
				char *aa = token;
				aa++;
				while(*aa){
					*(aa-1) = *aa;
					aa++;
				}
				*(aa-1) = temp;
				printf("%say ",token);
			}
      			token = strtok(NULL, " ");
  		 }
		printf("\n");
	}
		printf("The first character in word is %c\n",*word);
	return 0;
}
