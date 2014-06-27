#ifndef SQL_H
#define SQL_H
#include "ProgrammingLanguages.h"
//more languages can be made in the future to utilize my tool as my knowledge progresses.
//I picked up a little bit of SQL from my internship
class SQL : public ProgrammingLanguage
{
private:
	string problem;
	string description;
	string example;
public:
	SQL(string p, string d, string e){
		problem=p;
		description=d;
		example=e;
	}
	SQL(){
		problem="";
		description="";
		example="";
	}
	string getProblem(){
		return problem;
	}
	string getDescription(){
		return description;
	}
	string getExample(){
		return example;
	}
};
#endif