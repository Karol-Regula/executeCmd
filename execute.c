#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
	//Obtaining input
	char * input[30];
	char cmd[20];
	printf("Enter a command: \n");
	fgets(cmd, sizeof(cmd) , stdin);
	printf("%s\n", cmd);

	//parsing input
	char * s = cmd;
	char * p = cmd;
	int x = 0;
	while (s){
		p = strsep(&s, " ");
		input[x] = p;
		x++;
		printf("%d\n", x);
		printf("%s\n", p);
	}
	input[x] = NULL;

	//executing program
	printf("works\n");
	//input[0] = "ls";
	//input[1] = NULL;
	execvp(input[0], input);
	return 0;
}


Rickx777
