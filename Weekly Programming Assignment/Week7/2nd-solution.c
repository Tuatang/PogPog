#include <stdio.h>

int main() {
  
	long long x, y;
	scanf("%lld %lld",&x,&y);

	if(x==0 || y == 0) {		
		if(x==0){
			x=y;
			y=0;
		}
		else {
			y=x;
			x=0;
		}
	}
	else y=(x*y)/(x=y);
	printf("%lld %lld",x,y);

	return 0;
}
