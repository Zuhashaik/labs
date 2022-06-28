#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
} *root,*tempr,*child ;

int temp,abc;
char side[20] ;
char path[100];
int main(){


root=(struct node*)malloc(sizeof(int));
printf("enter the root node value");
scanf("%d",&temp);
root->item=temp;

tempr=root;

int level=0;


printf("enter path");
scanf("%s",path);
int n=0;
while(path[n]!=NULL){
    if(path[n]=='l'){
        tempr=tempr->left;
        n++;
    }
    if(path[n]=='r'){
        tempr=tempr->right;
        n++;
    }
}




while(1){
{
printf("Preveious choice was %s \n",side);
printf("you are in level %d \n",level);

printf("l or r");
scanf("%s",side);


if(*(side)=='l'){
    child=(struct node*)malloc(sizeof(struct node));
    printf("enter the child node value");
    scanf("%d",&abc);
    child->item=abc;
    tempr->left=child;
    tempr->right=NULL;
    tempr=child;
    level++;

}

if(*(side)=='r'){
    child=(struct node*)malloc(sizeof(struct node));

    printf("enter the child node value");
    scanf("%d",&abc);
    tempr->right=child;
    tempr->left=NULL;

    child->item=abc;
    tempr=child;
    level++;

}
}
}
}