#include<stdio.h>
int main(void){
    int i,x,y,box[4];
    for(i=0;i<4;i++)
    scanf("%d",&box[i]); 
    for(i=0;i<3;i++){
    	for(x=0;x<3;x++){
    		if(box[x]>box[x+1]){
            	y=box[x+1];
            	box[x+1]=box[x];
            	box[x]=y;
        	}
    	}
	}
    for(i=0;i<4;i++)
    printf("%d ",box[i]);
}
