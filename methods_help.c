#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "set.h"
extern SetStruct structSet[];
void read_set_h(){//לזכור לבדןק מה קורה בקבוצה ריקה שיש רק -1

	int number1;
	char commandCopy[30];
	strcpy(commandCopy, command2);/*copy the command to work it*/
	char comma[2] = ",";
	char comma[2] = " ";
	int length = strlen(command);
	char *p1;/*pointer to substring whithowt comma*/
	char *p2;/*Pointer to a location that has non-number input*/
	int countOfComma1 =0;
	int countOfComma2 =0;
	int i;
	set SetToSend = {0};
	int arrToSent[128];
	memset(SetToSend, 0, sizeof(SetToSend));
	int lastIndex = (int)command + length;
	int index = 0;

	any(commandCopy, structSet,6,SetToSend);/*save the set to send*/

	
	p1 = strtok(commandCopy,comma);
	
	while ((p1 = strtok(NULL, comma)))
	
		strtol(commandCopy,&p2,10);
		countOfComma1++;/*counting how many comma should be*/
		
		if(p2!=NULL)
		printf("not integer");
		else     /*just if is integer, save it*/
			number = (int)*p1;			
			if ((number <= 0 || number >= 127)&& (int)p1 != lastIndex)
				printf("Invalid set member – value out of range");
			else if((int)*(lastIndex) != -1)
				printf("List of set members is not terminated correctly");
			else
				arrToSent[index] = number;/*save the numbers in array*/
				index++;
			
	for(i=0;i<length;i++)
		if(command[i] == ',')
		countOfComma2 ++;
	if(countOfComma1-1 != countOfComma2)/*Calculate how many commas there are and check if it is the same as the number of commas there should be*/
		printf("Multiple consecutive commas");
}

void any( char *str,  SetStruct arrSet[], int num_options,set SetToSend) {/*save the set to send*/
    int i;
    int found = 0;
   
 	
	for(i=0; i < num_options; i++){
		if (strcmp(str,arrSet[i].name)==0){
 		    	SetToSend = arrSet[i].myset;
 		    	found = 1;
 		        break;
 		 }
	}
	if (!found)
 		    fprintf(stderr,"set does not exit:%s\n",command);
     
}
void print_set(void){}
void union_set(void){}
void intersect_set(void){}
void sub_set(void){}
void symdiff_set(void){}
void stop(void){}

void print_set_h(void) {}
void union_set_h(void) {}
void intersect_set_h(void) {}
void sub_set_h(void) {}
void symdiff_set_h(void) {}
void stop_h(void) {}

