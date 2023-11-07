#include <bits/stdc++.h>
using namespace std;

int Queue[100];
int n=100;
int frnt=-1;
int rear=-1;

void isEmpty(){
    if(frnt==-1 && rear==-1){
        cout << "Queue is empty!" << endl;
    }
    else{
        cout << "Queue is not empty!" << endl;
    }
}

void isFull()
{
    if(rear==n-1){
        cout << "Queue is full!" << endl;
    }
    else{
        cout << "Queue is not full!" << endl;
    }
}

void Peek(){
    if(frnt==-1 && rear==-1){
        cout << "Queue is empty!" << endl;
    }
    else{
        cout << "Element at front is: " << Queue[frnt] << endl;
    }
}

void Enqueue(){
    if(rear==n-1){
        cout << "Overflow!" << endl;
    }
    else{
        if(frnt==-1){
            frnt=0;
        }
        cout << "Enter element for insertion: " << endl;
        int element;
        cin >> element;
        rear++;
        Queue[rear]=element;
    }
}

void Dequeue(){
    if(frnt==-1 && rear==-1){
        cout << "Underflow!" << endl;
    }
    else if(frnt==rear){
        frnt=rear=-1;
    }
    else{
        cout << "Deleted element from queue is: " << Queue[frnt] << endl;
        frnt++;
    }
}

void Display(){
    if(frnt==-1){
        cout << "Queue is empty!" << endl;
    }
    else{
        cout << "Queue elements are: " << endl;
        for(int i=frnt; i<=rear; i++){
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Display element at front without deletion" << endl;
    cout << "5) Display if the queue is full or not" << endl;
    cout << "6) Display if the queue is empty or not" << endl;
    cout << "7) Quit" << endl;

    int choice;

    do{
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch(choice){
            case 1: Enqueue();
            break;
            case 2: Dequeue();
            break;
            case 3: Display();
            break;
            case 4: Peek();
            break;
            case 5: isFull();
            break;
            case 6: isEmpty();
            break;
            case 7: exit(1);
            default: cout << "Invalid Choice" << endl;
        }
    }while(choice!=7);
    return 0;
}
