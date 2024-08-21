#include<stdio.h>
void Print_board();
int Check_Winer();
void system();
char value[]= {'0','1','2','3','4','5','6','7','8','9'};
void main(){
	
	int player = 1,number,i = -1;
	Print_board(); //Call print_board
	
	while(i == -1){
		//	Define player 1 turn
		player = (player % 2 == 0) ? 2 : 1;
		char mark = (player == 1) ? 'X' : 'O'; 
		printf("Enter Mark Place No Player %d : ",player);
		
		scanf("%d",&number);
	
		// 	Define Invalid Condition
		if(number < 1 || number > 9){
			printf("!!!---- Invaild Choice ----!!!");
		}
		value[number] = mark;
		Print_board(); //function Call for no_mark show 
		
		//Calling function 
		int result = Check_Winer();
		
		if(result == 1){
			printf("Congratulation...Player %d is Winner",player); 	
			return;
		}
		else if(result == 0){
			printf("Match Draw");
			return;
		}
		player++; 
	}
}
void Print_board(){
	system("cls");
	printf("\n");
	printf("\n=== TIC TAC TEO Game ===\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c   \n",value[1],value[2],value[3]);
	printf("      |      |     \n");
	printf("------|------|------\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c   \n",value[4],value[5],value[6]);
	printf("      |      |     \n");
	printf("------|------|------\n");
	printf("      |      |     \n");
	printf("  %c   |  %c   |  %c   \n",value[7],value[8],value[9]);
	printf("      |      |     \n");
	printf("\n");
}
int Check_Winer(){
//	All Conditions is Winner
	if(value[1] == value[2] && value[2] == value[3]){
		return 1;
	}
	if(value[1] == value[4] && value[4] == value[7]){
		return 1;
	}
	if(value[7] == value[8] && value[8] == value[9]){
		return 1;
	}
	if(value[3] == value[6] && value[6] == value[9]){
		return 1;
	}
	if(value[1] == value[5] && value[5] == value[9]){
		return 1;
	}
	if(value[3] == value[5] && value[5] == value[7]){
		return 1;
	}
	if(value[2] == value[5] && value[5] == value[8]){
		return 1;
	}
	if(value[4] == value[5] && value[5] == value[6]){
		return 1;
	}
	
	//Draw Logic
	int i,counter = 0;
	for(i = 1; i <= 9; i++){
		if(value[i] == 'X' || value[i] == 'O'){
			counter++;
		}
	}
	if(counter  == 9){
		return 0;
	}
	return -1;
	
}


