# include <stdio.h>
int copia(char dest[], char fonte[]){
	int i = 0;
	for(i;dest[i] != '\0';i++){
		dest[i] = fonte[i];	
	}	
	return i;
}
