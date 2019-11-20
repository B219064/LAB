#include<stdio.h>
int main()
{
	float tv=400,remote=220,controller=35.20,cd_player=300,tape_recorder=150,total;
	printf("quantity for each item is 2 1 4 1 2 respecively\n\n");
	printf("the total price with sales tax is\n\n");
	printf("the total is\n\n");
	tv=2*400*8.25;
	remote=220*8.25;
	controller=35.20*4*8.25;
	cd_player=300*8.25;
	tape_recorder=300*2*8.25;
	total=tv+remote+controller+cd_player+tape_recorder;
	printf("for tv= %f\n",tv);
	printf("for remote= %f\n",remote);
	printf("for controller= %f\n",controller);
	printf("for cd_player= %f\n",cd_player);
	printf("for tape_recorder= %f\n",tape_recorder);
	printf("total = %f\n",total);
	
	
}
