ofstream OpenOutputFile(string file) {
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP1					Submitted: 1/30/15
	Opens Output File			Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	string file				get filename
	ofstream outstream			create output stream to file

	Functions Called		What They Do
	----------------		------------

	==========================================================*/
	ofstream outstream;
	outstream.open(file.c_str()); //opens the output stream
	if (outstream.fail()) { //if output stream can't open, report to user
		cerr << "\n Error. Cannot Open " << file << endl;
	}
	else {
		cout << "\n" << file << " has been opened.\n";
	}
	return outstream;
} //opensoutstream
