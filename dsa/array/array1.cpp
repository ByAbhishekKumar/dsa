#include <iostream>
using namespace std;
int main(void) {
	int marks[100] = {0}; //1.intialized with any discrete value(here '0' than excluding that value and its position all other reserved possition value will be zero.
	int n;
	cout << "Enter No. of Students whose marks to be display: ";
	cin >> n;
	cout<<"Enter marks of Students: ";
	int x = n;
	int y = n;int z = n;
	while(n>0){
		//inserting value
		cin>>marks[x-(n--)];
		//update
		marks[x-(y--)] = marks[x-(z--)]*2;
		
	}
	n = x;
	cout<<"marks of all students are:";
	while(n>0){   
		cout<<marks[x-(n--)]<<" ";
	}
	cout<<endl<<endl;

	for(int i=0;i<100;i++){
		cout<<marks[i]<<" "; //checking point 1.
	
	}
	cout<<endl;
	return 0;
}

