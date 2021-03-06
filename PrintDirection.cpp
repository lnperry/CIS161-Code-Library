void PrintDirection(int presr, int presc, int newr, int newc, ofstream &outputstream){
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP6					Submitted: 4/25/15
	Prints direction chosen			Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	int presr				store present row
	int presc				store present column
	int newr				store new row
	int newc				store new column

	Functions Called			What They Do
	----------------			------------

	==========================================================*/

	cout << "Moved ";
	outputstream << "Moved ";
	if (newr == presr - 1){//if above, print N for North
		cout << "N";
		outputstream << "N";
	}//end if
	else if (newr == presr + 1){ //if below print S for South
		cout << "S";
		outputstream << "S";
	}
	if (newc == presc - 1){ //if to left print W for West
		cout << "W";
		outputstream << "W";
	}
	else if (newc == presc + 1){ //if to right print E for East
		cout << "E";
		outputstream << "E";
	}
	cout << endl;
}//end PrintDirection
