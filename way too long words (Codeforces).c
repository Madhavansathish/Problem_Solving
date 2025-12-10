#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[105];
        scanf("%s",str);
        int n=strlen(str);
        if(n>10){
            printf("%c%d%c\n",str[0],n-2,str[n-1]);
        }
        else{
            printf("%s\n",str);
        }
        
    }
}
