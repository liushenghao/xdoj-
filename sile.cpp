#include <stdio.h> 
#include<stdlib.h>
float mood(int x) {

 aa:
	if (x = 1) {
		printf("It is the mood a.\n");
	}
	else {
		if (x = 2) {
			printf("It is the mood b.\n");
		}
		else {
			if (x = 3)
				printf("It is the mood c.\n");
			else
				printf("you need to choose a correct mood.\n");
		
		}		
	}return 0;
}
int main() {
	char board[3][3] = { {'.','.','.'},{'.','.','.'},{'.','.','.'} };
	char standard[1][1] = { 'X' };
	int i, j;    
	for (i = 0; i < 3; i++) { 
		for (j = 0; j < 3; j++) { 
			printf("%c ", board[i][j]);
		}       
		printf("\n"); 
	}
	//把图显示出来的部分
	printf("Choose your mood.\n");
	int x;
	scanf("%d", &x);
	mood(x);
	printf("let's start the game.\n");
	for (int i = 0; i = 9; ){
		int input;
		bb:printf("your position is");
		scanf("%d", &input);
		//重点来啦     关键是input和横纵行坐标之间的转换
		if (x = 1) {
			if (board[input  / 3][input % 3]== standard[1][1]) {
				printf(" It had been occupied.\n");
				goto bb;
			}else {
				board[input/ 3][input  % 3] = standard[1][1];
			}/*mood a的*/
		}
		else {
			if (x = 2) {
				if (board[(input-1)/ 3][(input-1)% 3] == standard[1][1]) {
					printf(" It had been occupied.\n");
					goto bb;
				}else {
					board[(input-1)/3][(input-1)% 3] = standard[1][1];
				}/*mood b 的*/
				
			}
			else {
				if (x = 3){
					if (board[2-(input-1)/3][(input-1)% 3] == standard[1][1]) {
						printf(" It had been occupied.\n");
						goto bb;
					}
					else {
						board[2-(input-1)/ 3][(input - 1) % 3] = standard[1][1];
					}
				
				}/*mood c的*/
				else {
					printf("you need to choose a correct position.\n");
				}
			}
		}
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				printf("%c ", board[i][j]);
			}
			printf("\n");
		}//看个图
		system("pause");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		/*沙雕一样的清空*/
	}
	printf("Oh you finish the game and you fill all blanks.");
    getchar();
	getchar();
}

