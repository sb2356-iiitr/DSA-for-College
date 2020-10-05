#include <stdio.h>
#define MAX 10

int stack[MAX], top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("\nSTACK OVERFLOWING\n");
    }
    else
    {
        top++;
        stack[top] = val;
    }   
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOWING\n");
    }
    else
    {
        printf("%d removed.", stack[top]);
        top--;
    }
}

int size()
{
    return (top+1);
}

void display()
{
    if (top == -1)
    {
        printf("Stack empty.");
        return;
    }
    
    printf("\nStack contents: \n");
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{
    int n, choice;
    while (choice != 5)
    {
        printf("\n**********MENU**********");
        printf("\n1. Push");
        printf("\n2. Pop");   
        printf("\n3. Size");   
        printf("\n4. Display");   
        printf("\n5. Exit");   
        printf("\nEnter your choice: ");   
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: printf("Enter element to be pushed: ");
                    scanf("%d", &n);
                    push(n);
                    break;

            case 2: pop();
                    break;
            
            case 3: printf("Size of stack:%d\n", size(n));
                    break;

            case 4: display();
                    break;

            default:
                break;
        }
    }
}

