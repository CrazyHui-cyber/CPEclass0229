#include <stdio.h>
#include <stdlib.h>

int main(){
	int t,a,b,sum,c=1;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if(i%2==1) sum+=i;
		}
		printf("case %d: %d\n",c,sum);
		c++;
	}
	return 0;
}
