#ifndef TYPEBASE_H
#define TYPEBASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//provides info for all coding. At the moment it is not accessed (aside from inheritance) but it is here if it needs to be
class ProgrammingLanguage
{
protected:
	string title;
	string explanation;
public:
	string getTitle(){
		return title;
	}
	string getExplanation(){
		return explanation;
	}
	ProgrammingLanguage(){
		title="Programming Language";
		explanation="Programming languages are made to enable the user to use a computer's hardware in order to perform calculations with entered data.";
	}
};
#endif