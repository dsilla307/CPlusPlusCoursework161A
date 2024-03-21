#include <iostream>
#include <iomanip>
using namespace std;
/*
   + Your program should execute the following loop
     + Ask the player to choose whether they throw rock, paper, or scissors. Your program must allow for any possible capitalization of these words. If the player enters invalid input, ask again for valid input. 
     + Have the computer opponent randomly choose to throw rock, paper, or scissors in response.
     + Calculate who wins and print this out in a form like "You chose ____ and your opponent chose ____: you win/lose". You can get creative with this part if you want, as long as you make it clear what choices the player and the computer made and who beat who.
     + Ask the player if they want to play again, and if they say "N", "n", "no", or "No" then quit
   + When the game is done print out a table of statistics about the games that were played including
     + How many games were won by the player and by the computer
     + What percentage of throws for the player that were rock/paper/scissors
     + What percentage of throws for the computer that were rock/paper/scissors
     + Use setw, setprecision, and other table making methods to nicely format this information
*/
void divider1(){
  cout << setfill('-');
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << endl;
}

 void printRow1(int wins, int losses, int draws, double perWin, double perLoss, double perDraw){
  cout << setfill (' ');
  cout << right;
  cout << fixed << setprecision(2);

  cout << "|" << setw(10) << wins;
  cout << "|" << setw(10) << losses;
  cout << "|" << setw(10) << draws;
  cout << "|" << setw(10) << perWin;
  cout << "|" << setw(10) << perLoss;
  cout << "|" << setw(10) << perDraw;
  cout << "|" << endl;

}

void divider2(){
  cout << setfill('-');
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "";
  cout << "|" << endl;
}

 void printRow2(string blank, double perRock, double perPaper, double perScissors){
  cout << setfill (' ');
  cout << right;
  cout << fixed << setprecision(2);

  cout << "|" << setw(10) << blank;
  cout << "|" << setw(10) << perRock;
  cout << "|" << setw(10) << perPaper;
  cout << "|" << setw(10) << perScissors;

  cout << "|" << endl;

 }

int main(){
  string playAgain;
  string moveChoice;
  
  double winCount = 0;
  double lossCount = 0;
  double drawCount = 0;
  double totalCount = 0;
  
  int oppRockCount = 0;
  int playerRockCount = 0;
  int oppPaperCount = 0;
  int playerPaperCount = 0;
  int oppScissorsCount = 0;
  int playerScissorsCount = 0;


  
  srand(time(0));
  
  cout << "Welcome to Rock Paper Scissors!" << endl;

  //While loop
  while(playAgain != "no" && playAgain != "No" && playAgain != "N" && playAgain != "n"){
    //Number 1-3 generates each round
    int compMove = (rand() % 3) + 1;
    cout << "Choose Rock, Paper, or Scissors" << endl;
    cin >> moveChoice;

    //Entry Error
    while(moveChoice != "Rock" && moveChoice != "rock" && moveChoice != "Paper" 
      && moveChoice != "paper" && moveChoice != "Scissors" && moveChoice != "scissors"){
      cout << "I didn't get that, please enter Rock, Paper, or Scissors" << endl;
      cin >> moveChoice;
    }

    //If Computer chooses Rock
    if(compMove == 1){
      oppRockCount++;
      if(moveChoice == "Rock"|| moveChoice == "rock"){
        playerRockCount++;
        drawCount++;
        cout << "You both chose Rock, it's a draw." << endl;
      }
      else if(moveChoice == "Paper"|| moveChoice == "paper"){
        playerPaperCount++;
        winCount++;
          cout << "You chose Paper, and your opponent chose Rock. You win!" << endl;
      }
      else if(moveChoice == "Scissors"|| moveChoice == "scissors"){
        playerScissorsCount++;
        lossCount++;
        cout << "You chose Scissors, and your opponent chose Rock. You lose." << endl;
      }
    }
      
    //If Computer chooses Paper
    else if(compMove == 2){
      oppPaperCount++;
      if(moveChoice == "Rock"|| moveChoice == "rock"){
        playerRockCount++;
        lossCount++;
        cout << "You chose Rock and your opponent chose Paper. You lose." << endl;
      }
      else if(moveChoice == "Paper"|| moveChoice == "paper"){
        playerPaperCount++;
        drawCount++;
        cout << "You both chose Paper, it's a draw" << endl;
      }
      else if(moveChoice == "Scissors"|| moveChoice == "scissors"){
        playerScissorsCount++;
        winCount++;
        cout << "You chose Scissors, and your opponent chose Paper. You win!" << endl;
      }
    }

    //If Computer chooses Scissors
    else if(compMove == 3){
      oppScissorsCount++;
      if(moveChoice == "Rock"|| moveChoice == "rock"){
        playerRockCount++;
        winCount++;
        cout << "You chose Rock and your opponent chose Scissors. You win!" << endl;
      }
      else if(moveChoice == "Paper"|| moveChoice == "paper"){
        playerPaperCount++;
        lossCount++;
        cout << "You chose Paper and your opponent chose Scissors. You lose" << endl;
      }
      else if(moveChoice == "Scissors"|| moveChoice == "scissors"){
        playerScissorsCount++;
        drawCount++;
        cout << "You both chose Scissors, it's a draw" << endl;
      }
    }
    
    cout << "Would you like to play again?" << endl;
    cin >> playAgain;
  }

  totalCount = winCount + lossCount + drawCount;
  
  cout << "" << endl;
    
  //Wind/loss/Draw Table
  cout << "Win/Loss/Draw Statistics" << endl;
  divider1();
  
  cout << setfill(' ');
  cout << left;
  cout << "|" << setw(10) << "Wins";
  cout << "|" << setw(10) << "Losses";
  cout << "|" << setw(10) << "Draws";
  cout << "|" << setw(10) << "% Win";
  cout << "|" << setw(10) << "% Loss";
  cout << "|" << setw(10) << "% Draw" << "|" << endl;

  divider1();

  printRow1(winCount, lossCount, drawCount, winCount / totalCount * 100, lossCount / totalCount * 100, drawCount / totalCount * 100);

  divider1();

  cout << "" << endl;

  //rock paper scissors count table
  cout << "Rock/Paper/Scissors Percent Count Table" << endl;
  divider2();
  
  cout << setfill(' ');
  cout << left;
  cout << "|" << setw(10) << "";
  cout << "|" << setw(10) << "% Rock";
  cout << "|" << setw(10) << "% Paper";
  cout << "|" << setw(10) << "% Scissors" << "|" << endl;
 
  divider2();

  printRow2("Player", playerRockCount/totalCount*100, playerPaperCount/totalCount*100, playerScissorsCount/totalCount*100);

  divider2();

  printRow2("Computer", oppRockCount/totalCount*100,oppPaperCount/totalCount*100,oppScissorsCount/totalCount*100);

  divider2();
  
  
  return 0;
}


