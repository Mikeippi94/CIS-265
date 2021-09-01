//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#10
//Due by 04/13/2019

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
const int SIZE = 50; 
struct MovieInfo
{ 
	
	string movieTitle; 
	string movieDirector;  
	int yearReleased;    
	int runningTime; 
};
 
void insertData(MovieInfo *object,string title, string director, int year, int running);
void printData(MovieInfo *object);


int main()
{ 
	MovieInfo first,second;
	
	
	insertData(&first,"Predator", "John McTiernam", 1987, 107);	
	insertData(&second,"Terminator 2: Judgement Day", "James Cameron", 1991, 137); 	
	
	
	
	cout << "Here is the data for the first movie " << endl; 
	printData(&first);
	
	cout<<endl<<endl;
	cout << "Here is the data for the second movie " << endl; 	
	printData(&second);
	cout<<endl<<endl;
		
	return 0;
}
void insertData(MovieInfo *object,string title, string director, int year, int running)
{
	
	object->movieTitle=title;
	object->movieDirector=director;
	object->yearReleased=year;
	((*object).runningTime)=running;
	
}
void printData(MovieInfo *object)
{
	cout << "Movie Tittle: " << object->movieTitle << endl;	
	cout << "Director of the movie: " << object->movieDirector << endl;	
	cout << "The year the movie was released: " << object->yearReleased <<endl;	
	cout << "The running time of the movie in minutes: " << object->runningTime << endl; 
 
}
