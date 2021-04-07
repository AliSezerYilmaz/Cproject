#include<stdio.h>
#include<conio.h>
main(){
	char kelime[10],i,j;
	printf("ters çevirmek için kelime giriniz: ");
	scanf("%s",kelime);
	for(i=0;kelime[i]!='\0';i++);
		for(j=i-1;j>=0;j--){
			printf("%c",kelime[j]);
			
		}
	
	
	getch ();
}

