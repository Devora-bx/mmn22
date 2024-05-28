#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "set.h"
char *arrayOfSet[6] ={"SETA","SETB","SETC","SETD","SETE","SETF"};
set SETA={0},SETB={0},SETC={0},SETD={0},SETE={0},SETF={0};
SetStruct structSet[]={
		{"SETA",SETA},
		{"SETB",SETB},
		{"SETC",SETC},
		{"SETD",SETD},
		{"SETE",SETE},
		{"SETF",SETF}
	};
int main(){
	int i;
	char comma[2] = " ";
	char *commandName;
	char *setname;
	
	set * arrSet[6] ={SETA,SETB,SETC,SETD,SETE,SETF};
	
	
	struct {
 	char *name;
 	void (*func)(void);
 	} 
	cmd[]={
		{"read_set",read_set_h},
		{"print_set",print_set_h},
		{"union_set",union_set_h},
		{"intersect_set",intersect_set_h},
		{"sub_set",sub_set_h},
		{"symdiff_set",symdiff_set_h},
		{"stop",stop_h}
	};

	
 	 
	
	
 	printf("pleas enter command \n");
	fgets(*command,30,stdin);
	commandName = strtok(command, " \t");
	setname = strtok(NULL, " \t\n,");
	
	for(;;)
 		/* האם strtok מזהה שמדובר באותו מחרוזת גם אם עברנו קובץ?*/
 	          for(i=0; cmd[i].func!=NULL; i++)
 		    if (strcmp(commandName,cmd[i].name)==0)
 		      break;
 		  if (cmd[i].func==NULL)
 		    fprintf(stderr,"Command does not exit:%s\n",command);
 		  else
 		    (*(cmd[i].func))();



		
 }
