#include <stdio.h>
#include <stdlib.h>
#include "set.h"
void read_set(set SET, int number[] ){
	int i;
	memset(SET, 0, sizeof(set));//לאפס את הקבוצה לפני שמעדכנים אותה
	if(number[0] != -1)//רק אם לא צריך ליצור קבוצה ריקה
		for(i=0;number[i] != -1;i++){
		 	SET[number[i]/8]|= 1 << number[i]%8; //מדליק את הביט באינדקס של הקבוצה לפי המספר הנוכחי ברשימה

  		
}

 


void print_set(const set s) {
    int isEmpty = 1;
    for (int i = 0; i < 128; ++i) {
        if (s[i / 8] & (1 << (i % 8))) {
            if (isEmpty) {
                isEmpty = 0;
            } else {
                printf(", ");
            }
            printf("%d", i);
        }
    }
    if (isEmpty) {
        printf("The set is empty");
    }
    printf("\n");
}

void union_set(set result, const set s1, const set s2) {
    for (int i = 0; i < 16; ++i) {
        result[i] = s1[i] | s2[i];
    }
}

void intersect_set(set result, const set s1, const set s2) {
    for (int i = 0; i < 16; ++i) {
        result[i] = s1[i] & s2[i];
    }
}

void sub_set(set result, const set s1, const set s2) {
    for (int i = 0; i < 16; ++i) {
        result[i] = s1[i] & ~s2[i];
    }
}

void symdiff_set(set result, const set s1, const set s2) {
    for (int i = 0; i < 16; ++i) {
        result[i] = s1[i] ^ s2[i];
    }
}
