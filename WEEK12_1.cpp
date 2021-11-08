#include <stdio.h>

int Max(int m,int n){
	if(m>n){
		return m;
	}
	else{
		return n;
	}
}

int main() {
	int i,j;
	printf("ENTER TWO NUMBER: ");
	scanf("%d %d",&i,&j);
	
	printf("%d",Max(i,j));
	
}
