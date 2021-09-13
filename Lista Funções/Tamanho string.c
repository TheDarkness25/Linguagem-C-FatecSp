# include <stdio.h>
int ts(char s[]){
	int i;
	for(i = 0;s[i] != '\0'; i++);
	return i;	
}
int main(void){
	char s[] = "oi";
	printf("%d\n", ts(s));

	return 0;
}