// Testing
/*

Test 1
Welcome to Rock Paper Scissors!
Choose Rock, Paper, or Scissors
Rock
You chose Rock and your opponent chose Scissors. You win!
Would you like to play again?
y
Choose Rock, Paper, or Scissors
rock
You chose Rock and your opponent chose Paper. You lose.
Would you like to play again?
yes
Choose Rock, Paper, or Scissors
Paper
You chose Paper, and your opponent chose Rock. You win!
Would you like to play again?
YES
Choose Rock, Paper, or Scissors
paper
You chose Paper and your opponent chose Scissors. You lose
Would you like to play again?
y
Choose Rock, Paper, or Scissors
afdas
I didn't get that, please enter Rock, Paper, or Scissors
Scissors
You both chose Scissors, it's a draw
Would you like to play again?
y
Choose Rock, Paper, or Scissors
scissors
You chose Scissors, and your opponent chose Rock. You lose.
Would you like to play again?
no

Win/Loss/Draw Statistics
|----------|----------|----------|----------|----------|----------|
|Wins      |Losses    |Draws     |% Win     |% Loss    |% Draw    |
|----------|----------|----------|----------|----------|----------|
|         2|         3|         1|     33.33|     50.00|     16.67|
|----------|----------|----------|----------|----------|----------|

Rock/Paper/Scissors Percent Count Table
|----------|----------|----------|----------|
|          |% Rock    |% Paper   |% Scissors|
|----------|----------|----------|----------|
|    Player|     33.33|     33.33|     33.33|
|----------|----------|----------|----------|
|  Computer|     33.33|     16.67|     50.00|
|----------|----------|----------|----------|


Test 2
Welcome to Rock Paper Scissors!
Choose Rock, Paper, or Scissors
Paper
You chose Paper and your opponent chose Scissors. You lose
Would you like to play again?
y
Choose Rock, Paper, or Scissors
rock
You both chose Rock, it's a draw.
Would you like to play again?
No

Win/Loss/Draw Statistics
|----------|----------|----------|----------|----------|----------|
|Wins      |Losses    |Draws     |% Win     |% Loss    |% Draw    |
|----------|----------|----------|----------|----------|----------|
|         0|         1|         1|      0.00|     50.00|     50.00|
|----------|----------|----------|----------|----------|----------|

Rock/Paper/Scissors Percent Count Table
|----------|----------|----------|----------|
|          |% Rock    |% Paper   |% Scissors|
|----------|----------|----------|----------|
|    Player|     50.00|     50.00|      0.00|
|----------|----------|----------|----------|
|  Computer|     50.00|      0.00|     50.00|
|----------|----------|----------|----------|

Test 3
Welcome to Rock Paper Scissors!
Choose Rock, Paper, or Scissors
Paper
You both chose Paper, it's a draw
Would you like to play again?
yes
Choose Rock, Paper, or Scissors
paper
You both chose Paper, it's a draw
Would you like to play again?
yes
Choose Rock, Paper, or Scissors
Paper
You chose Paper, and your opponent chose Rock. You win!
Would you like to play again?
yes
Choose Rock, Paper, or Scissors
Paper
You both chose Paper, it's a draw
Would you like to play again?
no

Win/Loss/Draw Statistics
|----------|----------|----------|----------|----------|----------|
|Wins      |Losses    |Draws     |% Win     |% Loss    |% Draw    |
|----------|----------|----------|----------|----------|----------|
|         1|         0|         3|     25.00|      0.00|     75.00|
|----------|----------|----------|----------|----------|----------|

Rock/Paper/Scissors Percent Count Table
|----------|----------|----------|----------|
|          |% Rock    |% Paper   |% Scissors|
|----------|----------|----------|----------|
|    Player|      0.00|    100.00|      0.00|
|----------|----------|----------|----------|
|  Computer|     25.00|     75.00|      0.00|
|----------|----------|----------|----------|
*/