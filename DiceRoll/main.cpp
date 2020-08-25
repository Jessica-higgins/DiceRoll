#include <iostream>
#include<cstdlib>
using namespace std;


int main() {
srand(1701); //seed
int sides;
char letter;
int numDice;

// user input
cout << "Choose 1, 2, or 3 dice (6-, 10-, 12-, or 20-sided)" << endl;
cout << "Enter designation (e.g. \'2d6\'): ";
cin >> numDice >> letter >> sides;

if(letter=='d' && (1 <= numDice && numDice <= 3)
    &&(sides == 6 || sides == 10 || sides == 12 || sides == 20)){

   int diceOne;
   int diceTwo;
   int diceThree;

   switch(numDice){
       case 1:
           diceOne = rand()%sides +1 ;
           cout << numDice << "d" << sides << " result: " << diceOne << endl;
           diceOne = rand()%sides +1 ;
           cout << numDice << "d" << sides << " result: " << diceOne << endl;
           diceOne = rand()%sides +1 ;
           cout << numDice << "d" << sides << " result: " << diceOne << endl;
           break;

       case 2:
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " = " << diceOne + diceTwo << endl;
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " = " << diceOne + diceTwo << endl;
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " = " << diceOne + diceTwo << endl;
           break;

       case 3:
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           diceThree = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " + " << diceThree << " = " << diceOne + diceTwo + diceThree << endl;
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           diceThree = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " + " << diceThree << " = " << diceOne + diceTwo + diceThree << endl;
           diceOne = rand()%sides +1;
           diceTwo = rand()%sides +1;
           diceThree = rand()%sides +1;
           cout << numDice << "d" << sides << " result: " << diceOne << " + " << diceTwo << " + " << diceThree << " = " << diceOne + diceTwo + diceThree << endl;
           break;

   }


}
       else{
         cout<<"Not a valid designation"<<endl;
}


return 0;
}

