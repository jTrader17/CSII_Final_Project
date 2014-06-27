#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Cplusplus.h"
#include "SQL.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int welcome(){
	cout <<"This is Jason's official study guide for coding.\nWould you like to study for C++? (y/n) ";
	char ans;
	cin >> ans;
	switch (ans){
	case 'y':
	case 'Y':
		cout << "Would you like to study, test, or print? (s/t/p) ";
		char a;
		cin >> a;
		switch(a){
		case 's':
		case 'S':
			return 1;
			break;
		case 't':
		case 'T':
			return 2;
			break;
		case 'p':
		case 'P':
			return 6;
			break;
		default:
			cout << "Not a valid answer" << endl;
			return 5;
			break;
		}
		break;
	case 'n':
	case 'N':
		cout << "Would you like to study for SQL? (y/n) ";
		cin >> ans;
		switch (ans){
		case 'y':
		case 'Y':
			cout << "Would you like to study or test? (s/t) ";
			char a;
			cin >> a;
			switch(a){
			case 's':
			case 'S':
				return 3;
				break;
			case 't':
			case 'T':
				return 4;
				break;
			case 'p':
			case 'P':
				return 7;
				break;
			default:
				cout << "Not a valid answer" << endl;
				return 5;
				break;
			}
			break;
		case 'n':
		case 'N':
			cout << "sorry no other languages" << endl;
			return 5;
			break;
		default:
			cout << "Not a valid answer." << endl;
			return 5;
			break;
		}
	default:
		cout << "Not a valid answer." << endl;
		return 5;
		break;
	}
}
//would have made this a template for other programming languages but thten I couldn't call class specific function
void studycpp(vector<Cplusplus> a){
	char cont,z='y';
	cout <<"enter \"c\" to continue when program stops" << endl;
	for (int i=0;i<a.size();i++){
		if (z!='y' && z!='Y'){
			cout << "Thanks for studying!" << endl;
			return;
		}
		cout << a[i].getProblem() << " ";
		cin >> cont;
		cout << a[i].getDescription() << endl << "Would you like to see an example? (y/n) ";
		cin >> cont;
		if (cont=='y'){
			cout <<a[i].getExample() << " ";
			cin >> cont;
		}
		cout << "Would you like to continue? (y/n) ";
		cin >> z;
	}
}
template <typename T>
void random (vector<T>& v){
	T temp;
	srand(time(NULL));
	unsigned int size= v.size();
	int modNum=size, x, y=0;
	vector<T> tempVector(size);
	vector<int> dummy(size);
	for(int i=0; i<size; i++){
		dummy[i]=NULL;
	}
	while(!allSet(dummy)){
		x=rand()%modNum;
		//makes sure space is empty
		if (dummy[x]==NULL){
			T a;
			a=v[y]; 
			tempVector[x]=a;
			y++;
			dummy[x]=1;
		}
	}
	for (int i=0; i<size; i++){

		v[i]=tempVector[i];

	}
}

template <typename T>
bool allSet(vector<T>& q){
	bool test=true;
	int size=q.size();
	for(int i=0; i<size; i++){
		if (q[i]==NULL){
			test=false;
		}
	}
	if (!test){
		return false;
	}
	else
		return true;

}

//uses class specific function so I can't make a template
void testcpp(vector<Cplusplus> a){
	// randomizes so cant be memorized
	random(a);
	double math;
	int prob=0, rite=0;
	char cont,corr;
	cout <<"enter \"c\" to continue when program stops" << endl;
	//test so user can't stop in the middle
	for (int i=0;i<a.size();i++){
		cout << a[i].getProblem() << " ";
		cin >> cont;
		//Can't check exact wording so testing asks user
		cout << a[i].getDescription() << endl << "Did you get that right? (y/n) ";
		cin >> corr;
		if (corr=='y' || corr=='Y')
		{
			rite++;
		}
		else{
			cout <<"OK, here's an example: \n" <<a[i].getExample() << " ";
			cin >> cont;
		}
		prob++;
	}
	math=1.0*rite/prob;
	cout << "You got " << rite << " problems right out of " << prob <<". That's "<< math*100 << " percent." << endl;
	return;
}

void testsql(vector<SQL> a){
	// randomizes so cant be memorized
	random(a);
	double math;
	int prob=0, rite=0;
	char cont,corr;
	cout <<"enter \"c\" to continue when program stops" << endl;
	//test so user can't stop in the middle
	for (int i=0;i<a.size();i++){
		cout << a[i].getProblem() << " ";
		cin >> cont;
		cout << a[i].getDescription() << endl << "Did you get that right? (y/n) ";
		cin >> corr;
		if (corr=='y' || corr=='Y')
		{
			rite++;
		}
		else{
			cout <<"OK, here's an example: \n" <<a[i].getExample() << " ";
			cin >> cont;
		}
		prob++;
	}
	math=1.0*rite/prob;
	cout << "You got " << rite << " problems right out of " << prob <<". That's "<< math*100 << " percent." << endl;
	return;
}

void studysql(vector<SQL> a){
	char cont,z='y';
	cout <<"enter \"c\" to continue when program stops" << endl;
	for (int i=0;i<a.size();i++){
		if (z!='y' && z!='Y'){
			cout << "Thanks for studying!" << endl;
			return;
		}
		cout << a[i].getProblem() << " ";
		cin >> cont;
		cout << a[i].getDescription() << endl << "Would you like to see an example? (y/n) ";
		cin >> cont;
		if (cont=='y'){
			cout <<a[i].getExample() << " ";
			cin >> cont;
		}
		cout << "Would you like to continue? (y/n) ";
		cin >> z;
	}
}

void printcpp(vector<Cplusplus> a){
	ofstream out;
	out.open("c:\\users\\Jason\\desktop\\Printcpp.txt");
	for (int i=0;i<a.size();i++){
		out << a[i].getProblem() << endl << a[i].getDescription() << endl << a[i].getExample() << endl << endl;
	}
	out.close();
}

void printsql(vector<SQL> a){
	ofstream out;
	out.open("c:\\users\\Jason\\desktop\\Printcpp.txt");
	for (int i=0;i<a.size();i++){
		out << a[i].getProblem() << endl << a[i].getDescription() << endl << a[i].getExample() << endl << endl;
	}
	out.close();
}
#endif