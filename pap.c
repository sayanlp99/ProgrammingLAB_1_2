#include<stdio.h>
#include<conio.h>

#define N 5
int top = -1;
int stack[N];
//Function prototypes
void push(int item);
int pop();

void main()
{
      int item, choice, cont = 1;
      clrscr();

      while(cont == 1)
      {
            printf("\n1.Push onto stack.\n");
            printf("\n2.Pop from stack.\n");

            printf("\nEnter your choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
                  case 1:
                        printf("\nEnter the value of item:");
                        scanf("%d",&item);
                        push(item);
                        break;
                  case 2:
                        item = pop();
                        if(item != NULL)
                        {
                            printf("\nItem popped out: %d\n",item);
                        }                       
                        break;
                  default:
                        printf("\nInvalid choice.\n");
                        break;
            }
            printf("\nDo you want to continue (1/0): ");
            scanf("%d",&cont);
      }
      getch();
}

//Function Definition for push operation
void push(int item)
{
      if(top >= N-1)
      {
            printf("\nStack Overflow. Push not possible.\n");
      }
      else
      {
            top = top+1;
            stack[top] = item;
      }
}

//Function for pop operation
int pop()
{
      int item = NULL;

      if(top == -1)
      {
            printf("\nStack Underflow. Pop not possible.\n");
      }
      else
      {
            top = top-1;
            item = stack[top+1];
            stack[top+1]=NULL;
      }
      return(item);
}
