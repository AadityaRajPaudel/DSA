#include<iostream>
#include<ctype.h>
using namespace std; 

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    cout<<"Enter the expression : ";
    cin>>exp ;
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e)) // if character is number it is displayed
            cout<<(*e) ;
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                cout<<x ;
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                cout<<pop() ;
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        cout<<pop() ;
    }return 0;
}

