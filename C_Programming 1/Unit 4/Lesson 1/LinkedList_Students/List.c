#include "List.h"

//head
struct Sstudents* GPFirstStudent = NULL;

void Add_Student()
{
	struct Sstudents* PnewStudent ;
	struct Sstudents* PlastStudent ;
	char text_temp[40];
	//check if the list empty
	if(GPFirstStudent == NULL)
	{
		//create new record
		PnewStudent = (struct Sstudents*)malloc (sizeof (struct Sstudents));
		//assign it as a first student on the list
		GPFirstStudent = PnewStudent ;
	}
	else
	{
		//navigate until reach the last student
		PlastStudent = GPFirstStudent ;
		while(PlastStudent->PnextStudent)
			PlastStudent= PlastStudent->PnextStudent ;
		//create new record
		PnewStudent = (struct Sstudents*)malloc (sizeof (struct Sstudents));
		//assign it as the last student on the list
		PlastStudent->PnextStudent = PnewStudent ;
	}
	//fill the record
	//ID
	DPRINTF("\nEnter Your ID :");
	gets(text_temp);
	PnewStudent->student.id = atoi(text_temp);
	//name
	DPRINTF("\nEnter Your full name :");
	gets(PnewStudent->student.name);
	//age
	DPRINTF("\nEnter Your Age :");
	gets(text_temp);
	PnewStudent->student.age = atoi(text_temp);
	//height
	DPRINTF("\nEnter Your height :");
	gets(text_temp);
	PnewStudent->student.height = atof(text_temp);
	//assign the last added one's head  to null
	PnewStudent->PnextStudent = NULL ;
}

int Delete_Student()
{
	struct Sstudents* Pselected = GPFirstStudent ;
	struct Sstudents* Pprevious = NULL ;
	int selected_id ;
	char text_temp[40] ;
	//get the ID
	DPRINTF("\n Enter the Id : ");
	gets(text_temp);
	selected_id = atoi(text_temp);
	//check if the list contain students
	if(GPFirstStudent)
	{
		while(Pselected)
		{
			if (Pselected->student.id == selected_id)
			{
				if(Pprevious)//not the first one
				{
					if(Pselected->PnextStudent)//not the last one
					{
						Pprevious->PnextStudent = Pselected->PnextStudent ;
					}
					else //the last one
					{
						Pprevious->PnextStudent = NULL ;
					}
				}
				else // the first one
				{
					GPFirstStudent = Pselected->PnextStudent ;
				}
				free (Pselected);
				return 1 ;

			}

			Pprevious = Pselected ;
			Pselected++ ;
		}

	}
	DPRINTF("\nCan't find the student ID.");
	return 0 ;
}

//delete all members
void Delete_All()
{
	struct Sstudents* Pcurrent = GPFirstStudent ;
	if(GPFirstStudent == NULL)
	{
		DPRINTF("\n====The List is Empty====");
	}
	else
		while(Pcurrent)
		{
			struct Sstudents* Ptemp = Pcurrent ;
			Pcurrent = Pcurrent->PnextStudent ;
			free(Ptemp);
		}
	GPFirstStudent = NULL ;
}


//print the whole list
void Print_ALL()
{
	struct Sstudents* Pcurrent = GPFirstStudent ;
	int count = 1 ;
	if(GPFirstStudent == NULL)
	{
		DPRINTF("\n====The List is Empty====");
	}
	else
	{
		while(Pcurrent)
		{
			DPRINTF("\nThe record no.%d",count);
			DPRINTF("\n\t ID:%d",Pcurrent->student.id);
			DPRINTF("\n\t Name:%s",Pcurrent->student.name);
			DPRINTF("\n\t Age:%d",Pcurrent->student.age);
			DPRINTF("\n\t Height:%.2f",Pcurrent->student.height);
			Pcurrent = Pcurrent->PnextStudent ;
			count++;
		}
	}
}

//calculate the length of the list

//using Iterative
int counting()
{
	int count=0 ;
	struct Sstudents* counter = GPFirstStudent ;
	if(counter == NULL)
		return count ;
	else
	{
		while(counter)
		{
			count++ ;
			counter = counter->PnextStudent;
		}
		return count ;
	}
}
// the middle
//print the middle of the list using 2 pointers
void middle()
{
	struct Sstudents* fast = GPFirstStudent ;
	struct Sstudents* slow = GPFirstStudent ;
	if(fast == NULL)
	{
		DPRINTF("\nThe list is empty");
	}
	else
	{
		while(fast)
		{
			fast= fast->PnextStudent->PnextStudent ;
			slow = slow->PnextStudent ;
		}

		DPRINTF("\n\t ID:%d",slow->student.id);
		DPRINTF("\n\t Name:%s",slow->student.name);
		DPRINTF("\n\t Age:%d",slow->student.age);
		DPRINTF("\n\t Height:%.2f",slow->student.height);
	}
}

// using pointer and counter

void middle_v()
{
	int x ;
	int mid = counting()/2 ; //middle one
	struct Sstudents* middle = GPFirstStudent ;
	if(middle == NULL)
	{
		DPRINTF("\n The list is empty");
	}
	else
	{
		for (x=0 ; x<mid ; x++ )
		{
			middle = middle->PnextStudent ;
		}
		DPRINTF("\n\t ID:%d",middle->student.id);
		DPRINTF("\n\t Name:%s",middle->student.name);
		DPRINTF("\n\t Age:%d",middle->student.age);
		DPRINTF("\n\t Height:%.2f",middle->student.height);
	}
}
// viewing student by using record number
void getF()
{
	int count , x ;
	char text_temp[40];
	struct Sstudents* NTH = GPFirstStudent ;
	if(NTH == NULL)
	{
		DPRINTF("\nThe list is empty");
	}
	else
	{
		DPRINTF("\nEnter the number of the record please:");
		gets(text_temp);
		x = atoi(text_temp);
		if(x>(counting()))
		{
			DPRINTF("\n===The chosen number is out of the range===");
		}
		else
		{
			for(count = 1 ;count < x ; count ++)
			{
				NTH= NTH->PnextStudent ;
			}
			DPRINTF("\n\t ID:%d",NTH->student.id);
			DPRINTF("\n\t Name:%s",NTH->student.name);
			DPRINTF("\n\t Age:%d",NTH->student.age);
			DPRINTF("\n\t Height:%.2f",NTH->student.height);
		}

	}

}

// get the student using it No.th from the end
//using 2 pointers
void getL()
{
	int x , count ;
	struct Sstudents* tool = GPFirstStudent ;
	struct Sstudents* real = GPFirstStudent ;
	if(real == NULL)
	{
		printf("\n the list is empty");
	}
	else
	{
		char text_temp[40];
		gets(text_temp);
		x = atoi(text_temp);
		for(count=0 ; count<x ; count++)
		{
			tool = tool->PnextStudent;
		}
		while(tool)
		{
			tool = tool->PnextStudent;
			real = real->PnextStudent;
		}
		DPRINTF("\n\t ID:%d",real->student.id);
		DPRINTF("\n\t Name:%s",real->student.name);
		DPRINTF("\n\t Age:%d",real->student.age);
		DPRINTF("\n\t Height:%.2f",real->student.height);
	}
}
