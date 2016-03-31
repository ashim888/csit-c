#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>

void main(){
	int errorCode,gd,gm;
	detectgraph(&gd,&gm);
	errorCode=graphResult();
	if(errorCode!=grOk){
		printf("\nNo graphics hardware detected!!!");
		exit(1);
	}
	initgraph(&gd,&gm,"C:\\TurboC3\\bin");
	errorCode=graphresult();
	if(errorCode!=grOk){
		printf("FA|ILED");
		exit(1);
	}
	closegraph();

}

