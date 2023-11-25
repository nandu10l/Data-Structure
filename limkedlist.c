#include<stdio.h>
#include<stdlib.h>
void InsertionAtFront(int info);
void InsertionAtanyposition(int info);
void InsertionAtEnd(int info);
void DeletionAtEnd();
void DeletionAtanyposition();
void DeletionAtFront();
void display();
struct node* tempCreation(int info);
struct node{
    int data;
    struct node* link;
}*temp,*head;

int main(){
    int ans = 1;
    printf("1.Insert at the beginning.\n2.Insert At any postion\n3.Insert at the end\n4.Deletion At Front\n5.Deletion At any positioon\n6.Deletion At End\n7.Display\n8.Exit\n");
    int choice;
    while(ans == 1){
        printf("Enter the choice:\n");
        scanf("%d",&choice);

        if (choice == 1){
            int info;
            printf("Enter the element\n");
            scanf("%d",&info);
            InsertionAtFront(info);
            display();
        }
        else if(choice == 2){
            int info;
            printf("Enter the element\n");
            scanf("%d",&info);
            InsertionAtanyposition(info);
            display();
        }
        else if (choice == 3){
            int info;
            printf("Enter the element\n");
            scanf("%d",&info);
            InsertionAtEnd(info);
            display();
        }
        else if (choice == 4){
            DeletionAtFront();
            display();
        }
        else if (choice == 5){
            DeletionAtanyposition();
            display();
        }
        else if (choice == 6){
            DeletionAtEnd();
            display();
        }
        else if (choice == 7){
            display();
        }
        else if (choice == 8){
            printf("Exiting the program");
            ans = 0;
        }
        else{
            printf("Invalid Input\n");
        }
    }
    return 0;
}
void InsertionAtFront(int info){
   temp = tempCreation(info);
    if (head == NULL){
        head = temp;
    }
    else{
        temp ->link = head;
        head = temp;
    }
}


void InsertionAtanyposition(int info){
    struct node* loop,*newTemp;
    loop = head;
    printf("\nEnter the postion(The position start fronm 1): \n");
    int pos,i = 0;
    scanf("%d",&pos);
    temp = tempCreation(info);
    if (loop == NULL){
        head = temp;
    }
    else if(pos == 1){
        InsertionAtFront(info);
    }
    else{
        while(i<pos-1){
        newTemp = loop;
        loop = loop->link;
        i++;
    }
    temp->link = newTemp ->link;
    newTemp->link = temp;
    }
}
void InsertionAtEnd(int info){
    struct node * loop;
    temp = tempCreation(info);
    if (head == NULL){
        head = temp;
    }
    else{
        loop = head;
        while(loop->link!=NULL){
            loop = loop-> link;
        }
        loop->link = temp;
    }
}
void DeletionAtFront(){
    if (head == NULL){
        printf("There is no element to delete..\n");
    }
    else{
        temp = head;
        head = temp->link;
        printf("%d is deleted\n",temp->data);
        free(temp);
    }
}
void DeletionAtanyposition(){
    if (head == NULL){
        printf("There is no element to delete..\n");
    }
    else{
        printf("\nEnter the postion\n");
        int pos;
        scanf("%d",&pos);
        if (pos == 1){
        	DeletionAtFront();
        }
        else{
        int i = 0;
        struct node* temp2;
        temp = head;
        while(i<pos-1){
            temp2 = temp;
            temp = temp->link;
            i++;
        }
        temp2->link = temp->link;
        printf("%d is deleted",temp->data);
        free(temp);
        }
        
}
}
void DeletionAtEnd(){
    struct node* temp2;
    if (head == NULL){
        printf("\nThe linked list is empty..");
    }
    else{
        temp = head;
        while(temp->link!=NULL){
            temp2 = temp;
            temp = temp-> link;
        }
        temp2->link = NULL;
        printf("%d is deleted",temp->data);
        free(temp);
    }
}
void display(){
	if (head == NULL){
		printf("\nEmpty List\n");
	}
	else{	
    temp = head;
    printf("\nThe linked list is \n");
    while (temp!= NULL){
        printf("%d ->",temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
	}
}
struct node* tempCreation(int info){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = info;
    temp -> link = NULL;
    return temp;

}
