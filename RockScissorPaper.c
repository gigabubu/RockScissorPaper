#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//function to implement the game

int game(char you, char comp){
     
    //same simbol equals to draw
    if (you==comp)
        return -1;
    
    //you: p, comp: r
    if (you== 'p' && comp == 'r')
        return 0;
    
    //you: s, comp: p
    if (you== 's' && comp == 'p')
        return 0;

    //you: r, comp: s
     if (you== 'r' && comp == 's')
        return 0;
    
    //you: s, comp: r
    if (you== 'p' && comp == 's')
        return 1;
    
    //you: r, comp: p
     if (you== 'r' && comp == 'p')
        return 1;

    //you: p, comp: s
    if (you== 'p' && comp == 's')
        return 1;
    
}

//Driver code

int main(){
    //stores the random number
    int n, result, out;

    char you, comp;

    //new rundom nuber generator seed every time
    srand(time(NULL));


    //make the number less than 100 dividing it by 100 
    n = rand() % 100;
    
    //convert the number into rock, scissor or  paper 
    
    //if n <= 33 : rock
    if (n <= 33){
        comp = 'r';
    }

    //if 33 < n <66 : scissor
    else if (33 < n && n <= 66){
        comp = 's';
    }

    //if 66 <= n <= 99 : paper
    else if (66 <= n && n <= 99){
        comp = 'p';
    }

    printf("\t\t\t\tChoose beetween rock (r), scissor (s), paper (p) \n\n\t\t\t\t");
    scanf("%c",&you);



    result = game(you, comp);

    if (result == -1) {
        printf("\n\n\t\t\t\t\t\tGame Draw!\n");
    }
    else if (result == 0) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n\n");
    }
        printf("\t\t\t\tYou choose : %c , Computer choose : %c\n\n\n",you, comp);


    return 0;
}
