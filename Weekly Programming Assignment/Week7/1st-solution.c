#include <stdio.h>

int main() {

	long long x, y;
	scanf("%lld %lld",&x,&y);
	y-=x;
	x+=y;
	y=x-y;
	printf("%lld %lld",x,y);

	return 0;
}
