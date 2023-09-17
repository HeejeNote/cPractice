#include <stdio.h>

int main(){
	struct insa {
		char name[10];
		int age;
	} a[] = {"kim", 29, "lee", 38, "park", 42, "choi", 31};
	struct insa* p;
	p = a;
	p++;
	printf("%s\n", p->name);
	printf("%d\n", p->age);
}

/**
lee
38
*/
