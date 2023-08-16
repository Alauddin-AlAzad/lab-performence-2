#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    //memory allocation
    a= (struct node*) malloc(sizeof(struct node));
    b= (struct node*) malloc(sizeof(struct node));
    c= (struct node*) malloc(sizeof(struct node));
    d= (struct node*) malloc(sizeof(struct node));
    //declear data
    a -> data = 10;
    b -> data = 20;
    c -> data = 30;
    d -> data = 40;
    //linked that
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = NULL;
    //Trevarse a link list
    while(a != NULL)
    {
        printf("%d ->",a-> data);
        a = a-> next;
    }
}
