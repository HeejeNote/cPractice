#include <stdio.h>
/**
	구조체 
*/
struct jsu {
	char nae[12];
	int os, db, hab, hhab;
};

int main(){
	struct jsu st[3] {
		{
			"data1", 95, 88 
		},
		{
			"data2", 84,91
		},
		{
			"data3", 86, 75
		}
	};
	
	struct jsu* p;
	p = &st[0];
	(p + 1) -> hab = (p + 1) -> os + (p + 2) -> db;
	(p + 1) -> hhab = (p + 1) -> hab + p -> os+ p -> db;
	printf("%d", (p + 1)-> hab + (p + 1) -> hhab);
}

/**
501
*/
