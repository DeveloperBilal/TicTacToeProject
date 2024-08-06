#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;   
char token = 'x' ;
bool tie = false; 
string n1 = " " ;
string n2 = " " ;
string player = " " ;
string computer = " " ;

void boardfunction(){
    

    cout<<"   |    |    "<<endl;
    cout<<" "<<board[0][0]<<" | " <<board[0][1]<<"  |  " <<board[0][2]<<" "<<endl;
    cout<<"___|____|____"<<endl;
    cout<<"   |    |    "<<endl;
    cout<<" "<<board[1][0]<<" | " <<board[1][1]<<"  |  " <<board[1][2]<<" "<<endl;
    cout<<"___|____|____"<<endl;
    cout<<"   |    |    "<<endl;
    cout<<" "<<board[2][0]<<" | " <<board[2][1]<<"  |  " <<board[2][2]<<" "<<endl;
    cout<<"   |    |    "<<endl;
    
}

void Humanmode(){
	
	int digit;
    
    if(token == 'x')
    {
    	cout<<"*******************************"<<endl;
    	cout<<n1<<" Please enter : ";
    	cin>>digit;
    	cout<<"*******************************"<<endl;
	}
	if(token == '0')
    {
    	cout<<"*******************************"<<endl;
    	cout<<n2<<" Please enter : ";
    	cin>>digit;
    	cout<<"*******************************"<<endl;
	}
	
	if(digit == 1)
	{
		row=0;
		column=0;
	}
		if(digit == 2)
	{
		row=0;
		column=1;
	}
		if(digit == 3)
	{
		row=0;
		column=2;
	}
		if(digit == 4)
	{
		row=1;
		column=0;
	}
		if(digit == 5)
	{
		row=1;
		column=1;
	}
		if(digit == 6)
	{ 
		row=1;
		column=2;
	}
		if(digit == 7)
	{
		row=2;
		column=0;
	}
		if(digit == 8)
	{
		row=2;
		column=1;
	}
	if(digit == 9)
	{
		row=2;
		column=2;
	}
	
	else if(digit<1 || digit>9) {
		cout<<" Invalid !!! "<<endl;
	}
	
	if(token == 'x' && board[row][column] != 'x' && board[row][column] != '0')
{
		
	board[row][column] = 'x';
	token = '0';
}
   else if(token == '0' && board[row][column] != 'x' && board[row][column] != '0'){
   	
   	board[row][column] = '0';
	token = 'x';
   
   }
   
   else{
   	cout<<"There is no empty space !!! "<<endl;
   	Humanmode();
  
   }

boardfunction();

}

void Computermode(){
	
	int digit;
	int compNum[9] = {1, 2, 3,4, 5, 6, 7, 8, 9};
	
	
    
    if(token == 'x')
    {
    	cout<<"*******************************"<<endl;
    	cout<<player<<" : Please enter :  ";
    	cin>>digit;
    	cout<<"*******************************"<<endl;
    	
    	
	}
	if(token == '0')
    {
        digit = compNum[rand() % 9];
        cout<<"*******************************"<<endl;
    	cout<<" Computer Move : "<<digit<<endl;
    	cout<<"*******************************"<<endl;
	}
	compNum[digit-1]=0;
	
	if(digit == 1)
	{
		row=0;
		column=0;
	}
		if(digit == 2)
	{
		row=0;
		column=1;
	}
		if(digit == 3)
	{
		row=0;
		column=2;
	}
		if(digit == 4)
	{
		row=1;
		column=0;
	}
		if(digit == 5)
	{
		row=1;
		column=1;
	}
		if(digit == 6)
	{ 
		row=1;
		column=2;
	}
		if(digit == 7)
	{
		row=2;
		column=0;
	}
		if(digit == 8)
	{
		row=2;
		column=1;
	}
	if(digit == 9)
	{
		row=2;
		column=2;
	}
	
	else if(digit<1 || digit>9) {
		cout<<" Invalid !!! "<<endl;
	}
	
	if(token == 'x' && board[row][column] != 'x' && board[row][column] != '0')
{
		
	board[row][column] = 'x';
	token = '0';
}
   else if(token == '0' && board[row][column] != 'x' && board[row][column] != '0'){
   	board[row][column] = '0';
	token = 'x';
   }
   else{
   	cout<<" There is no empty space !!! "<<endl;
   	Computermode();
   }
boardfunction();
}

	bool condition()
{
	for(int i=0; i<3; i++)
	{
		if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]){
		
		return true;
	}
	
	if( board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return true;
	}
	

    for(int j=0; j<3; j++){
    	if(board[i][j] != 'x' && board[i][j] != '0')
    	{
    		return false;
		}
	}
}
    tie = true;
    return false;
}

