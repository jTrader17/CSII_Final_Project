#include "functions.h"
//My SQL knowledge is limited so the data will be also. It is mostly in here to show how I would bring in another language.
int main(){
	//For C++
	ifstream input;
	//location of file
	input.open("c:\\users\\Jason\\desktop\\Coding.txt");
	if (input.fail()){
		cout <<"Houston we have a problem" << endl;
	}
	//More vectors will be created as I learn more languages
	vector<Cplusplus> cplusplus;
	char problem[256], description[256], example[256];
	while (!input.eof()){
		input.getline(problem,256,'*');
		input.getline(description,256,'*');
		input.getline(example,256);
		Cplusplus temp(problem,description,example);
		cplusplus.push_back(temp);
	}
	input.close();

	//For SQL
	ifstream input2;
	//location of file
	input.open("c:\\users\\Jason\\desktop\\SQL.txt");
	if (input.fail()){
		cout <<"Houston we have a problem" << endl;
	}
	vector<SQL> sql;
	while (!input.eof()){
		input.getline(problem,256,'#');
		input.getline(description,256,'#');
		input.getline(example,256);
		SQL temp(problem,description,example);
		sql.push_back(temp);
	}
	input.close();



	int start=welcome();
	switch (start){
	case 1:
		studycpp(cplusplus);
		break;
	case 2:
		testcpp(cplusplus);
		break;
	case 3:
		studysql(sql);
		break;
	case 4:
		testsql(sql);
		break;
	case 5:
		cout << "To try again restart the program." << endl;
		break;
	case 6:
		printcpp(cplusplus);
		break;
	case 7:
		printsql(sql);
		break;
	}
	return 0;
}