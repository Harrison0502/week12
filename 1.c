#include <stdio.h>
#include <string.h>

int main(){
    char str[100000]={0};
    while(scanf("%[^\n]",str)!=EOF){
        getchar();
        for(int i=0;i<strlen(str);i++){
            if(str[i]==' ')
                printf(" ");
            else
                printf("%c",str[i]-4);
            if(i==strlen(str)-1)
                puts("");
        }
        memset(str,0,sizeof(str));
    }
}