int main(){
	system("color 1f");
	int option;
	int choice;

	cout<<" ---------------- WELCOME TO THE GAME ----------------"<<endl;
	cout<<"                                                      "<<endl;
	cout<<" ----------- THIS IS CLASSIC TIC TAC TOE GAME -----------"<<endl;
	cout<<"                                                         "<<endl;
	
	cout<<" --------------------------------------------------------"<<endl;
	cout<<" Press 1 for user vs. user game "<<endl;
	cout<<" Press 2 for user vs. computer game "<<endl;
	cout<<" Enter your option :  ";
	cin>>option;
	cout<<" -------------------------------------------------------"<<endl;
	
	if(option == 1){
	cout<<"************************************"<<endl;
	cout<<" You choose Human vs. Human Mode "<<endl;
	cout<<"************************************"<<endl;
		
	cout<<"Enter the name of the first player : ";
    cin>>n1;
    cout<<"Enter the name of second player : ";
    cin>>n2;
    cout<<"******************************************************"<<endl;
    cout<<n1<< " : is player1 so he/she will play first"<<endl;
    cout<<n2<< " : is player2 so he/she will play second"<<endl;
    cout<<"******************************************************"<<endl;
    Humanmode();
    
    	while(!condition())
	{
		
		Humanmode();
		condition();
}
	if(token == 'x' && tie == false)
	{
		cout<<"_______________________"<<endl;
		cout<<n2<<" : WINS !!! "<<endl;
		cout<<"_______________________"<<endl;
	}
	else if(token == '0' && tie == false)
	{
		cout<<"_______________________"<<endl;
		cout<<n1<<" : WINS !!! "<<endl;
		cout<<"_______________________"<<endl;
	}
	else if (tie == true ){
		cout<<"it's a draw !!! ";
	}


}
    else if(option == 2){
    	cout<<"************************************"<<endl;
    	cout<<" You choose Human vs. Computer Mode "<<endl;
    	cout<<"************************************"<<endl;
    	cout<<" Please Enter your name : ";
    	cin>>player;
    	cout<<"*******************************************"<<endl;
        Computermode();
	
	
	while(!condition())
	{
		
		Computermode();
		condition();
}
	if(token == 'x' && tie == false)
	{
		cout<<"_______________________________________________"<<endl;
		cout<<computer<<"Computer is the winner of this game"<<endl;
		cout<<"_______________________________________________"<<endl;
	}
	else if(token == '0' && tie == false)
	{
		cout<<"____________________________"<<endl;
		cout<<player<<" : You won this game"<<endl;
		cout<<"____________________________"<<endl;
	}
	else if(tie == true ){
		cout<<"it's a draw !!! "<<endl;
	}



}
	
    cout<<"***********************************************"<<endl;
    cout<<"This is end of game "<<endl;
    cout<<"if you want to restart the game then press 1 "<<endl;
    cout<<"if you want to exit the game then press 2 "<<endl;
    cout<<"Enter your option : ";
    cin>>choice;
	cout<<"***********************************************"<<endl;
    
    if(choice==1){
    	
	
	cout<<" Press 2 for user vs. user game "<<endl;
	cout<<" Press 2 for user vs. computer game "<<endl;
	cout<<" Enter your option :  ";
	cin>>option;
	cout<<" -------------------------------------------------------"<<endl;
	
	if(option == 1){
	cout<<"************************************"<<endl;
	cout<<" You choose Human vs. Human Mode "<<endl;
	cout<<"************************************"<<endl;
		
	cout<<"Enter the name of the first player : ";
    cin>>n1;
    cout<<"Enter the name of second player : ";
    cin>>n2;
    cout<<"******************************************************"<<endl;
    cout<<n1<< " : is player1 so he/she will play first"<<endl;
    cout<<n2<< " : is player2 so he/she will play second"<<endl;
    cout<<"******************************************************"<<endl;
    Humanmode();
    
    	while(!condition())
	{
		
		Humanmode();
		condition();
}
	if(token == 'x' && tie == false)
	{
		cout<<"_______________________"<<endl;
		cout<<n2<<" : WINS !!! "<<endl;
		cout<<"_______________________"<<endl;
	}
	else if(token == '0' && tie == false)
	{
		cout<<"_______________________"<<endl;
		cout<<n1<<" : WINS !!! "<<endl;
		cout<<"_______________________"<<endl;
	}
	else if (tie == true ){
		cout<<"it's a draw !!! ";
	}


}
    else if(option == 2){
    	cout<<"************************************"<<endl;
    	cout<<" You choose Human vs. Computer Mode "<<endl;
    	cout<<"************************************"<<endl;
    	cout<<" Please Enter your name : ";
    	cin>>player;
    	cout<<"*******************************************"<<endl;
        Computermode();
	
	
	while(!condition())
	{
		
		Computermode();
		condition();
}
	if(token == 'x' && tie == false)
	{
		cout<<"_______________________________________________"<<endl;
		cout<<computer<<"Computer is the winner of this game"<<endl;
		cout<<"_______________________________________________"<<endl;
	}
	else if(token == '0' && tie == false)
	{
		cout<<"____________________________"<<endl;
		cout<<player<<" : You won this game"<<endl;
		cout<<"____________________________"<<endl;
	}
	else if(tie == true ){
		cout<<"it's a draw !!! "<<endl;
	}



}
}
    if(choice==2){
    	cout<<"Thanks for playing Now you exiting the game "<<endl;
	}
}

