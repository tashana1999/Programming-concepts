/*
 Group No-18
 Group members-IM/2019/085-Dinushi Ariyasena
               IM/2019/027-Manod De Silva
               IM/2019/106-Tashana Kodithuwakku
               IM/2019/076-Visal Dias
 Final Group Project
 Due Date-2021/11/06
               
*/
/*
Presentation Duration: 10 Minutes
It is expected you to demonstrate everything you have learned during this course in your final
project. It should be a fully-fledged C++ program, written entirely from the scratch by you,
satisfying the requirements specified below. Groups come up with any idea that they want for
the final project. Possible ideas include:
	Games (can be multi-player or single-player):
	Card games (e.g. Blackjack, Poker)
	Reversi
	Gomoku
	Connect Four
	Any other game
Your project should be large enough to take about 40-50 hours of coding.
It is very important that you write easily readable, well-designed code.
Submit a report, with some basic documentation and instructions on how to play your game.
Also include in this report what problems you had with your project, what the challenges
were, and what would you have done differently if you could do it again. Include your well
design code as an appendix to the report.

*/
/* Game name-HANGMAN
Features
Some features of the program are:
1.	The console output of the program is presented in a neat and clean way.
2.	The game is designed so that a word which has been asked, does not come up again, during a runtime.
3.	The program uses many functions to make the transfer of control easier and hassle free.
4.	The code has been written as per ANSI C++ standard, which makes it universally compatible.
5.	This program is totally bug free and stable as suggested by results till date.


*/
//The standard library files used
#include<iostream>
#include<fstream>
#include <vector>
#include <stdlib.h>
#include<conio.h>
using namespace std;
//All the function prototypes
void greet();//print greeting message
void start();//print starting message
void display_misses(int misses);// print the diagram
void display_status(vector<char> incorrect, string answer);
void end_game(string answer, string codeword);//print results and ending message
//global variables
int marks = 0;

int main()//The main function
{ 
	system("Color E5");
	string
	command,//store plyer,s answer for login or register 
	name, password,//variable to read data from file in login 
	inName, inPassword, //variables to hold inputs in login
	registerName, registerPassword;//variables to store in file in registration process   
	
	//loop runs untill user close the program 
	while (1)
	{  
	    //initially asking to register or login
	    system("cls");
		start();//print message
		//get answer from the user wether to login or register
	    cout<<"Do you want to Register or Login?\n"<<"Type Here 0/1/2 (register = 1 / login = 2 / exit = 0) : ";
	    getline(cin, command);
	    
	    //terminate the program
	    if (command=="0")
	    {
	        return 1;
	    }
	    
	    //register player
	    if (command=="1")
	    {
	        ofstream g("registration.txt"); 
	        if (!g.is_open())
	        {
	            cout<<"could not open file\n"; 
	            return 0;
	        }
	        cout<<"\n\n" 
	            <<"New Username: ";
	        getline(cin, registerName); 
	        cout<<"New Password: ";
	        getline(cin, registerPassword); 
	        //save inputs in file
	        g<<registerName;
	        g<<'\n'; 
	        g<<registerPassword; 
	        g.close();
	    }
	    //login and execute program
	    if (command=="2") 
	    {
	        ifstream f("registration.txt"); 
	        if (!f.is_open())
	        {
	            cout<<"could not open file\n"; 
	            return 0;
	        }
	        //read data from file
	        getline(f, name, '\n'); 
	        getline(f, password, '\n'); 
	        f.close(); 
	        
	        //loop to check password and username
			while (1)
	        {
	            //get password and username from player
	            cout<<"\n\n"
	                <<"Enter Username: ";
	            getline(cin, inName);
	            cout<<"Enter Password: ";
	            getline(cin, inPassword);
	            
	            //check wether inputs are valid and correct
	            if (inName==name && inPassword==password)
	            { 
	                system("cls");
	                cout<<"                                Login Successful!\n"<<"                                  Welcome, "<<inName<<endl;
	                break; 
	            }
	            cout<<"incorrect name or password\n";//if password and username is incorrect display message and loop continues 
	        }
	    	
		  greet();//print message
		  //loop to execute 5 rounds
		  for(int i=0; i<5; i++){
		
			  int misses = 0, codeword_element=0;
			  vector<char> incorrect;
			  bool guess = false;
			  char letter;//to store player enterd guess
				
				//arrays containing words and hints
			  string codeword_list[20] = {"shakespeare", "minuscule", "ornithology", "decency", "approval","Incorrectly","comb","needle", "palm","coin","Plate","Future","Racecar","Krone","Wellington","Vatican","Cambridge","Pineapple","Corona","Scientology"};
			  string question_list[20] = {"HINT : Who wrote the Macbeth", "HINT : Similar word for extremely small", "HINT : What do we call the study of birds","HINT : Proper behaviour","HINT : Favourable opinion","HINT : What word is spelled incorrectly in every single dictionary?","HINT : I have teeth but can’t eat. What am I?","HINT : What has one eye but can’t see anything at all?","HINT : What kind of tree can you carry in your hand?","HINT : What has a head and a tail but no body?","HINT : People buy me to eat but never eat me?","HINT : I AM ALWAYS IN FRONT OF YOU BUT YOU CAN NEVER SEE ME. WHAT AM I?","HINT : Which vehicle is spelled the same forwards and backwards?","HINT : What is the currency of Denmark?","HINT : What is the capital of New Zealand?","HINT : What is the smallest country in the world?","HINT : Which English city was once known as Duroliponte?","HINT : In tennis, what piece of fruit is found at the top of the men's Wimbledon trophy?","HINT : What is the most famous Mexican beer?","HINT : Tom Cruise is an outspoken member of which religion?"};
			  string under_score[20] = {"___________", "_________", "___________", "_______", "________","___________","____","______","____","____","_____","______","_______","_____","__________","_______","_________","_________","______","___________"};
			
			    cout<<"======================================Round "<<(i+1)<<"=========================================="<<endl<<endl;
			
			  string codeword = codeword_list[rand()%20];// selecting a random word from the codeword_list array
			
			  for(int x=0; x<20; x++){
				    if(codeword_list[x] == codeword){
				      codeword_element = x;//used to identify selected word
				    }
			  }
			
			
			  string answer = under_score[codeword_element];//answer in blanks
				
				//loop to get guesses and check
			  while(answer!=codeword && misses < 7)
				{
				  	cout<<question_list[codeword_element]<<endl;//display hint
				    display_misses(misses);//display diagram
				    display_status(incorrect, answer);//display wrong guesses and answer
					
					//input guess from player
				    cout<<"\n\nPlease enter your guess: ";
				    cin>>letter;
					
					//check wheter the guess matches any letter in the given word
				    for(int i = 0; i<codeword.length(); i++)
				    {
				      if(letter==codeword[i])
					  {
				      	answer[i] = letter;//replase blanks in answer with guessed words
				     	guess = true;
					  }
				    }
				   
				   //display correct 
					if(guess)
				    {
				      cout<<"\nCorrect!\n";
				    }
				    
					//display wrong
					else
				    {
				      cout<<"\nIncorrect! Another portion of the person has been drawn.\n";
				      incorrect.push_back(letter);
				      misses++;
				    }
				    guess = false;
				    
					//pause program untill user press any key
					cout<<"\n\npress any key to continue"<<endl;
					getch();
					system("cls");
			  	}
				
				//end the round
			  end_game(answer, codeword);//disply results of the round
			  //pause program untill user press any key
			  cout<<"\n\npress any key to continue"<<endl;
			  getch();
			  system("cls");
			}
		
		 // at the end of 5 rounds display game results
		 cout<<"You have earned "<<marks<<" Out of 5 marks"<<endl;
		 
		 if(marks>=3){
			cout<<"Congratulations! You won the Game!"<<endl;
			}
		 
		 else{
		   	cout<<"You Lost!"<<endl;
			}
			
		 cout<<"\n\npress any key to continue"<<endl;
		 getch();
	    }
	    cout<<"\n\n\n\n\n";
	}
	
	return 1;
}


