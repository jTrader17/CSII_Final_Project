#ifndef CPLUSPLUS_H
#define CPLUSPLUS_H
#include "ProgrammingLanguages.h"
//more languages can be made in the future to utilize my tool as my knowledge progresses.
class Cplusplus : public ProgrammingLanguage
{
private:
	string problem;
	string description;
	string example;
public:
	Cplusplus(string p, string d, string e){
		problem=p;
		description=d;
		example=e;
	}
	Cplusplus(){
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