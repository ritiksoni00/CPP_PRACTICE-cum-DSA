#include <iostream>

using namespace std;
struct students{
	int roll_no;
	char sex;	
};
int main()
{
	students anil;
	students *anlptr;
	anlptr = &anil;
	anil.roll_no = 12;
	anlptr->sex = 'm';
	cout<<anlptr->roll_no; // whenever we use ptr to structure we have to use arrow oprtr to their value
	cout<<anil.sex	;
	
	
	
	return 0 ;
}
