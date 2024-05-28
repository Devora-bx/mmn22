#ifndef SET_H
#define SET_H
typedef int set[16];

typedef struct {
 	char *name;
 	set myset;
}SetStruct;

void read_set_h(void);
void print_set_h(void);
void union_set_h(void);
void intersect_set_h(void);
void sub_set_h(void);
void symdiff_set_h(void);
void stop_h(void);
void any( char *str,  SetStruct arrSet[], int num_options,set SetToSend);

void read_set(set SET, int number[] );
void print_set(set s);
void union_set(set result, set s1, set s2);
void intersect_set(set result, set s1,set s2);
void sub_set(set result, set s1, set s2);
void symdiff_set(set result, set s1, set s2);

char command[30] ;


extern char *arrayOfSet[];
extern SetStruct structSet[];
#endif 

