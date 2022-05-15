// including libraries.
# include<stdio.h>
# include<conio.h>
# include<ctype.h>
# include<stdlib.h>
# include<string.h>
# include<windows.h>

// Declearing the functions.
void help();

int main(){
    int score = 0, h_score, age;
    char user_choice, name[10];
    
    home_screen:
        system("cls");
        printf("\n\t________________________________________________________________\n");
        printf("\n\t\tWelcome to the Quiz game of C-language.\n");
        printf("\n\t________________________________________________________________\n");
        printf("\n\t\tYou will be asked 10 question related to C programming language.\n");
        printf("\n\t\tEach question will provide you a cash price of $.100\n");
        printf("\n\t\tYou will be provided with 4 options for each question.\n");
        printf("\n\t\tYou can quit the game at any time you want by pressing (ESC) key\n");
        printf("\n\t________________________________________________________________\n");

        printf("\n\t\tPress F to continue or ESC to quit.\n\t\t");
        user_choice = toupper(getch());
        if(user_choice == 'F'){
            main_menu:
            system("cls");
            printf("\n\t\t\t\tMain Menu");
            printf("\n\t________________________________________________________________\n");
            printf("\n\t\t >> Press 'S' to start the Game.");
            printf("\n\t\t >> Press 'H' for help and instructions.");
            printf("\n\t\t >> Press 'Q' to exit the Game.");
            printf("\n\t\t Enter your choice: ");
            user_choice = toupper(getch());
            switch (user_choice){
                case 'S':
                    system("cls");
                    printf("\n\n\t\t Please enter your first name: ");
                    gets(name);
                    printf("\n\t\t Please enter your age: ");
                    scanf("%d", &age);
                    system("cls");
                    printf("\n\n\t\t Mr./Mrs. %s to C-programming language quiz", name);
                    printf("\n\n Here Are Few Tips For You.");
                    printf("\n -------------------------------------------------------------------------");
                    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
                    printf("\n    total of 10 questions. Each right answer will be awarded $100!");
                    printf("\n    By this way you can win upto 1000 cash prize!!!!!..........");
                    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
                    printf("\n    right option.");
                    printf("\n >> You will be asked questions continuously, till right answers are given");
                    printf("\n >> No negative marking for wrong answers!");
                    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
                    printf("\n\n\n Press Y  to start the game!\n");
                    printf("\n Press any other key to return to the main menu!");
                    user_choice = toupper(getch());
                    if(user_choice == 'Y'){
                        goto start;
                    }
                    else{
                        goto main_menu;
                    }
                    start:
                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\nQ.1  What is a correct syntax to output \"Hello World\" in C?");
                    printf("\n\n A. cout << \"Hello World\"\t\t B. System.out.printline(\"Hello World\")");
                    printf("\n C. Console.writeline(\"Hello World\")\t\t D. printf(\"Hello World\")");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'D'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option D");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.2 How do you insert COMMENTS in C code?");
                    printf("\n\n A. /* is a comment\t\t B. # is a comment");
                    printf("\n C. // is a comment\t\t D. -- is a comment");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'C'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option C");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.3 How can you create a variable with the numeric value 5?");
                    printf("\n\n A. int num = 5\t\t B. num = 5");
                    printf("\n C. val num = 5\t\t D. num = 5 int");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'A'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option A");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.4 How can you create a variable with the floating number 2.8?");
                    printf("\n\n A. num = 2.8 float\t\t B. float num = 2.8");
                    printf("\n C. val num = 2.8\t\t D. num = 2.8 double");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'B'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option B");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.5 Which operator is used to add together two values?");
                    printf("\n\n A. & sign\t\t B. ^ sign");
                    printf("\n C. ADD keyword\t\t D. + sign");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'D'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option D");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.6 Which function is often used to output values and print text?");
                    printf("\n\n A. output()\t\t B. printf()");
                    printf("\n C. printword()\t\t D. write()");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'B'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option B");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.7 Which operator can be used to compare two values?");
                    printf("\n\n A. ><\t\t B. =");
                    printf("\n C. <>\t\t D. ==");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'D'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option D");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.8 Which operator can be used to find the memory size (in bytes) of a data type or variable?");
                    printf("\n\n A. The sizeof property\t\t B. The sizer property");
                    printf("\n C. The len property\t\t D. The length property");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'A'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option A");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.9 What do we call the following? int myNumbers[] = {25, 50, 75, 100};");
                    printf("\n\n A. A class\t\t B. A pointer");
                    printf("\n C. None of the above\t\t D. An array");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'D'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option D");
                    }
                    printf("\nPress any key for next question.");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\t\t________ Challenge Round ________");
                    printf("\n\n Q.10 Which keyword is used to create a class in C?");
                    printf("\n\n A. class\t\t B. None of the above");
                    printf("\n C. class = myclass()\t\t D. class()");
                    printf("\n Your Answer: ");
                    user_choice = toupper(getch());
                    if(user_choice == 'B'){
                        printf("\n Its Correct");
                        score+=4;
                    }else{
                        printf("\n Sorry, its wrong. The correct option was option B");
                    }
                    printf("\nPress any key to see your result: ");
                    user_choice = toupper(getch());

                    system("cls");
                    printf("\n\n\n\t\tYour final result out of 40 points is: %d", score);
                    if (score >= 30){
                        printf("\n\t\tWell done!!!. Keep it up.");
                        printf("\n\t\tYou are passed");
                        printf("\n\t\tPress 'F' to return to Main Menu or 'E' to exit.");
                        user_choice = toupper(getch());
                        if(user_choice == 'F'){
                            goto main_menu;
                        }else{
                            exit(1);
                        }

                    }else if(score < 30 && score >= 20){
                        printf("\n\t\tYou can do well. Need improvments.");
                        printf("\n\t\tYou are passed.");
                        printf("Press 'F' to return to Main Menu or 'E' to exit.");
                        user_choice = toupper(getch());
                        if(user_choice == 'F'){
                            goto main_menu;
                        }else{
                            exit(1);
                        }

                    }else{
                        printf("\n\t\t You are failed.");
                        printf("Press 'F' to return to Main Menu or 'E' to exit.");
                        user_choice = toupper(getch());
                        if(user_choice == 'F'){
                            goto main_menu;
                        }else{
                            exit(1);
                        }
                    }

                case 'H':
                    Beep(500, 250);
                    system("cls");
                    help();
                    printf("\n\n\t\t Press any key to return to Main Menu: ");
                    user_choice = toupper(getch());
                    goto main_menu;  
                    break;              

                case 'Q':
                    Beep(500, 250);
                    printf("\n\t________________________________________________________________\n");
                    printf("\n\t\tThank You\n\t\tYou may have a nice day\n");
                    exit(1);
                
                default:
                    Beep(500, 250);
                    printf("\n\t\t Invalid Option.\n");
                    break;
            }

        }else{
            Beep(500, 250);
            printf("\n\t________________________________________________________________\n");
            printf("\n\t\tThank You\n\t\tYou may have a nice day\n");
        }


    return 0;
}

// Defining the function.
void help(){
    system("cls");
    printf("\n\n\t\t                              HELP");
    printf("\n\t\t -------------------------------------------------------------------------");
    printf("\n\t\t ......................... C program Quiz Game...........");
    printf("\n\t\t >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n\t\t    total 10 questions each right answer will be awarded $100.");
    printf("\n\t\t >> Each right answer will add 4 points to your score.");
    printf("\n\t\t    By this way you can win upto 1000 cash prize in USD...............");
    printf("\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t    right option");
    printf("\n\t\t >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n\t\t >> No negative marking for wrong answers");
	printf("\n\n\t\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t\t*****C PROGRAM QUIZ GAME is demonstrated by Knowledge 360********");
}


