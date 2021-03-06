/*
*Description:linear queue program
*Author:khan heena
*Roll no:16co04
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if queue is full else returns -1
	return rear==MAX_SIZE-1;
	
}

int isEmpty(){
//returns 1 if queue is empty else returns -1
	return front==-1 && rear==-1;
	
}

int peek(){
//return element at the top of queue
	return queue[front];
}

 void insertqueue(int d)
{
	
	 if(!isFull())
	 {
		 if(isEmpty())
		 {
			 front++;
		 }
		 rear++;
		 queue[rear]=d;
		 printf("%d is sucessfully inserted",d);
	}
	else
	printf("Queue is full element cannot be inserted\n");
}	 	 

void deletqueue()
{
	int d;
	if(!isEmpty())
	{
		d=queue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
	    {
			front++;
		}
		printf("Element deleted is %d",d);
    }
    else{
		printf("queue is empty");
	}
}
	 



int main(){
	int choice,e;
	do
	{
		//display menu 1.peek 2.insert 3.delet 4.exit
		printf("\t\t\t\nMENU\n1.peek\n2.Insert\n3.Delet\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	//take input in choice variable
		switch(choice)
		{
			case 1:
				if(isEmpty())
				printf("Queue is Empty");
				else
				{
				e=peek();//call peek function
				printf("\nElement at the front of queue is : %d\n",e);
			    }
			    
				break;
			case 2:
				printf("\nEnter the elment to be inserted: \n");
				scanf("%d",&e);
				insertqueue(e);//call insert function
				break;
			case 3:
				deletqueue();//call delet function
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
				printf("\nInvalid Choice");//invalid choice
				break;				
		}
	}while(1);
	return 0;
}

/*******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 2

Enter the elment to be inserted:
10


10 is sucessfully inserted

******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 2

Enter the elment to be inserted:
20


20 is sucessfully inserted

******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 2

Enter the elment to be inserted:
30


30 is sucessfully inserted

******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 3


Element deleted is 10

******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 1

Element at the front of queue is : 20

******MENU******
1.peek
2.Insert
3.Delet
4.Exit
Enter your choice: 4

Process returned 0 (0x0)   execution time : 40.587 s
Press any key to continue.*/




