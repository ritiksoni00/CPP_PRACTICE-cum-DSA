#include <iostream>

using namespace std;
struct students{
	int roll_no;
	char sex;	
}anil, ram;
int main(){
	students rahul,ajay = {11,'m'};
	rahul.roll_no = 233;
	rahul.sex = 'm';
	cout<<rahul.roll_no;
	
	
	return 0;
}