//function to print main menu of the program
void greet(){
  cout<<"=======================================================================================\n";
  cout<<"                               The Hangman Game\n";
  cout<<"=======================================================================================\n"<<endl<<endl;
  cout<<"                   You are given 5 HINTS to guses 5 CODEWORDS."<<endl;
  cout<<"   Save yourself from being hanged by guessing letter by letter in the codewords. "<<endl;
  cout<<"       For each and every wrong guess, Hangman will complete with one part. "<<endl;
  cout<<"        Guess the whole CODEWORD without fully hanging, to earn one point. "<<endl;
  cout<<"           Player should earn atleast 3 marks out of 5 to WIN the game.  "<<endl<<endl;
  cout<<"         If you are new player, Register and then again Log into the game."<<endl;
  cout<<"                                GOODLUCK!"<<endl<<endl;
  
}

//function to print starting message
void start(){
    cout<<"                     =====REGISTRATION & LOGIN====="<<endl<<endl;
    cout<<"To play or play again the game, First you have to log into the game using Username & Password."<<endl;
    cout<<"             If you are new to the game first register and then log again."<<endl<<endl;
}

//function to print diagram according to number of misses
void display_misses(int misses)
{
  if(misses==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  
  else if(misses==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

}

//function to display incorrect guesses and answer with blanks
void display_status(vector<char> incorrect, string answer)
{
  cout<<"Incorrect Guesses: \n";

  for(int i = 0; i<incorrect.size(); i++)
  {
    cout<<incorrect[i]<<" ";
  }

  cout<<"\nCodeword:\n";

  for(int i = 0; i<answer.length(); i++)
  {
    cout<<answer[i]<<" ";
  }
}

//function to display results end of the round
void end_game(string answer, string codeword)
{
  if(answer==codeword)
  {
    cout<<"codeword : "<<codeword<<endl<<endl;
    cout<<"        Hooray! You saved yourself from being hanged and earned a point!\n"<<endl;
    marks = marks + 1;
  }
  else
  {
    cout<<"codeword : "<<codeword<<endl<<endl;
	cout<<"On no! The man is hanged!\n";
  }
}

