#include<stdio.h>
#include<stdlib.h>

int main()
{

   // char s[80]={'1','2','3','4'};
      char s[80]="abcd"; //this is ok as as we are  using the correct convention to give input for an array
   // s[4]="s";    // this is not ok as we are using "" instead of ''while assigning one element at s[4]
   // s[4]="sup";    // this is not ok as we cannot give array continous values after its declaration
   // s[4]='s'; // this is ok as we are giving only single value
   // scanf("%s",s+4); // this will append any str of cont values after 3rd index all credits to the %s
   
    scanf("%c",s+4); // this will work fine and will only enter the left most character if given as continous stream of letters
    printf("---str---\n");

    printf("%s",s);

}