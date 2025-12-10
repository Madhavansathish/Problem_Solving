#include <stdio.h>
#include <string.h>

int vowel(char *l){
    int count=0;
    for(int i=0;l[i]!='\0';i++){
        char ch=l[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        count++;
       }
    }
    
    return count;
}

int main()
{
   char l1[210];
   char l2[210];
   char l3[210];
   
   fgets(l1,sizeof(l1),stdin);
   fgets(l2,sizeof(l2),stdin);
   fgets(l3,sizeof(l3),stdin);
   //scanf("%[^\n]%*c",l1);
   //scanf("%[^\n]%*c",l2);
   //scanf("%[^\n]%*c",l3);
  
   int v1=vowel(l1);
   int v2=vowel(l2);
   int v3=vowel(l3);
   
   if(v1==5&&v2==7&&v3==5){
       printf("YES");
   }
   else{
     printf("NO");
   }
}
