#include <stdio.h>
#include <string.h>

char smallToCap(int c){
	int cap = c;
	if (cap > 90){
		cap -= 32;
	}
	return cap;
}


int main(int argc, char **argv)
{
	char str[20];
	printf("enter text from 20 charactor \n");
	scanf("%s", &str );
	int len = strlen(str);
	printf("the word is : %s | len : %d\n", str, len);
	
	for(int i = 0 ; i < len ; i++){
		str[i] = smallToCap(str[i]);
	}
	
	printf("the word is : %s | len : %d\n", str, len);
  
	return 0;
}