#include <stdio.h>
#define NAME "GIGATHINK,ING."
#define ADDRESS "101 Megabuck Plazd"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40

void starbar(void);

int main(void){
	
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();
	
	return 0;
	
}

void starbar(void){
	int count;
	
	for(count = 0 ; count <= WIDTH ; count++){
		
		putchar('*');
		
		}
		putchar('\n');
	
}
