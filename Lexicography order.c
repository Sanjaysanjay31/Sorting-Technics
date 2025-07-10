#include<stdio.h>
#include<string.h>
int main(){
	int n , i , j ;
	printf("Enter the Number of Words : ");
	scanf("%d",&n);
	char word[n][1000] , temp[1000];
	printf("\nEnter the Words :-\n");
	for(i = 0 ; i < n ; i++){
		scanf("%s",&word[i]);
	}
	for( i = 0 ; i < n-1 ; i++){
		for(j = i+1 ; j < n ; j++){
			if(strcmp(word[i] , word[j]) > 0 ){
				strcpy(temp , word[i]);
				strcpy(word[i] , word[j]);
				strcpy(word[j] , temp);
			}
		}
	}
	for( i = 0 ; i < n ; i++){
		printf("%s\n",word[i]);
	}
}
