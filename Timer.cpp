#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char cmd[20]="shutdown /s /t ",aux[7];
	int t,tx,i=1;
    printf("-Minutos: ");
    scanf("%d",&t);
    t=(t*60);
	while(t>0){
		for(int j=i;j>0;j--){
			aux[j]=aux[j-1];
		}
		i++;
		tx=t%10;
		t=t/10;	 
    	aux[0]=tx+48; 
    }
    aux[i-1]=NULL;
    strcat(cmd,aux);
    system(cmd);
	//printf("%s",cmd);
}
