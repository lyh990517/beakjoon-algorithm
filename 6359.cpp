#include<stdio.h>
int game(int n);
int room[1000];

int main(){
	int n,i,c,score[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c);
		score[i] = game(c);
	}
	for(i=0;i<n;i++){
		printf("%d\n",score[i]);
	}
	return 0;
}
int game(int n){ // 0 Àº ´ÝÈû 1 Àº ¿­¸² 
	int i,j,k,count = 0;
    
    for(i=1;i<=n;i++){
      k = 0;
        for(j=1;j<=n;j++){
          k += i;
            if(room[k] == NULL){
              if(k > n) break;
                room[k] = 1;
            }
            else{
                room[k] = 0;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(room[i] == 1) count ++;
    }
    for(i = 0;i<1000;i++) room[i] =0;
    return count;
    
}


