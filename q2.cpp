#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cu[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char cl[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(){
	int t,i,len;
	char c[1024];
	char co[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int ans[26]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++){
		getchar();
		scanf("%[^\n]",&c);
		len=strlen(c);
		for(int j=0;j<len;j++){
			if((c[j]>=65 && c[j]<=90) || (c[j]>=97 && c[j]<=122)){
				for(int k=0;k<26;k++){
					if(c[j]==cu[k] || c[j]==cl[k]){
						ans[k]++;
					}
				}	
			}
		}
	}
	for(i=1;i<26;i++){
		int key=ans[i];
		char temp=co[i];
		int j=i-1;
		while(j>=0 && ans[j]<key){
			ans[j+1]=ans[j];
			co[j+1]=co[j];
			j--;
		}
		ans[j+1]=key;
		co[j+1]=temp;
	}
	for(i=0;i<26;i++){
		for(int j=1;j<26;j++){
			if(ans[i]==ans[j]){
				if(co[j]>co[i]){
					char f=co[j];
					co[j]=co[i];
					co[i]=f;
				}
			}
		}
	}
	i=0;
	while(ans[i]!=0){
		printf("%c %d\n",co[i],ans[i]);
		i++;
	}
	return 0;
}
