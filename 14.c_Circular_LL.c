
/*
	14.c) Circular Singly LL - head, search and delete
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>
#include<stdlib.h>

struct node
	{
	int data;
	struct node *link;
	};

void main()

{
	int a,x,n,f;
	struct node *head,*temp,*ptr,*ptr1;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=NULL;
	head->link=head;

	do
	{
		ptr=head;
		printf("\nMENU\n1.Insertion at End\n2.Insertion in Between\n3.Deletion\n4.Search\n5.Display\n6.Exit\nEnter choice:");
		scanf("%d",&n);
        if(n==1)
        {
            while(ptr->link!=head)
		{
                ptr=ptr->link;
		}
            temp=(struct node*)malloc(sizeof(struct node));
            ptr->link=temp;
            printf("Enter data: ");
            scanf("%d",&x);
            temp->data=x;
            temp->link=head;
		}
        
	else if(n==2)
	{
		printf("Enter the element: ");
		scanf("%d",&a);
		ptr=ptr->link;
	
	while(ptr!=head)
            {
                if(ptr->data==a)
                {
                    temp=(struct node*)malloc(sizeof(struct node));
                    ptr1=ptr->link;
                    ptr->link=temp;
                    temp->link=ptr1;
                    printf("Enter data: ");
                    scanf("%d",&x);
                    temp->data=x;

                }
                ptr=ptr->link;
            }
        }
        
	else if(n==3)
        {
	    if(ptr->link==NULL)
            {
                printf("List is empty!");
            }
            
	    else
            {
                printf("Enter the element: ");
                scanf("%d",&a);
                f=0;
               
		while(ptr->link!=head)
                {
                    ptr1=ptr;
                    ptr=ptr->link;
                    
		    if(ptr->data==a)
                    {
                        ptr1->link=ptr->link;
                        free(ptr);
                        f+=1;
                    }
                }
                
		if(f==0)
                {
                    printf("Element not found!");
                }
            }
        }
        
	else if(n==4)
        {
            if(ptr->link==head)
            {
                printf("Empty list!");
            }
            ptr=ptr->link;
            f=0;
            printf("Enter the element: ");
            scanf("%d",&a);
            
	    while(ptr!=head)
            {
                if(ptr->data==a)
                {
                    printf("\nElement found!");
                    f+=1;
                }
                ptr=ptr->link;
            }
            
	    if(f==0)
            {
                printf("\nElement NOT found!");
            }
        }
        
	else if(n==5)
        {
            ptr=ptr->link;
            
	    while(ptr!=head)
            {
                printf("%d -> ",ptr->data);
                ptr=ptr->link;
            }
            temp=ptr->link;
            printf("%d",temp->data);
        }
    }while(n==1 || n==2 || n==3 || n==4 || n==5);
}
