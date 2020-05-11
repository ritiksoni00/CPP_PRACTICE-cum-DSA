#include <iostream>

using namespace std;
struct students{
	int roll_no;
	char sex;
	int age;	
};
void disp(students s){
	cout<<s.roll_no<<endl;
	cout<<s.sex<<endl;
	cout<<s.age<<endl;	
}
void show(students *s){
	cout<<s->roll_no<<endl;
	cout<<s->sex<<endl;
	cout<<s->age<<endl;	
}
int main(){
	students anil = {12,'m',24};
	disp(anil);
	show(&anil)	;
	return 0;
}
