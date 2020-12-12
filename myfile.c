#include <stdio.h>
#include <string.h>
int main()
{
    char name[20][20];
	int n;
    printf("Enter no. of string array :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
	}
  printf("-----------");
	for(int i=0;i<n;i++){
		int l=strlen(name[i]);
		if (( name[i][0]=='a' || name[i][0]=='e' ||name[i][0]=='i' || name[i][0]=='o' ||name[i][0]=='u') && ( name[i][l-1]=='a' || name[i][l-1]=='e' ||name[i][l-1]=='i' || name[i][l-1]=='o' ||name[i][l-1]=='u')){
			printf("%s\n",name[i]);
		}
	}
    return 0;
}
