#include <stdio.h>

void f(int x,int y){
	printf("%d %d\n",x,y);
}

int main(){

	f( (1,2) , (1,2,3) );
	return 0;
}
