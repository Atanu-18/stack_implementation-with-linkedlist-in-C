#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;  // Use 'next' instead of 'link'
};

struct Node* top = 0;  // Stack is initially empty

void push(int value) {
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;  // Add new node at the top
    top = newNode;
}

void display() {
    struct Node* temp;
    temp = top;
    if (top == 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        while (temp != 0) {
            printf("%d ", temp->data);
            temp = temp->next;  // Use 'next' consistently
        }
        printf("\n");
    }
}

void pop() {
    struct Node* temp;
    temp = top;
    if (top == 0) {
        printf("Underflow condition\n");
    } else {
        printf("Popped element: %d\n", top->data);  // Add newline for clarity
        top = top->next;
        free(temp);
    }
}

void peek() {
    if (top == 0) {
        printf("Stack is empty.\n");
    } else {
        printf("The top element is %d\n", top->data);  // Add newline for clarity
    }
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}















// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 1
// Enter value to push: 10
// 10 pushed to stack

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 1
// Enter value to push: 20
// 20 pushed to stack

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 4
// Stack elements: 20 10 

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 3
// The top element is 20

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 2
// Popped element: 20

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 4
// Stack elements: 10 

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 2
// Popped element: 10

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 2
// Underflow condition

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 5
