#include<iostream>
#define MAX_STACK_SIZE 15

/*
    Implementation of integer-storing Stacks
    data structure using C++ Arrays
*/
class Stack {

    private:
    int stackArray[MAX_STACK_SIZE];
    int LIMIT;

    public:
    Stack() {
        LIMIT=-1;
    };

    void push(int);
    int pop();
    void print();
    int peek();
    int size();
    bool isEmpty();
    int capacity();

};

    void Stack::push(int x) {
        stackArray[++LIMIT] = x;
    }

        int Stack::pop() {
        return stackArray[LIMIT--];
    }

    void Stack::print() {
        std::cout<<"\n\nPrint stack:\n";
        for(int i=LIMIT; i>=0; i--) { 
            std::cout<<stackArray[i]<<'\t';
        }
        std::cout<<'\n';
    }

    int Stack::peek() {
        return LIMIT == -1 ? INT_MIN : stackArray[LIMIT];
    }

    bool Stack::isEmpty() {
        return LIMIT==-1 && LIMIT>=-1;
    }

    int Stack::size() {
        return LIMIT+1;
    }

    int Stack::capacity() {
        return MAX_STACK_SIZE;
    }

int main() {
    Stack s = Stack();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.print();
    std::cout<<"\nTop element of the stack is --> ";
    s.peek()==INT_MIN ? std::cout<<"Unavailable\n" : std::cout<<s.peek();
    std::cout<<"\nSize of the stack is --> "<<s.size();
    std::cout<<"\nMax capacity of the stack is --> "<<s.capacity();
    std::cout<<"\nIs the stack empty? --> ";
    s.isEmpty() ? std::cout<<"YES" : std::cout<<"NO";
    std::cout<<"\nElement was popped --> "<<s.pop();
    std::cout<<"\nElement was popped --> "<<s.pop();
    std::cout<<"\nElement was popped --> "<<s.pop();
    s.print();
    std::cout<<"\nTop element of the stack is --> ";
    s.peek()==INT_MIN ? std::cout<<"Unavailable\n" : std::cout<<s.peek();
    std::cout<<"\nSize of the stack is --> "<<s.size();
    std::cout<<"\nMax capacity of the stack is --> "<<s.capacity();
    std::cout<<"\nIs the stack empty? --> ";
    s.isEmpty() ? std::cout<<"YES" : std::cout<<"NO";
    return 0;
}