#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LIMIT 20

int main(int argI, char* argChA[]){

	char *word1 = argChA[1];
	char *word2 = argChA[2];

	if (word1 != NULL && word2 != NULL && (strlen(word1) == strlen(word2))){
	
		for (int i=0; i < strlen(word1); i++){

			for (int j=0; j < strlen(word2); j++){

				if ((word2[j] != '0' && (word1[i] == word2[j]))){				       
					word2[j] == '0';
					break;	
				}
				if (j == strlen(word2)-1)
					return 1;
			}

			if (i == strlen(word1)-1)
				return 0;
		}
	}else
		return 1;

}
