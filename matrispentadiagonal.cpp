#include <stdio.h>
#include<conio.h>
main(){
int i,j,n,l,sayac=0;
int yedek,kontrol;
int mat[100][100];

printf("Satir sayisini Giriniz :");
scanf("%d",&n);
printf("Sutun sayisini Giriniz :");
scanf("%d",&l);
for(i=1;i<=n;i++)
for(j=1;j<=l;j++)
{
printf("%d.satir, %d.sutun elemani : ",i,j);
scanf("%d",&mat[i-1][j-1]);
}
for(int s = 0; s < n; s++) {
    for(int k = 0; k < l; k++)
        printf("%4d", mat[s][k]);
 
        printf("\n");
    }
    	for(i=1;i<=n;i++)
		for(j=1;j<=l;j++){
			if(mat[i-1][j-1]==0){
			
			sayac++;
		}}
    if((mat[n-1][0]==0&&mat[0][l-1]==0)&&sayac==2){
    
		
		printf("pentadiagonaldir");
		
	}
	else
	
	printf("pentadiagonal deðildir");
	
	

}


