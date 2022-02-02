#include <stdio.h>
#include <string.h>

    char s[10][10]= {{'S','S','S','S',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ','S',' ',' ',' ',' ','S','S',' '},
                     {' ','S',' ',' ',' ',' ',' ',' ',' '},
                     {' ','S',' ','S',' ',' ',' ',' ',' '},
                     {' ',' ',' ','S',' ',' ',' ',' ',' '},
                     {' ',' ',' ','S',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ','S','S','S','S','S',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' '}};

int main(){

    int t;
    do{
    puts("1. Play game");
    puts("2. Exit");
    scanf("%d", &t);
    switch(t){
        case 1:{
            int a, b, hit = 0;
            for(int x = 35; x >= 0; x--){

            if(x == 0){
                puts("Game Over.. Enemy Win !");
                break;
            }

            printf("Current Ammo: %d\n", x);

            printf("Input X [0-9][-1 to exit]: ");
             scanf("%d", &a);

            while(a > 9 || a < -1){
            printf("Input X [0-9][-1 to exit]: ");
             scanf("%d", &a);
            }
            if(a == -1){
                break;
            }
             
            printf("Input Y [0-9][-1 to exit]: ");
            scanf("%d", &b);

            while(b > 9 || b < -1){
            printf("Input Y [0-9][-1 to exit]: ");
            scanf("%d", &b);
            }
            if(b == -1 || a == -1){
                break;
            }

            s[b][a];
            if(s[b][a] == 'S'){
                puts("You hit the target!");
                s[b][a] = 'x';
                hit++;
             if(hit == 17){
                puts("Congratulation !! you hit all the target");
                break;
             }
            }else if(s[b][a] == 'x'){
                puts("Choose another target !..");
                x++;
            }else{
                puts("You miss the target");
                s[b][a] = 'x';
            }
            }
           
        }
        case 2:{
            break;
        }
    }

    }while(t != 2);

    return 0; 
}
