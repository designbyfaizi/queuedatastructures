#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


int rear = -1;
int front = -1;
int queue[5];

void enque(int number){
	if(rear == -1 & front == -1){
		rear++;
		front++;
		queue[rear] = number;
	}
	else if(front == 0 & rear == 4){
		cout<<"QUEUE IS FULL. CAN'T INSERT NEW VALUE\n\n";
	}
	else{
		rear++;
		queue[rear] = number;
	}
}

void deque(){
	if(front > rear){
		front = -1;
		rear = -1;
	}
	else if(front == -1 & rear == -1){
		cout<<"QUEUE IS EMPTY. CAN'T DELETE ANY VALUE\n";
	}
	else{
		cout<<"THE NUMBER "<<queue[front]<<" WAS DEQUEUED FROM THE QUEUE\n\n";
		queue[front] = 0;
		front++;
	}
}

void display(){
	if(front == -1 & rear == -1){
		cout<<"QUEUE IS EMPTY. CAN'T DISPLAY\n";
	}
	else{
		cout<<"QUEUE:\n";
		for(int i = front; i<=rear; i++){
			cout<<queue[i]<<"\t";
		}
		cout<<"\n\n";
	}
}



int main(){
	int n;
	
	cout<<"WELCOME TO FAIZAN'S PROGRAM\n";
	while(true){
		cout<<"Chose 1 from the following: \n1. ENQUE\n2. DEQUE\n3. PRINT\n";
	cin>>n;
		switch(n){
			case 1:int num;
			cout<<"ENTER A NUMBER YOU WANT TO INSERT:\n";
			cin>>num;
			enque(num);
			break;
			case 2:deque();
			break;
			case 3:display();
			break;
		}
	}
	return 1;
}
