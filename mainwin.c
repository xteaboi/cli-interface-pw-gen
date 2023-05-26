#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128
char user[];
void print_image(FILE *fptr);
int main(void)
{
    int plen;
    char *filename = "welcome.txt";
    FILE *fptr = NULL;
    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }
    printf("******************\nThe following program is designed in an aesthetic of old DOS machines or arcade games,\n as a creative aspect to this project\n*******************\n");
    print_image(fptr);
    printf("\n");
    loading();
    fclose(fptr);
    dbox1();
    loading();
    printf("    >>>\n");
    dbox2();
    scanf("%d",&plen);
    dbox2pt2();
    printf("\n");
    loading2();
    printf("\t");
    passGen(plen);
    loading();
    prog_exit();
    return 0;
    getch();
}
void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int loading(){
    int i;
    for (i = 0; i < 4; i++) {
        // delay of one second
        delay(1);
        if(i<3){
            printf(". ");
        }
        else{
            printf("LOADING ... \n");
        }
    }
    return 0;
}
int dbox1(){
    char *fname = "dbox1.txt";
    FILE *fpt = NULL;
    if((fpt = fopen(fname,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",fname);
        return 1;
    }
    print_image(fpt);
    fclose(fpt);
    return 0;
}
int passGen(int N)
{
    int i = 0;
  
    int randomizer = 0;
  
    srand((unsigned int)(time(NULL)));
  
    // Array of numbers
    char numbers[] = "0123456789";
  
    // Array of small alphabets
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    // Array of capital alphabets
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    // Array of all the special symbols
    char symbols[] = "!@#$^&*?";
  
    char password[N];
  
    // To select the randomize
    randomizer = rand() % 4;
  
    for (i = 0; i < N; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
        FILE *fpt = NULL;
        fpt=fopen("passfile.txt","w");
        fputs(password, fpt);
        fclose(fpt);
        printf("\nYour generated password has been saved in the folder of the program as passfile\n");
}
int loading2(){
    int i;
    for (i = 0; i < 4; i++) {
        // delay of one second
        delay(1);
        if(i<3){
            printf(". ");
        }
        else{
            printf("GENERATING ... \n");
        }
    }
    return 0;
}
int dbox2(){
    char *fname = "dbox2.txt";
    FILE *fpt = NULL;
    if((fpt = fopen(fname,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",fname);
        return 1;
    }
    print_image(fpt);
    fclose(fpt);
    return 0;
}
int dbox2pt2(){
    char *fname = "dbox2pt2.txt";
    FILE *fpt = NULL;
    if((fpt = fopen(fname,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",fname);
        return 1;
    }
    print_image(fpt);
    fclose(fpt);
    return 0;
}
int prog_exit(){
    int i;
    pop();
    printf("\nGoodLuck on keeping it safe\n");
    printf("\nEXITING PROGRAM\n");
    for (i = 0; i < 4; i++) {
        // delay of one second
        delay(1);
        if(i<3){
            printf(". ");
        }
        else{
            printf("EXITING ... \n");
        }
    }
    return 0;
}
int pop(){
    char *fname = "pop.txt";
    FILE *fpt = NULL;
    if((fpt = fopen(fname,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",fname);
        return 1;
    }
    print_image(fpt);
    fclose(fpt);
    return 0;
}
