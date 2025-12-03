#include <stdio.h>

#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define BLACK "\x1b[30m"
#define RESET "\x1b[0m"

void printchar(char ch) {
    if(ch == 'X')
        printf(RED "%c" RESET,ch);
    else if(ch == 'O')
        printf(YELLOW "%c" RESET,ch);
    else
        printf(BLACK "%c" RESET,ch);
}

int main() {

    char a='1', b='2', c='3';
    char d='4', e='5', f='6';
    char g='7', h='8', i='9';

    char player;
    int choice;
    int win = 0;

    printf("\n< Hello! TANU welcomes you in this amazing TIC TAC TOE World >\n");
    printf("\n(Before starting) --> Kindly, decide which player wants to throw first move [X or O] : ");
    scanf("%c",&player);

    while(1) {

        printf("\n");
        printchar(a); printf(" | "); printchar(b); printf(" | "); printchar(c); printf("\n");
        printf("--|---|---\n");
        printchar(d); printf(" | "); printchar(e); printf(" | "); printchar(f); printf("\n");
        printf("--|---|---\n");
        printchar(g); printf(" | "); printchar(h); printf(" | "); printchar(i); printf("\n\n");

        printf("[ PLAYER ");
        if(player=='X') printf(RED "X" RESET);
        else printf(YELLOW "O" RESET);
        printf(" ] --> Throw your move (1-9) : ");

        scanf("%d", &choice);

        if(choice==1 && a=='1') a = player;
        else if(choice==2 && b=='2') b = player;
        else if(choice==3 && c=='3') c = player;
        else if(choice==4 && d=='4') d = player;
        else if(choice==5 && e=='5') e = player;
        else if(choice==6 && f=='6') f = player;
        else if(choice==7 && g=='7') g = player;
        else if(choice==8 && h=='8') h = player;
        else if(choice==9 && i=='9') i = player;
        else {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if(a==player && b==player && c==player) win = 1;
        else if(d==player && e==player && f==player) win = 1;
        else if(g==player && h==player && i==player) win = 1;
        else if(a==player && d==player && g==player) win = 1;
        else if(b==player && e==player && h==player) win = 1;
        else if(c==player && f==player && i==player) win = 1;
        else if(a==player && e==player && i==player) win = 1;
        else if(c==player && e==player && g==player) win = 1;

        if(win == 1) {

            printf("\n");
            printchar(a); printf(" | "); printchar(b); printf(" | "); printchar(c); printf("\n");
            printf("--|---|---\n");
            printchar(d); printf(" | "); printchar(e); printf(" | "); printchar(f); printf("\n");
            printf("--|---|---\n");
            printchar(g); printf(" | "); printchar(h); printf(" | "); printchar(i); printf("\n\n");

            printf("[ PLAYER ");
            if(player=='X') printf(RED "X" RESET);
            else printf(YELLOW "O" RESET);
            printf(" ] is the WINNER!!\n\nHope you enjoyed it !!!\n");

            break;
        }

        if(a!='1' && b!='2' && c!='3' &&
           d!='4' && e!='5' && f!='6' &&
           g!='7' && h!='8' && i!='9') {
            printf("\nIt's a TIE!!\n\nHope you enjoyed it !!!\n");
            break;
        }

        if(player == 'X') player = 'O';
        else player = 'X';
    }

    return 0;
}
