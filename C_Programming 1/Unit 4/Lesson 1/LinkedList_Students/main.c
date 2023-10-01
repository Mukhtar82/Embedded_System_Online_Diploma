#include "List.h"

void main()
{
	char temp_text[40];

	while(1)
	{
		DPRINTF("\n ==============");
		DPRINTF("\n\t Choose one of the following options \n");
		DPRINTF("\n 1: Add student  ");
		DPRINTF("\n 2: Delete Student ");
		DPRINTF("\n 3: Delete All Students ");
		DPRINTF("\n 4: View All Students  ");
		DPRINTF("\n 5: The number of the students  ");
		DPRINTF("\n 6: The Middle of the List (using 2 pointers)");
		DPRINTF("\n 7: The Middle of the List  ");
		DPRINTF("\n 8: searching by number (from the top of the list) ");
		DPRINTF("\n 9: searching by number (from the end of the list)");
		DPRINTF("\n Enter the number of the option: ");

		gets (temp_text);
		DPRINTF("\n===================== ");
		switch (atoi(temp_text))
		{
		case 1:
			Add_Student();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			Delete_All();
			break;
		case 4:
			Print_ALL();
			break;
		case 5:
			counting();
			break;
		case 6:
			middle();
			break;
		case 7:
			middle_v();
			break;
		case 8:
			getF();
			break;
		case 9:
			getL();
			break;
		default:
			DPRINTF("\n====Wrong option====");
			break;
		}
	}

}
