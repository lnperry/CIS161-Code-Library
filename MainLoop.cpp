int MainLoop()
{
	/* ========================================================
	Leah Perry					CIS 161 Spring 2015
	MP1						Submitted: 1/30/15
	Does the User Want to Rerun Code?		Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	int MainLoopInput			holds value to determine answer
	int ans					hold int value to return results

	Functions Called		What They Do
	----------------		------------

	==========================================================*/
	string MainLoopInput;
	int ans = 3;
	while (ans == 3) {
		printf("Do you want to run the program again? \nEnter 'Yes' or 'Y' to continue the program. Enter 'No' or 'N' to close."); //exit prompt
		cin >> MainLoopInput; //scan user response
		if (MainLoopInput[0] == 'Y' || MainLoopInput[0] == 'y') {
			ans = 1; //if any variatoin of 'yes', program returns true
		}
		else if (MainLoopInput[0] == 'N' || MainLoopInput[0] == 'n') {
			ans = 0; //returns 0 for false
		}
	}
	return ans;
}//End MainLoop
