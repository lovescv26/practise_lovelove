#include <stdio.h>

void main(int argc, int * argv []){
	printf("the version is Sun Sep 10 17:53:19 CST 2023 V1\n");
	int n=0;
	int array[10]={0,1,2,3,4,5,6,7,8,9};
	int size=sizeof(array);
	printf(" U array sizeof : %d \n", size);

	printf ("your all array element is:\n");
	for(int a=0;a< sizeof(array)/sizeof(array[0]); a++){
		printf("array[%d] : %d ",a,array[a]);
	}
	printf("\nset you array renum\n");
	scanf("%d",&n);
	array[n];
	int size2=sizeof(array);
	printf("\n----------------\n\n");
	printf("new size %d \n",size2);
	printf(" important use didnt bytes!\n");
	//[ref](https://it-easy.tw/c-sizeof/)
	printf("new \t size use numan view : %d",sizeof(array)/sizeof(array[0]));
	printf("\n-----new element----\n");
	for(int a=0;a<10;a++){
		printf("array[%d]:%d\n",a,array[a]);
	}
	printf("-------");
	for(int a =0;a<size2/sizeof(array[0]);a++){
		printf("array[%d]:  %d \n",a,array[a]);
	}
	
}
