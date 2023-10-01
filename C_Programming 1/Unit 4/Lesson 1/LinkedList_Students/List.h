
#ifndef Student_List_H_
#define Student_List_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

//3lshan el bug elly fe eclips
#define DPRINTF(...) {	fflush(stdout); \
						fflush(stdin); \
						printf(__VA_ARGS__); \
						fflush(stdout); \
						fflush(stdin);}


//effective data
struct Sdata {
	char name[40];
	unsigned int id ;
	unsigned int age ;
	float height ;
};
//linked list nodes
struct Sstudents
{
	struct Sdata student ;
	struct Sstudents* PnextStudent ;
};


void Add_Student();
int Delete_Student();
void Delete_All();
void Print_ALL();
int counting();
void middle();
void middle_v();
void getF();
void getL();






#endif
