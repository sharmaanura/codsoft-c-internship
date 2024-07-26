#include<iostream>
using namespace std;

int arr[9];
int X[5];
int O[4];
int type=1;

void check(int n){
	int t=0;
	for(int i=0;i<9;i++)
		if(n==arr[i])
		{
			t=1;
			break;	
		}
	if(t!=1){
		cout<<" ";
		return;
	}
	
	for(int i=0;i<5;i++)
		if(n==X[i])
			cout<<"X";
		
	for(int i=0;i<4;i++)
		if(n==O[i])
			cout<<"O";	
}

void display(){

	cout<<"       |       |       "<<endl;
	cout<<"   ";
	check(11);
	cout<<"   |   ";
	check(12);
	cout<<"   |   ";
	check(13);
	cout<<"   "<<endl;
	cout<<"       |       |       "<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"       |       |       "<<endl;
	cout<<"   ";
	check(21);
	cout<<"   |   ";
	check(22);
	cout<<"   |   ";
	check(23);
	cout<<"   "<<endl;
	cout<<"       |       |       "<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"       |       |       "<<endl;
	cout<<"   ";
	check(31);
	cout<<"   |   ";
	check(32);
	cout<<"   |   ";
	check(33);
	cout<<"   "<<endl;
	cout<<"       |       |       "<<endl<<endl;
	
} 

void play(){
	
	display();
	
}




int main()
{
	cout<<"Welcome to the Tic-Tac-Toe Game :-"<<endl<<endl;
    
	cout<<" 11 | 12 | 13 \n-------------\n 21 | 22 | 23 \n-------------\n 31 | 32 | 33 "<<endl<<endl<<endl;
	cout<<"To occupy any space on your chance please enter a number \ngiven at that place like for place 2X2 enter 22"<<endl<<endl<<endl;
	play();
}
