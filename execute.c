#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
	//Obtaining input
	char * input[30];
	char cmd[50];
	char cmdNew[50];
	printf("Enter a command: \n");
	fgets(cmd, sizeof(cmd) , stdin);
	strncpy(cmdNew, cmd, strlen(cmd) - 1); //fixing fgets input
	//printf("%s\n", cmd);

	//parsing input
	char * s = cmdNew;
	char * p = cmdNew;
	int x = 0;
	while (s){
		input[x] = strsep(&s, " "); //parsing / separating command
		x++;
		//printf("%d\n", x);
		//printf("%s\n", p);
	}
	input[x] = NULL; //adding terminiating NULL to array

	//executing program
	//printf("works\n");
	printf("\n");
	execvp(input[0], input); //executing command
	return 0;
}
