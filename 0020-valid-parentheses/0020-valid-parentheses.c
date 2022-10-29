
struct Stack{
    int top;
    int capacity;
    char* array;
};

struct Stack* createStack(int capacity) 
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity*sizeof(char));
    return stack;
}

int push(struct Stack* stack, char value)
{
    if (++(stack->top) >= stack->capacity)
        return 0;
    
    stack->array[stack->top] = value;
    return 1;
}

void pop(struct Stack* stack)
{
    --(stack->top);    
}

char top(struct Stack* stack)
{
    if (stack->top==-1)
        return 'x';
    return stack->array[stack->top];
}


bool isValid(char * s){
    
    struct Stack* stack = createStack(strlen(s));

    for (int i=0; i<strlen(s); i++) {
     
        if (s[i]=='(' || s[i]=='[' || s[i]=='{')
            push(stack, s[i]);
        else {
            if (top(stack)==s[i]-1 || top(stack)==s[i]-2)
                pop(stack);
            else
                return 0;
        }

    }
 // printf("%d",stack->top);
    if (stack->top==-1)
        return 1;
    
    return 0;
}


