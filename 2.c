#include <stdio.h>
#include <string.h>

int main(){
    int input,len;
    char str[100];
    while(scanf("%d",&input)!=0){
        if(input==0)
            break;
        scanf("%s",str);
        len=strlen(str)/input;
        for(int i=0;i<=input;i++){
            for(int j=len*(i+1)-1;j>len*(i+1)-len-1;j--){
                printf("%c",str[j]);
            }
            if(i==input)
                puts("");
        }
        
    }
}