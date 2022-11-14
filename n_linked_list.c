#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
}*head,*newNode,*temp;

int main(){
    int n,i;
    printf("Enter the Number of Nodes to Create:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Data for Node %d:",i);
        scanf("%d",&newNode->data);
        newNode ->next = NULL;
        if (head == NULL){
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("List Data:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


