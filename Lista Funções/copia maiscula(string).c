# include <stdio.h>
int cm(char dest[], char fonte[]){
	int i = 0;
	int cont = 0;
	for(i;dest[i] != '\0';i++){
		if(64 < fonte[i] && fonte[i] < 91){
			dest[cont] = fonte[i];
			cont++;	
		}
	}
}
