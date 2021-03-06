void RandomDirection(int presr, int presc, int &newr, int &newc){
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP6					Submitted: 4/25/15
	Chooses a direction			Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	int presr				store present row
	int presc				store present column
	int newr				store and change new row
	int newc				store and change new column
	int dir					random direction 

	Functions Called			What They Do
	----------------			------------

	==========================================================*/

	int dir = 5;//set as 5 so the number always changes
	//get a random place to go:
	srand(time(NULL));
	while (dir == 5) {
		dir = rand() % 9 + 1;//random number 1 through 9
	}//end while

	//set direction:
	if (dir<4){
		newr = presr - 1;
	} else if (dir >= 7) {
		newr = presr + 1;
	}//end if/else if
	
	if (dir % 3 == 0){
		newc = presc + 1;
	} else if (dir % 3 == 1) {
		newc = presc - 1;
	}//end if/else if


}//RandomDirection
