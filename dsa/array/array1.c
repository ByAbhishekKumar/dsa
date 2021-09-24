#include <stdio.h>

int main(void) {
	int marks[100] = {0};
	int n;
	printf("Enter No. of Students whose marks to be display: ");
	scanf("%d",&n);
	printf("Enter marks of Students: ");
	int x = n;
	while(n>0){
		scanf("%d",&marks[x-(n--)]);
	}
	n = x;
	printf("marks of all students are: ");
	while(n>0){
		printf("%d ",marks[x-(n--)]);
	}
	return 0;
}

