#include<stdio.h>
#include<process.h>
int top=-1;stack[100],MAX;
void push();
void pop();
void display();
int main()
{
    printf("How many nopdes you want to create: ");
    scanf("%d",&MAX);
    int ch;
    while(1)
    {
        printf("***MEnu***");
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter you choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default: printf("wrong input");

        }
    }
}
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("stack is overflow");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }

    else
    {
        printf("deleted element is %d: ",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is...");
        for(i=top;i>=0;--i)
        {
            printf("\n%d ",stack[i]);
        }
    }
}
