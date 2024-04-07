# include <iostream>
using namespace std;
int main()
{
	while(true)
	{
		cout<<"\tWelcome to Tic Tac Toe Game."<<endl<<endl;
		char arr[3][3] ={{0}};
		char player_A= 'X';
		char player_B= 'O';
		int value;
		bool playerturn= true;
		int flag=0;
		bool game_over= false;
		string program;
		
		cout<<"   "<<arr[0][0]<<"    |"<<arr[0][1]<<"    |"<<arr[0][2]<<endl;
		cout<<"   -----------------"<<endl;
		cout<<"   "<<arr[1][0]<<"    |"<<arr[1][1]<<"    |"<<arr[1][2]<<endl;
		cout<<"   -----------------"<<endl;
		cout<<"   "<<arr[2][0]<<"    |"<<arr[2][1]<<"    |"<<arr[2][2]<<endl;
		
		for(int i=0; i<=2 && !game_over; i++)
		{
			for(int j=0; j<=2 && !game_over; j++)
			{
				if(playerturn)
				{
					cout<<"Player A enter the position of array between 1 and 9 = ";
					cin>>value;
					cout<<endl;
					if(value ==1 )
					{	
						if (arr[0][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][0]='X';
					}
					
					else if(value ==2)
					{
						if (arr[0][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][1]='X';
					}
					
					else if(value ==3)
					{
						if (arr[0][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][2]='X';
					}
					
					else if(value ==4)
					{
						if (arr[1][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][0]='X';
					}
					
					else if(value ==5)
					{
						if (arr[1][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][1]='X';
					}
					
					else if(value ==6)
					{
						if (arr[1][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][2]='X';
					}
					
					else if(value ==7)
					{
						if (arr[2][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][0]='X';
					}
					
					else if(value ==8)
					{
						if (arr[2][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][1]='X';
					}
					
					else if(value ==9)
					{
						if (arr[2][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][2]='X';
					}
					
					else if(value<=0 || value>=10)
					{
						cout<<"Invalid number. ";
						j--;
						continue;
					} 
				}
				
				
				else
				{
					cout<<"Player B enter the position of array between 1 and 9 = ";
					cin>>value;
					cout<<endl;
					if(value ==1 )
					{
						if (arr[0][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][0]='O';
					}	
					
					else if(value ==2)
					{
						if (arr[0][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][1]='O';
					}
					
					else if(value ==3)
					{
						if (arr[0][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[0][2]='O';
					}
					
					else if(value ==4)
					{
						if (arr[1][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][0]='O';
					}
					
					else if(value ==5)
					{
						if (arr[1][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][1]='O';
					}
					
					else if(value ==6)
					{
						if (arr[1][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[1][2]='O';
					}
					
					else if(value ==7)
					{
						if (arr[2][0] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][0]='O';
					}
					
					else if(value ==8)
					{
						if (arr[2][1] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][1]='O';
					}
					
					else if(value ==9)
					{
						if (arr[2][2] != 0)
						{
							cout<<"position already occupied. Again ";
							j--;
							continue;
						}
						arr[2][2]='O';
					}
					
					else if(value<=0 || value>=10)
					{
						cout<<"Invalid number. ";
						j--;
						continue;
					}	
				}	
	
				cout<<"   "<<arr[0][0]<<"    |"<<arr[0][1]<<"    |"<<arr[0][2]<<endl;
				cout<<"   ---------------"<<endl;
				cout<<"   "<<arr[1][0]<<"    |"<<arr[1][1]<<"    |"<<arr[1][2]<<endl;
				cout<<"   ---------------"<<endl;
				cout<<"   "<<arr[2][0]<<"    |"<<arr[2][1]<<"    |"<<arr[2][2]<<endl;
				
				playerturn= !playerturn;
							
				if((arr[0][0] ==player_A && arr[0][1] ==player_A && arr[0][2] ==player_A) ||
				   (arr[1][0] ==player_A && arr[1][1] ==player_A && arr[1][2] ==player_A) ||
				   (arr[2][0] ==player_A && arr[2][1] ==player_A && arr[2][2] ==player_A) ||
				   (arr[0][0] ==player_A && arr[1][0] ==player_A && arr[2][0] ==player_A) ||
				   (arr[0][1] ==player_A && arr[1][1] ==player_A && arr[2][1] ==player_A) ||
				   (arr[0][2] ==player_A && arr[1][2] ==player_A && arr[2][2] ==player_A) ||
				   (arr[0][0] ==player_A && arr[1][1] ==player_A && arr[2][2] ==player_A) ||
				   (arr[0][2] ==player_A && arr[1][1] ==player_A && arr[2][0] ==player_A))
				{
					cout<<"\nPlayer A wins."<<endl<<endl;
					flag= flag+1;
					game_over= true;
				}
				else if((arr[0][0] ==player_B && arr[0][1] ==player_B && arr[0][2] ==player_B) ||
					    (arr[1][0] ==player_B && arr[1][1] ==player_B && arr[1][2] ==player_B) ||
					    (arr[2][0] ==player_B && arr[2][1] ==player_B && arr[2][2] ==player_B) ||
					    (arr[0][0] ==player_B && arr[1][0] ==player_B && arr[2][0] ==player_B) ||
					    (arr[0][1] ==player_B && arr[1][1] ==player_B && arr[2][1] ==player_B) ||
					    (arr[0][2] ==player_B && arr[1][2] ==player_B && arr[2][2] ==player_B) ||
					    (arr[0][0] ==player_B && arr[1][1] ==player_B && arr[2][2] ==player_B) ||
					    (arr[0][2] ==player_B && arr[1][1] ==player_B && arr[2][0] ==player_B))
				{
					cout<<"\nPlayer B wins."<<endl<<endl;
					flag= flag+1;
					game_over= true;
				}
			} //inner loop
		} //outer loop
		if(flag==0)
		{
			cout<<"Game drawn."<<endl;
		}
		cout<<"Do you want to play again = ";
		cin>>program;
		if(program=="yes" || program=="Yes" || program=="YES")
		{
			cout<<endl<<endl;
			continue;
		}
		else
		{
			break;
		}
	} //while loop
}



//			if ((arr[0][0] == arr[0][1] == arr[0][2]) ||
//				(arr[1][0] == arr[1][1] == arr[1][2]) ||
//			    (arr[2][0] == arr[2][1] == arr[2][2]) ||
//			    (arr[0][0] == arr[1][0] == arr[2][0]) ||
//			    (arr[0][1] == arr[1][1] == arr[2][1]) ||
//			    (arr[0][2] == arr[1][2] == arr[2][2]) ||
//			    (arr[0][0] == arr[1][1] == arr[2][2]) ||
//			    (arr[0][2] == arr[1][1] == arr[2][0]))
//			{
//				cout<<playerturn<<" wins."<<endl;
//				flag=flag+1;
//				break;
//			}    
