/* 
pj92singh 
Prabhjit Singh 

Sequential card showing program 
-Counts the next batch of cards for position 
 the player is in the game "(next/cheat)"
-Must tell the program what position and 
 how many players are playing


i.e.
----------------------------------------------
5 players 
1st			2nd position 	3rd		4th		5th
A 			2 				3 		4 		5
6 			7 				8 		9 		10
J 			Q 				K 		A 		2
----------------------------------------------
3 players
1st position	2nd		3rd
A 				2 		3
4 				5 		6
7 				8 		9
10 				J 		Q
K 				A 		2 
----------------------------------------------


*/
#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

//ask for postion and players
void questions(int players, int postion){

	cout << "How many players?\n"; 
	cin >>players; 
	cout << "Your postion\n"; 
	cin >>postion; 
}
/*
void vector_out_put(hecto n){

	for (vector<string>::iterator it_1=n.begin(); it_1!=n.end(); it_1+=5)
    cout << ' ' << *it_1;
  cout << '\n';
}
*/
/*
void output_cards(hecto q, int players, int postion){
	int i; 
//show the cards the have to play next 
	cout << "**********\n *** Your cards ***\n"; 
	for(i = postion; i < 3; i+= i)
	{
		
		for (vector<string>::iterator it_1=q.begin(); it_1!=q.end(); it_1+=5)
   			 cout << ' ' << *it_1;
  		cout << '\n';
	}
	
} 
*/
int main(int argc, char const *argv[])
{
		int players, postion;  
		string cards[13] = {{'A'}, {'2'}, {'3'}, {'4'}, {'5'},
  {'6'}, {'7'}, {'8'}, {'9'}, {"10"},
  {'J'}, {'Q'}, {'K'} };

std::vector<string> q(cards, cards+13);

cout<< "\n The Orginal Vector\n"; 
for (vector<string>::iterator it_1=q.begin(); it_1!=q.end(); ++it_1)
    cout << ' ' << *it_1;
  cout << '\n';

//start asking questions  
 cout << "How many players?\n"; 
 cin >>players; 
 cout << "Your postion\n"; 
 cin >>postion; 
            			
     int i, knt = 1; 
     //std::iterator it_1; 
	

	if(players != postion ){
		//show the cards the have to play next 
		cout << "**********\n *** Your cards ***\n"; 
		for (vector<string>::iterator it_1=q.begin()+(postion-1); it_1!=q.end(); it_1+=(players))
   			 cout << ' ' << *it_1;
   			/*if(it_1 > q.end())
   			{
   				it_1 = q.begin(); 
   				knt++; 
   			}*/ 
   				
  		cout << '\n';

  	}
	  else{
	  		cout << "**********\n *** Your next cards are: ***\n"; 

		for (vector<string>::iterator it_1=q.begin()+(postion-1); it_1!=q.end(); it_1+=(postion))
   			 cout << ' ' << *it_1;
  		cout << '\n';
		
		}



	return 0;
}