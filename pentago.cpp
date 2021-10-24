//-----------------------------------------adding the needed libraries
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstring>
#include <string>
#include <time.h>
#include <fstream>
#include <sstream>
using namespace std;
//-------------------------------------fucntion prototypes
void textcolor(int);
int columnCheck(char(*)[7],char,int);
int winCheckVertical(char(*)[7],char);
int rowCheck(char(*)[7],char,int);
int winCheckHorizontal(char(*)[7],char);
int diagonalCheckPLUSPLUS(char(*)[7],char,int,int);
int diagonalCheckPLUSMINUS(char(*)[7],char,int,int);
int diagonalCheckMINUSPLUS(char(*)[7],char,int,int);
int diagonalCheckMINUSMINUS(char(*)[7],char,int,int);
int winCheckDiagoanl(char(*)[7],char);
int fullCheck(char(*)[7]);
void rotateLeft(char(*)[7],int,int);
void rotateRight(char(*)[7],int,int);
void easyCOMelement(char(*)[7]);
void easyCOMrotate(char(*)[7]);
void regularCOMelement(char(*)[7],char,int*);
void regularCOMrotate(char(*)[7],int);
void hardCOMelement(char(*)[7],char,int*);
void hardCOMrotate(char(*)[7],int);
void fakeLoading();
void rowPrintnormal(string*,int,char,char,char,char,char,char);
void rowPrintARROW(string*,int,char,char,char,char,char,char);
void rowPrintARROWleft(string*,int,char,char,char,char,char,char);
void rowPrintARROWright(string*,int,char,char,char,char,char,char);
void rowPrintplain(string*,int,char,char,char,char,char,char);
void columnARROW(int);
void boxnormal(char(*)[7],int);
void boxrotate(char(*)[7],int,int);
void wasdnormal(char(*)[7]);
void wasdrotate(char(*)[7]);
void checkprocess(int*,int*,int,int,int,int,int,int,int);
//--------------------------------------------------------------------the main function
int main()
{
    system("color 70");
    srand(time(NULL));
    system("cls");
    cout << "\t\n\n\n\t\t  ";
    //------------------------STARTING TONE
    Beep(500,1000);
    Beep(1000,500);
    Beep(100,1000);
    Sleep(500);
    //------------------- TITLE
    textcolor(1);
    Sleep(500);
    Beep(800,500);
    cout << "P";
    Sleep(500);
    Beep(800,500);
    textcolor(4);
    cout << "E";
    textcolor(2);
    Sleep(500);
    Beep(800,500);
    cout << "N";
    textcolor(14);
    Sleep(500);
    Beep(800,500);
    cout<< "T";
    textcolor(8);
    Sleep(500);
    Beep(800,500);
    cout << "A";
    Sleep(500);
    Beep(800,500);
    textcolor(5);
    cout << "G";
    textcolor(3);
    Sleep(500);
    Beep(800,500);
    cout << "O\n\n";
    //--------------------team info
    Beep(2000,2000);
    textcolor(4);
    cout << "\t\u2554\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2557\n\t\u2551";
    textcolor(0);
    cout << "an ";
    textcolor(2);
    cout << "UPDATE GALAXY";
    textcolor(0);
    cout << " production";
    textcolor(4);
    cout << "\u2551\n";
    cout << "\t\u255A\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u255D\n\n";
    Beep(2000,2000);
    //--------------------------------------first loading 
    fakeLoading();
    //-----------------------------------menu
    Beep(1500,1000);
    Beep(500,500);
    textcolor(0);
    cout << "Hi. welcome to our game. \n\n";
    char chosen;
    while(true)
    {
        textcolor(0);
        cout << "let's choose what do you want to do (choose 1/2/3/4/5/6):\n\n";
        cout << "\t\u2776 ";
        textcolor(10);
        cout << "PLAYER VS PLAYER\n";
        textcolor(0);
        cout << "\t\u2777 ";
        textcolor(11);
        cout << "PLAYER VS COM\n";
        textcolor(0);
        cout << "\t\u2778 ";
        textcolor(1);
        cout << "HOW PLAY PENTAGO\n";
        textcolor(0);
        cout << "\t\u2779 ";
        textcolor(6);
        cout << "RANKINGS & STATS\n";
        textcolor(0);
        cout << "\t\u277A ";
        textcolor(13);
        cout << "HARDSHIP SETTINGS\n";
        textcolor(0);
        cout << "\t\u277B ";
        textcolor(12);
        cout << "EXIT\n";
        //-------------------------------------------CHOICES
        cin >> chosen;
        Beep(1500,700);
        //------------------------------------------- PLAYER VS PLAYER 
        if (chosen == '1')
        {
            char data[6][7];
            for(int i = 0;i < 6;i++)
            {
                for(int j = 0;j < 6;j++)
                {
                    data[i][j] = ' ';
                }
            }
            string playername1;
            string playername2;
            int score1 = 0;
            int score2 = 0;
            int color1;
            int color2;
            textcolor(3);
            cout << "here we are going to play the game....\n";
            fakeLoading();
            system("cls");
            Beep(1500,1000);
            Beep(500,500);
            textcolor(0);
            cout << "player1 please enter your name\n";
            cin >> playername1;
            cout << "Hi " << playername1 << " now it is your friend's turn to tell us his/her name\n";
            cin >> playername2;
            cout << "Hello "<< playername2 << " hope you two have fun playing our PENTAGO game.\n\n";
            cout << "Now each of you should choose a color from the list below and type in the number of his/her chosen color\n";
            cout << "it is " << playername1 << "'s turn\n\n";
            cout << "\u2776 ";
            textcolor(1);
            cout << "BLUE\n";
            textcolor(0);
            cout << "\u2777 ";
            textcolor(2);
            cout << "GREEN\n";
            textcolor(0);
            cout << "\u2778 ";
            textcolor(3);
            cout << "AQUA\n";
            textcolor(0);
            cout << "\u2779 ";
            textcolor(4);
            cout << "RED\n";
            textcolor(0);
            cout << "\u277A ";
            textcolor(5);
            cout << "PURPLE\n";
            textcolor(0);
            cout << "\u277B ";
            textcolor(6);
            cout << "YELLLOW\n";
            cin >> color1;
            cout << "Now it is " << playername2 << "'s turn\n\n";
            cin >> color2;
            textcolor(color1);
            cout << playername1 << endl;
            textcolor(color2);
            cout << playername2 << endl;
            ofstream player_name("info_namePVP.txt", ios::app);
            player_name << playername1 << '\n' << playername2 << '\n';
            player_name.close();
            ofstream player_color ("info_colorPVP.txt", ios::app);
            player_color << color1 << '\n' << color2 << '\n';
            player_color.close();
            //----------------------------------------------------------- the game process
            system("cls");
            //------------------SIMPLE 3 2 1
            textcolor(4);
            Sleep(1000);
            cout << "3";
            Sleep(1000);
            cout << "\r2";
            Sleep(1000);
            cout << "\r1";
            Sleep(1000);
            cout << "\rGO!!!\u2B50";
            Sleep(500);
            system("cls");
            //-----------------------------------------
            string player = playername1;
            char element = 'x';
            int color = color1;
            int firstPlayerVertical;
            int firstPlayerHorizontal;
            int firstPlayerDiagonal;
            int secondPlayerVertical;
            int secondPlayerHorizontal;
            int secondPlayerDiagonal;
            int full;
            while(true)
            {
                textcolor(color);
                cout << player << "\'s turn as "<< element << endl;
                wasdnormal(data);
                wasdrotate(data);
                firstPlayerVertical = winCheckVertical(data,'x');
                firstPlayerHorizontal = winCheckHorizontal(data,'x');
                firstPlayerDiagonal = winCheckDiagoanl(data,'x');
                secondPlayerVertical = winCheckVertical(data,'o');
                secondPlayerHorizontal = winCheckHorizontal(data,'o');
                secondPlayerDiagonal = winCheckDiagoanl(data,'o');
                full = fullCheck(data);
                //----------------------------processing the results of checks
                checkprocess(&score1,&score2,firstPlayerVertical,firstPlayerHorizontal,firstPlayerDiagonal,secondPlayerVertical,secondPlayerHorizontal,secondPlayerDiagonal,full);
                if(score1 != 0 || score2 != 0)
                {
                    break;
                }
                //------------------------changing id for next turn
                if(element == 'x')
                {
                    player = playername2;
                    element = 'o';
                    color = color2;
                }
                else if(element == 'o')
                {
                    player = playername1;
                    element = 'x';
                    color = color1;
                }
            }
            if(score1 > score2)
            {
                cout << playername1 << " WON THE GAME\u2728\n";
            }
            else if(score1 < score2)
            {
                cout << playername2 << " WON THE GAME\u2728\n";
            }
            else if(score1 == score2)
            {
                cout << "DRAW\u270B\n";
            }
            //-----------------------------------------------------writing the scores on the scores file 
            ofstream player_score ("info_scorePVP.txt", ios::app);
            player_score << score1 << '\n' << score2 << '\n';
            player_score.close();
            //--------------------------------------------------------------
            break;
        }
        //----------------------------------------------------------- VS COM
        else if(chosen == '2')
        {
            fakeLoading();
            Beep(1500,1000);
            Beep(500,500);
            int randomCOMcolor = rand() % 5 + 1;
            int playercolor;
            int score;
            int COMscore;
            textcolor(3);
            cout << "computer is now ready to start the game....\n";
            string playername;
            textcolor(0);
            cout << "please enter your name\n";
            cin >> playername;
            cout << "now choose a color from the list below\n";
            cout << "\u2776 ";
            textcolor(1);
            cout << "BLUE\n";
            textcolor(0);
            cout << "\u2777 ";
            textcolor(2);
            cout << "GREEN\n";
            textcolor(0);
            cout << "\u2778 ";
            textcolor(3);
            cout << "AQUA\n";
            textcolor(0);
            cout << "\u2779 ";
            textcolor(4);
            cout << "RED\n";
            textcolor(0);
            cout << "\u277A ";
            textcolor(5);
            cout << "PURPLE\n";
            textcolor(0);
            cout << "\u277B ";
            textcolor(6);
            cout << "YELLLOW\n";
            cin >> playercolor;
            textcolor(playercolor);
            cout << playername << endl;
            textcolor(randomCOMcolor);
            cout << "COM" << endl;
            //------------------------------------------------------wtiring color and name on the file
            ofstream player_name("info_namePVC.txt", ios::app);
            player_name << playername << '\n' << "COM" << '\n';
            player_name.close();
            ofstream player_color ("info_colorPVC.txt", ios::app);
            player_color << playercolor << '\n' << randomCOMcolor << '\n';
            player_color.close();
            //----------------------------------------------------------- showing the difficulty to user
            system("cls");
            char hardshipChoice;
            ifstream hardshipSettingsRead("settings.txt",ios::in);
            hardshipSettingsRead >> hardshipChoice;
            hardshipSettingsRead.close();
            int hardshipChoiceINT = hardshipChoice - 48;
            if(hardshipChoiceINT == 1)
            {
                textcolor(0);
                cout << "the difficulty is set to ";
                textcolor(10);
                cout << "EASY";
                textcolor(0);
                cout << " if you wonder to change it,run the program once again and change it the 5th section of the menu.\n\n";
                Sleep(5000);
            }
            else if(hardshipChoiceINT == 2)
            {
                textcolor(0);
                cout << "the difficulty is set to ";
                textcolor(6);
                cout << "REGULAR";
                textcolor(0);
                cout << " if you wonder to change it,run the program once again and change it the 5th section of the menu.\n\n";
                Sleep(5000);
            }
            else if(hardshipChoiceINT == 3)
            {
                textcolor(0);
                cout << "the difficulty is set to ";
                textcolor(12);
                cout << "HARD";
                textcolor(0);
                cout << " if you wonder to change it,run the program once again and change it the 5th section of the menu.\n\n";
                Sleep(5000);
            }
            //---------------------------------------------------------THE game process
            if(hardshipChoiceINT == 1)
            {
                char data[6][7];
                for(int i = 0;i < 6;i++)
                {
                    for(int j = 0;j < 6;j++)
                    {
                        data[i][j] = ' ';
                    }
                }
                system("cls");
                //------------------SIMPLE 3 2 1
                textcolor(4);
                Sleep(1000);
                cout << "3";
                Sleep(1000);
                cout << "\r2";
                Sleep(1000);
                cout << "\r1";
                Sleep(1000);
                cout << "\rGO!!!\u2B50";
                Sleep(500);
                system("cls");
                //-----------------------------------------
                string player = playername;
                char element = 'x';
                int color = playercolor;
                int firstPlayerVertical;
                int firstPlayerHorizontal;
                int firstPlayerDiagonal;
                int secondPlayerVertical;
                int secondPlayerHorizontal;
                int secondPlayerDiagonal;
                int full;
                while(true)
                {
                    textcolor(color);
                    cout << player << "\'s turn as "<< element << endl;
                    wasdnormal(data);
                    wasdrotate(data);
                    easyCOMelement(data);
                    easyCOMrotate(data);
                    firstPlayerVertical = winCheckVertical(data,'x');
                    firstPlayerHorizontal = winCheckHorizontal(data,'x');
                    firstPlayerDiagonal = winCheckDiagoanl(data,'x');
                    secondPlayerVertical = winCheckVertical(data,'o');
                    secondPlayerHorizontal = winCheckHorizontal(data,'o');
                    secondPlayerDiagonal = winCheckDiagoanl(data,'o');
                    full = fullCheck(data);
                    //----------------------------processing the results of checks
                    checkprocess(&score,&COMscore,firstPlayerVertical,firstPlayerHorizontal,firstPlayerDiagonal,secondPlayerVertical,secondPlayerHorizontal,secondPlayerDiagonal,full);
                    if(score != 0 || COMscore != 0)
                    {
                        break;
                    }
                    //------------------------changing id for next turn
                    if(element == 'x')
                    {
                        player = "COM";
                        element = 'o';
                        color = randomCOMcolor;
                    }
                    else if(element == 'o')
                    {
                        player = playername;
                        element = 'x';
                        color = playercolor;
                    }
                }
                if(score > COMscore)
                {
                    cout << playername << " WON THE GAME\u2728\n";
                }
                else if(score < COMscore)
                {
                    cout <<"COM WON THE GAME\u2728\n";
                }
                else if(score == COMscore)
                {
                    cout << "DRAW\u270B\n";
                }
            }
            else if(hardshipChoiceINT == 2)
            {
                
                char data[6][7];
                for(int i = 0;i < 6;i++)
                {
                    for(int j = 0;j < 6;j++)
                    {
                        data[i][j] = ' ';
                    }
                }
                int block;
                system("cls");
                //------------------SIMPLE 3 2 1
                textcolor(4);
                Sleep(1000);
                cout << "3";
                Sleep(1000);
                cout << "\r2";
                Sleep(1000);
                cout << "\r1";
                Sleep(1000);
                cout << "\rGO!!!\u2B50";
                Sleep(500);
                system("cls");
                //-----------------------------------------
                string player = playername;
                char element = 'x';
                int color = playercolor;
                int firstPlayerVertical;
                int firstPlayerHorizontal;
                int firstPlayerDiagonal;
                int secondPlayerVertical;
                int secondPlayerHorizontal;
                int secondPlayerDiagonal;
                int full;
                while(true)
                {
                    textcolor(color);
                    cout << player << "\'s turn as "<< element << endl;
                    wasdnormal(data);
                    wasdrotate(data);
                    regularCOMelement(data,'o',&block);
                    regularCOMrotate(data,block);
                    firstPlayerVertical = winCheckVertical(data,'x');
                    firstPlayerHorizontal = winCheckHorizontal(data,'x');
                    firstPlayerDiagonal = winCheckDiagoanl(data,'x');
                    secondPlayerVertical = winCheckVertical(data,'o');
                    secondPlayerHorizontal = winCheckHorizontal(data,'o');
                    secondPlayerDiagonal = winCheckDiagoanl(data,'o');
                    full = fullCheck(data);
                    //----------------------------processing the results of checks
                    checkprocess(&score,&COMscore,firstPlayerVertical,firstPlayerHorizontal,firstPlayerDiagonal,secondPlayerVertical,secondPlayerHorizontal,secondPlayerDiagonal,full);
                    if(score != 0 || COMscore != 0)
                    {
                        break;
                    }
                    //------------------------changing id for next turn
                    if(element == 'x')
                    {
                        player = "COM";
                        element = 'o';
                        color = randomCOMcolor;
                    }
                    else if(element == 'o')
                    {
                        player = playername;
                        element = 'x';
                        color = playercolor;
                    }
                }
                if(score > COMscore)
                {
                    cout << playername << " WON THE GAME\u2728\n";
                }
                else if(score < COMscore)
                {
                    cout <<"COM WON THE GAME\u2728\n";
                }
                else if(score == COMscore)
                {
                    cout << "DRAW\u270B\n";
                }
            }
            else if(hardshipChoiceINT == 3)
            {
                char data[6][7];
                for(int i = 0;i < 6;i++)
                {
                    for(int j = 0;j < 6;j++)
                    {
                        data[i][j] = ' ';
                    }
                }
                int block;
                system("cls");
                //------------------SIMPLE 3 2 1
                textcolor(4);
                Sleep(1000);
                cout << "3";
                Sleep(1000);
                cout << "\r2";
                Sleep(1000);
                cout << "\r1";
                Sleep(1000);
                cout << "\rGO!!!\u2B50";
                Sleep(500);
                system("cls");
                //-----------------------------------------
                string player = playername;
                char element = 'x';
                int color = playercolor;
                int firstPlayerVertical;
                int firstPlayerHorizontal;
                int firstPlayerDiagonal;
                int secondPlayerVertical;
                int secondPlayerHorizontal;
                int secondPlayerDiagonal;
                int full;
                while(true)
                {
                    textcolor(color);
                    cout << player << "\'s turn as "<< element << endl;
                    wasdnormal(data);
                    wasdrotate(data);
                    hardCOMelement(data,'o',&block);
                    hardCOMrotate(data,block);
                    firstPlayerVertical = winCheckVertical(data,'x');
                    firstPlayerHorizontal = winCheckHorizontal(data,'x');
                    firstPlayerDiagonal = winCheckDiagoanl(data,'x');
                    secondPlayerVertical = winCheckVertical(data,'o');
                    secondPlayerHorizontal = winCheckHorizontal(data,'o');
                    secondPlayerDiagonal = winCheckDiagoanl(data,'o');
                    full = fullCheck(data);
                    //----------------------------processing the results of checks
                    checkprocess(&score,&COMscore,firstPlayerVertical,firstPlayerHorizontal,firstPlayerDiagonal,secondPlayerVertical,secondPlayerHorizontal,secondPlayerDiagonal,full);
                    if(score != 0 || COMscore != 0)
                    {
                        break;
                    }
                    //------------------------changing id for next turn
                    if(element == 'x')
                    {
                        player = "COM";
                        element = 'o';
                        color = randomCOMcolor;
                    }
                    else if(element == 'o')
                    {
                        player = playername;
                        element = 'x';
                        color = playercolor;
                    }
                }
                if(score > COMscore)
                {
                    cout << playername << " WON THE GAME\u2728\n";
                }
                else if(score < COMscore)
                {
                    cout <<"COM WON THE GAME\u2728\n";
                }
                else if(score == COMscore)
                {
                    cout << "DRAW\u270B\n";
                }
            }
            //-----------------------------------------------------------writing the scores on the file
            ofstream player_score ("info_scorePVC.txt", ios::app);
            player_score << score << '\n' << COMscore << '\n';
            player_score.close();
            //---------------------------------------------------------
            break;
        }
        //--------------------------------------------------------------------HOW TO
        else if (chosen == '3')
        {
            fakeLoading();
            Beep(1500,1000);
            Beep(500,500);
            textcolor(1);
            cout <<  "The game is played on a 6×6 board divided into four 3×3 sub-boards (or quadrants). \n"
	        <<"Taking turns, the two players place a marble of their color (either black or white) onto an unoccupied space on the board, and then rotate one of the sub-boards by 90 degrees either clockwise or anti-clockwise.\n"
	        <<" This is optional in the beginning of the game, up until every sub-board no longer has rotational symmetry, at which point it becomes mandatory (this is because until then, a player could rotate an empty sub-board or one with just a marble in the middle, either of which has no real effect). \n"
	        <<"A player wins by getting five of their marbles in a vertical, horizontal or diagonal row (either before or after the sub-board rotation in their move). \n"
	        <<"There is also a 3-4 player version called Pentago XL. The board is made of 9 3×3 boards, there are 4 colours (red, yellow, green and blue) instead of the basic 2.\n"
	        <<"The 6×6 version of Pentago has been strongly solved with the help of a Cray supercomputer at NERSC. With symmetries removed, there are 3,009,081,623,421,558 possible positions. If both sides play perfectly, the first player to move will always win the game.\n\n";
            cout << "by the way in the game for moving through the elements of the table use WASD keys on your keyboard.\nW : UP\nS : DOWN\nD : RIGHT\nA : LEFT\n\n";
            cout << "and when you found your ideal element just enter your wanted input and leave the keyboard for your friend without pressing any other key\n\n";
            cout << "press any key to terminate the game\n";
            getch();
	        break;
		}
        //--------------------------------------------------------------------STATS
        else if (chosen == '4')
        {
            fakeLoading();
            Beep(1500,1000);
            Beep(500,500);
            textcolor(6);
            int dataChoice;
            cout << "which sort of data you want to be shown?  ";
            textcolor(10);
            cout << "PLAYER VS PLAYER(enter 1)  ";
            textcolor(11);
            cout << "PLAYER VS COM(enter 2)\n";
            cin >> dataChoice;
            //-----------------------------------------------------------player vs player data
            if(dataChoice == 1)
            {
                string nameArr[100];
                char colorArr[100];
                string scoreArr[100];
                int scoreINT[100];
                string temp;
                char tempchar;
                int i = 0;
                int j = 0;
                int k = 0;
                ifstream playername("info_namePVP.txt", ios::in);
                while (!playername.eof())
                {
                    playername >> temp;
                    nameArr[i] = temp;
                    i++;
                }
                playername.close();
                    ifstream playercolor("info_colorPVP.txt", ios::in);
                while (!playercolor.eof())
                {
                    playercolor >> tempchar;
                    colorArr[j] = tempchar;
                    j++;
                }
                playercolor.close(); 
                ifstream playerscore("info_scorePVP.txt", ios::in);
                while (!playerscore.eof())
                {
                    playerscore >> temp;
                    scoreArr[k] = temp;
                    k++;
                }
                playerscore.close();
                //-------------------------------------
                for(int m = 0;m < i;m++)
                {   
                    stringstream temp(scoreArr[m]);
                    temp >> scoreINT[m];
                }
                //--------------------------------------sorting things out
                for(int n = 0;n < i;n++)
                {
                    for(int o = n; o < i;o++)
                    {
                        if(scoreINT[o+1] < scoreINT[o])
                        {
                            swap(scoreINT[o+1],scoreINT[o]);
                            swap(nameArr[o+1],nameArr[o]);
                            swap(colorArr[o+1],colorArr[o]);
                        }
                    }
                }
                //---------------------------------------------printing the data
                system("cls");
                int intColor;
                for(int m = i;m >= 0;m--)
                {
                    intColor = colorArr[m] - 48;
                    textcolor(intColor);
                    cout << nameArr[m] << ":";
                    textcolor(0);
                    cout << scoreINT[m] << endl; 
                }
                cout << "press any key to terminate the game\n";
                getch();
            }
            else if(dataChoice == 2)
            {
                string nameArr[100];
                char colorArr[100];
                string scoreArr[100];
                int scoreINT[100];
                string temp;
                char tempchar;
                int i = 0;
                int j = 0;
                int k = 0;
                ifstream playername("info_namePVC.txt", ios::in);
                while (!playername.eof())
                {
                    playername >> temp;
                    nameArr[i] = temp;
                    i++;
                }
                playername.close();
                    ifstream playercolor("info_colorPVC.txt", ios::in);
                while (!playercolor.eof())
                {
                    playercolor >> tempchar;
                    colorArr[j] = tempchar;
                    j++;
                }
                playercolor.close(); 
                ifstream playerscore("info_scorePVC.txt", ios::in);
                while (!playerscore.eof())
                {
                    playerscore >> temp;
                    scoreArr[k] = temp;
                    k++;
                }
                playerscore.close();
                //-------------------------------------
                for(int m = 0;m < i;m++)
                {   
                    stringstream temp(scoreArr[m]);
                    temp >> scoreINT[m];
                }
                //--------------------------------------sorting things out
                for(int n = 0;n < i;n++)
                {
                    for(int o = n; o < i;o++)
                    {
                        if(scoreINT[o+1] < scoreINT[o])
                        {
                            swap(scoreINT[o+1],scoreINT[o]);
                            swap(nameArr[o+1],nameArr[o]);
                            swap(colorArr[o+1],colorArr[o]);
                        }
                    }
                }
                //---------------------------------------------printing the data
                system("cls");
                int intColor;
                for(int m = i;m >= 0;m--)
                {
                    intColor = colorArr[m] - 48;
                    textcolor(intColor);
                    cout << nameArr[m] << ":";
                    textcolor(0);
                    cout << scoreINT[m] << endl; 
                }
            }
            cout << "press any key to terminate the game\n";
            getch();
            break;
        }
            //-------------------------------------------------------SETTINGS
        else if(chosen == '5')
        {
            fakeLoading();
            Beep(1500,1000);
            Beep(500,500);
            textcolor(13);
            cout << "choose the difficulty of vs COM mode(1/2/3)\n";
            textcolor(0);
            cout << "\t\u2776";
            textcolor(10);
            cout << "EASY\n";
            textcolor(0);
            cout << "\t\u2777";
            textcolor(6);
            cout << "REGULAR\n";
            textcolor(0);
            cout << "\t\u2778";
            textcolor(12);
            cout << "HARD\n";
            int hardshipChoice;
            ofstream hardshipSettingsWrite("settings.txt",ios::out);
            cin >> hardshipChoice;
            hardshipSettingsWrite << hardshipChoice;
            hardshipSettingsWrite.close();
            char settingsData;
            ifstream hardshipSettingsRead("settings.txt",ios::in);
            textcolor(13);
            cout << "the difficulty is set to: ";
            hardshipSettingsRead >> settingsData;
            if(settingsData == '1')
            {
                textcolor(10);
                cout << "EASY\n";
            }
            else if(settingsData == '2')
            {
                textcolor(6);
                cout << "REGULAR\n";
            }
            else if(settingsData == '3')
            {
                textcolor(12);
                cout << "HARD\n";
            }
            textcolor(13);
            cout << "press any key to go out of this section";
            getch();
            Beep(2000,300);
            Beep(2000,200);
            break;
        }
         //-----------------------------------------------------------EXIT
        else if (chosen == '6')
        {
            Beep(1500,1000);
            Beep(500,500);
            char yes[] = "YES";
            char no[] = "NO";
            char end[4];
            textcolor(3);
            cout << "you really want to quit\u2753";
            textcolor(12);
            cout << "YES  ";
            textcolor(0);
            cout << "or  ";
            textcolor(10);
            cout << "NO  \n";
            scanf("%s",&end);
            int compare1 = strcmp(yes,end);
            int compare2 = strcmp(no,end);
            if(compare1 == 0)
            {
               textcolor(3);
               cout << "WE,THE DEVELOPERS HOPE YOU ENJOYED OUR GAME.COMEBACK SOON.WE ARE ALWAYS READY TO PLAY.TATA \u2764";
               Beep(2000,300);
               Beep(2000,200);
               exit(1);
            }
            else if(compare2 == 0)
            {
                Beep(1000,2000);
                textcolor(10);
                cout << "THANKS\u2728\nHERE WE GO AGAIN\n";
                continue;
            }
            else 
            {
                textcolor(12);
                Beep(1000000,100);
                cout << " WARRNING\u274C: WRONG INPUT!PRESS ANY KEY TERMINATE THE GAME";
                getch();
                exit(1);
            }
        }
        //-------------------------------------------------------------------------
        else
        {
            Beep(1000000,100);
            textcolor(4);
            cout << "WARRNING : YOU SHOULD CHOOSE ONE OF GIVEN NUMBERS FROM 1 TO 4 ....NOTHING ELSE \n";
            continue;
        }
    }
    return 0;
}
//------------------------------------------------the body of the used functions are listed down below
//------------------------------------- text color function
void textcolor(int color) 
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (color + (7 * 16)));
}
//----------------------------------------------------- defining a function to check a column
int columnCheck(char arr[][7],char index,int columnNum)
{
    int winCheck = 0;
    for(int i = 0;i < 5;i++)
    {
        if(arr[i][columnNum] == index)
        {
            winCheck++;
        }
    }
    if(winCheck == 5)
    {
        return 1;
    }
    else
    {
        winCheck = 0;
    }
    //-----------------------------------------
    for(int i = 1;i < 6;i++)
    {
        if(arr[i][columnNum] == index)
        {
            winCheck++;
        }
    }
    if(winCheck == 5)
    {
        return 1;
    }
    else
    {
        winCheck = 0;
    }
    //-----------------------------------
    return 0;
}
//---------------------------------------------------defining a function to check vertically
int winCheckVertical(char arr[][7],char index)
{
    int winCheck;
    //------------------------------------column 1
    winCheck = columnCheck(arr,index,0);
    if(winCheck == 1) {return 1;}
    //------------------------------------column 2
    winCheck = columnCheck(arr,index,1);
    if(winCheck == 1) {return 1;}
    //------------------------------------column 3
    winCheck = columnCheck(arr,index,2);
    if(winCheck == 1) {return 1;}
    //------------------------------------column 4
    winCheck = columnCheck(arr,index,3);
    if(winCheck == 1) {return 1;}
    //------------------------------------column 5
    winCheck = columnCheck(arr,index,4);
    if(winCheck == 1) {return 1;}
    //------------------------------------column 6
    winCheck = columnCheck(arr,index,5);
    if(winCheck == 1) {return 1;}
    //-------------------------------------------
    return 0;
}
//---------------------------------------------------- defining a function to check each row
int rowCheck(char arr[][7],char index,int rowNum)
{
    int winCheck = 0;
    for(int i = 0;i < 5;i++)
    {
        if(arr[rowNum][i] == index)
        {
            winCheck++;
        }
    }
    if(winCheck == 5)
    {
        return 1;
    }
    else
    {
        winCheck = 0;
    }
    //--------------------------------------
    for(int i = 1;i < 6;i++)
    {
        if(arr[rowNum][i] == index)
        {
            winCheck++;
        }
    }
    if(winCheck == 5)
    {
        return 1;
    }
    else
    {
        winCheck = 0;
    }
    //-----------------------------------
    return 0;
}
//--------------------------------------------------defining a function to check horizontally
int winCheckHorizontal(char arr[][7],char index)
{
    int winCheck;
    //------------------------------------row 1
    winCheck = rowCheck(arr,index,0);
    if(winCheck == 1) {return 1;}
    //------------------------------------row 2
    winCheck = rowCheck(arr,index,1);
    if(winCheck == 1) {return 1;}
    //------------------------------------row 3
    winCheck = rowCheck(arr,index,2);
    if(winCheck == 1) {return 1;}
    //------------------------------------row 4
    winCheck = rowCheck(arr,index,3);
    if(winCheck == 1) {return 1;}
    //------------------------------------row 5
    winCheck = rowCheck(arr,index,4);
    if(winCheck == 1) {return 1;}
    //------------------------------------row 6
    winCheck = rowCheck(arr,index,5);
    if(winCheck == 1) {return 1;}
    //-------------------------------------------
    return 0;
}
//--------------------------------------------------defining a function to check each diagonal ++
int diagonalCheckPLUSPLUS(char arr[][7],char index,int rowNum,int columnNum)
{
    int winCheck = 0;
    while(rowNum < 6)
    {
        if(arr[rowNum][columnNum] == index)
        {
            winCheck++;
        }
        rowNum++;
        columnNum++;
    }
    if(winCheck == 5) {return 1;}
    //-----------------------------------
    return 0;
}
//--------------------------------------------------defining a function to check each diagonal +-
int diagonalCheckPLUSMINUS(char arr[][7],char index,int rowNum,int columnNum)
{
    int winCheck = 0;
    while(rowNum < 6)
    {
        if(arr[rowNum][columnNum] == index)
        {
            winCheck++;
        }
        rowNum++;
        columnNum--;
    }
    if(winCheck == 5) {return 1;}
    //-----------------------------------
    return 0;
}
//--------------------------------------------------defining a function to check each diagonal -+
int diagonalCheckMINUSPLUS(char arr[][7],char index,int rowNum,int columnNum)
{
    int winCheck = 0;
    while(rowNum >= 0)
    {
        if(arr[rowNum][columnNum] == index)
        {
            winCheck++;
        }
        rowNum--;
        columnNum++;
    }
    if(winCheck == 5) {return 1;}
    //-----------------------------------
    return 0;
}
//--------------------------------------------------defining a function to check each diagonal --
int diagonalCheckMINUSMINUS(char arr[][7],char index,int rowNum,int columnNum)
{
    int winCheck = 0;
    while(rowNum >= 0)
    {
        if(arr[rowNum][columnNum] == index)
        {
            winCheck++;
        }
        rowNum--;
        columnNum--;
    }
    if(winCheck == 5) {return 1;}
    //-----------------------------------
    return 0;
}
//---------------------------------------------defining a function to check diagonally
int winCheckDiagoanl(char arr[][7],char index)
{   
    int winCheck;
    //------------------------------------------top left 
    winCheck = diagonalCheckPLUSPLUS(arr,index,0,0);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckPLUSPLUS(arr,index,0,1);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckPLUSPLUS(arr,index,1,0);
    if(winCheck == 1) {return 1;}
    //-----------------------------------------down left
    winCheck = diagonalCheckMINUSPLUS(arr,index,5,0);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckMINUSPLUS(arr,index,4,0);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckMINUSPLUS(arr,index,5,1);
    if(winCheck == 1) {return 1;}
    //-----------------------------------------top right
    winCheck = diagonalCheckPLUSMINUS(arr,index,0,5);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckPLUSMINUS(arr,index,1,5);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckPLUSMINUS(arr,index,0,4);
    if(winCheck == 1) {return 1;}
    //-----------------------------------------down right
    winCheck = diagonalCheckMINUSMINUS(arr,index,5,0);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckMINUSMINUS(arr,index,4,0);
    if(winCheck == 1) {return 1;}
    winCheck = diagonalCheckMINUSMINUS(arr,index,5,1);
    if(winCheck == 1) {return 1;}
    //---------------------------------------
    return 0; 
}
//----------------------------------------------------------------defining a function to check whether all the elements off the array are full or not
int fullCheck(char arr[][7])
{
    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            if(arr[i][j] == 32)
            {
                return 0;
            }
        }
    }
    return 1;
}
//-------------------------------------------------------------------defining a function to rotate left
void rotateLeft(char arr[][7],int iOfTopLeft,int jOfTopLeft)
{
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft+2][jOfTopLeft]);
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft+2][jOfTopLeft+2]);
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft][jOfTopLeft+2]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+1][jOfTopLeft]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+2][jOfTopLeft+1]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+1][jOfTopLeft+2]);
}
//--------------------------------------------------------------------defining a function to rotate right
void rotateRight(char arr[][7],int iOfTopLeft,int jOfTopLeft)
{
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft][jOfTopLeft+2]);
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft+2][jOfTopLeft+2]);
    swap(arr[iOfTopLeft][jOfTopLeft],arr[iOfTopLeft+2][jOfTopLeft]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+1][jOfTopLeft+2]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+2][jOfTopLeft+1]);
    swap(arr[iOfTopLeft][jOfTopLeft+1],arr[iOfTopLeft+1][jOfTopLeft]);
}
//--------------------------------------------------------------------------------easy com element
void easyCOMelement(char arr[][7])
{
    srand(time(NULL));
    int randomRow;
    bool findSpace = false;
    while(findSpace == false)
    {
        randomRow = rand() % 6;
        for(int i = 0;i < 6;i++)
        {
            if(arr[randomRow][i] == ' ')
            {
                arr[randomRow][i] = 'o';
                findSpace = true;
                break;
            }
        }
    }
}
//------------------------------------------------------------------easy COM rotate
void easyCOMrotate(char arr[][7])
{
    int startingpoint[2];
    startingpoint[0] = 0;
    startingpoint[1] = 3;
    int randomBlocki;
    int randomBlockj;
    srand(time(NULL));
    int randomTurn = rand() % 2;
    if(randomTurn == 0)
    {
        randomBlocki = rand() % 2;
        randomBlockj = rand() % 2;
        rotateRight(arr,startingpoint[randomBlocki],startingpoint[randomBlockj]);
        return;
    }
    else if(randomTurn == 1)
    {
        randomBlocki = rand() % 2;
        randomBlockj = rand() % 2;
        rotateLeft(arr,startingpoint[randomBlocki],startingpoint[randomBlockj]);
        return;
    }
}
//-----------------------------------------------------------------------------------------regular com element
void regularCOMelement(char arr[][7],char index,int * block)
{
    //------------------------------------------------------------------monica's five
    if(arr[0][0] == ' ' && arr[1][1] == ' ' && arr[2][2] == ' ')
    {
        arr[0][0] = index;
        *block = 1;
        return;
    }
    else if(arr[0][0] == index && arr[1][1] == ' ' && arr[2][2] == ' ')
    {
        arr[1][1] = index;
        *block = 1;
        return;
    }
    else if(arr[0][0] == index && arr[1][1] == index && arr[2][2] == ' ')
    {
        arr[2][2] = index;
        *block = 1;
        return;
    }
    //-----------------------------------------------------------------
    if(arr[0][5] == ' ' && arr[1][4] == ' ' && arr[2][3] == ' ')
    {
        arr[0][5] = index;
        *block = 2;
        return;
    }
    else if(arr[0][5] == index && arr[1][4] == ' ' && arr[2][3] == ' ')
    {
        arr[1][4] = index;
        *block = 2;
        return;
    }
    else if(arr[0][5] == index && arr[1][4] == index && arr[2][3] == ' ')
    {
        arr[2][3] = index;
        *block = 2;
        return;
    }
    //-------------------------------------------------------------------------
    if(arr[5][0] == ' ' && arr[4][1] == ' ' && arr[3][2] == ' ')
    {
        arr[5][0] = index;
        *block = 3;
        return;
    }
    else if(arr[5][0] == index && arr[4][1] == ' ' && arr[3][2] == ' ')
    {
        arr[4][1] = index;
        *block = 3;
        return;
    }
    else if(arr[0][5] == index && arr[4][1] == index && arr[3][2] == ' ')
    {
        arr[3][2] = index;
        *block = 3;
        return;
    }
    //----------------------------------------------------------------------------
    if(arr[5][5] == ' ' && arr[4][4] == ' ' && arr[3][3] == ' ')
    {
        arr[5][5] = index;
        *block = 4;
        return;
    }
    else if(arr[5][5] == index && arr[4][4] == ' ' && arr[3][3] == ' ')
    {
        arr[4][4] = index;
        *block = 4;
        return;
    }
    else if(arr[5][5] == index && arr[4][4] == index && arr[3][3] == ' ')
    {
        arr[3][3] = index;
        *block = 4;
        return;
    }
    //--------------------------------------------------------------if not any of that then random comes in
    easyCOMelement(arr);
    return;
}
//-----------------------------------------------------------------defining a function to COM rotate
void regularCOMrotate(char arr[][7],int block)
{
    srand(time(NULL));
    int randomTurn = rand() % 2;
    if(randomTurn == 0)
    {
        if(block == 1)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 2)
        {
             rotateRight(arr,3,0);
            return;
        }
        else if(block == 3)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 4)
        {
            rotateRight(arr,0,0);
            return;
        }
    }
    else if(randomTurn == 1)
    {
        if(block == 1)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 2)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 3)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 4)
        {
            rotateLeft(arr,0,0);
            return;
        }
    }
}
//-----------------------------------------------------------------------------hard com element
void hardCOMelement(char arr[][7],char index,int * block)
{
    //------------------------------------------------------------------monica's five
    if(arr[0][0] == ' ' && arr[1][1] == ' ' && arr[2][2] == ' ')
    {
        arr[0][0] = index;
        *block = 1;
        return;
    }
    else if(arr[0][0] == index && arr[1][1] == ' ' && arr[2][2] == ' ')
    {
        arr[1][1] = index;
        *block = 1;
        return;
    }
    else if(arr[0][0] == index && arr[1][1] == index && arr[2][2] == ' ')
    {
        arr[2][2] = index;
        *block = 1;
        return;
    }
    //-----------------------------------------------------------------
    if(arr[0][5] == ' ' && arr[1][4] == ' ' && arr[2][3] == ' ')
    {
        arr[0][5] = index;
        *block = 2;
        return;
    }
    else if(arr[0][5] == index && arr[1][4] == ' ' && arr[2][3] == ' ')
    {
        arr[1][4] = index;
        *block = 2;
        return;
    }
    else if(arr[0][5] == index && arr[1][4] == index && arr[2][3] == ' ')
    {
        arr[2][3] = index;
        *block = 2;
        return;
    }
    //-------------------------------------------------------------------------
    if(arr[5][0] == ' ' && arr[4][1] == ' ' && arr[3][2] == ' ')
    {
        arr[5][0] = index;
        *block = 3;
        return;
    }
    else if(arr[5][0] == index && arr[4][1] == ' ' && arr[3][2] == ' ')
    {
        arr[4][1] = index;
        *block = 3;
        return;
    }
    else if(arr[0][5] == index && arr[4][1] == index && arr[3][2] == ' ')
    {
        arr[3][2] = index;
        *block = 3;
        return;
    }
    //----------------------------------------------------------------------------
    if(arr[5][5] == ' ' && arr[4][4] == ' ' && arr[3][3] == ' ')
    {
        arr[5][5] = index;
        *block = 4;
        return;
    }
    else if(arr[5][5] == index && arr[4][4] == ' ' && arr[3][3] == ' ')
    {
        arr[4][4] = index;
        *block = 4;
        return;
    }
    else if(arr[5][5] == index && arr[4][4] == index && arr[3][3] == ' ')
    {
        arr[3][3] = index;
        *block = 4;
        return;
    }
    //-----------------------------------------------------------------------------------power play 1
    if(arr[0][1] == ' ' && arr[1][2] == ' ' && arr[2][3] == ' ')
    {
        arr[0][1] = index;
        *block = 5;
        return;
    }
    else if(arr[0][1] == index && arr[1][2] == ' ' && arr[2][3] == ' ')
    {
        arr[1][2] = index;
        *block = 5;
        return;
    }
    else if(arr[0][1] == index && arr[1][2] == index && arr[2][3] == ' ')
    {
        arr[2][3] = index;
        *block = 5;
        return;
    }
    //---------------------------------------------------------------------------------
    if(arr[0][4] == ' ' && arr[1][3] == ' ' && arr[2][2] == ' ')
    {
        arr[0][4] = index;
        *block = 6;
        return;
    }
    else if(arr[0][4] == index && arr[1][3] == ' ' && arr[2][2] == ' ')
    {
        arr[1][2] = index;
        *block = 6;
        return;
    }
    else if(arr[0][4] == index && arr[1][3] == index && arr[2][2] == ' ')
    {
        arr[2][3] = index;
        *block = 6;
        return;
    }
    //---------------------------------------------------------------------------------
    if(arr[5][1] == ' ' && arr[4][2] == ' ' && arr[3][3] == ' ')
    {
        arr[5][1] = index;
        *block = 7;
        return;
    }
    else if(arr[5][1] == index && arr[4][2] == ' ' && arr[3][3] == ' ')
    {
        arr[4][2] = index;
        *block = 7;
        return;
    }
    else if(arr[5][1] == index && arr[4][2] == index && arr[3][3] == ' ')
    {
        arr[3][3] = index;
        *block = 7;
        return;
    }
    //---------------------------------------------------------------------------------middle straight
    if(arr[0][1] == ' ' && arr[1][1] == ' ' && arr[2][1] == ' ')
    {
        arr[0][1] = index;
        *block = 8;
        return;
    }
    else if(arr[0][1] == index && arr[1][1] == ' ' && arr[2][1] == ' ')
    {
        arr[1][1] = index;
        *block = 8;
        return;
    }
    else if(arr[0][1] == index && arr[1][1] == index && arr[2][1] == ' ')
    {
        arr[2][1] = index;
        *block = 8;
        return;
    }
    //---------------------------------------------------------------------------
    if(arr[0][4] == ' ' && arr[1][4] == ' ' && arr[2][4] == ' ')
    {
        arr[0][4] = index;
        *block = 9;
        return;
    }
    else if(arr[0][4] == index && arr[1][4] == ' ' && arr[2][4] == ' ')
    {
        arr[1][4] = index;
        *block = 9;
        return;
    }
    else if(arr[0][4] == index && arr[1][4] == index && arr[2][4] == ' ')
    {
        arr[2][4] = index;
        *block = 9;
        return;
    }
    //--------------------------------------------------------------------------------
    if(arr[3][1] == ' ' && arr[4][1] == ' ' && arr[5][1] == ' ')
    {
        arr[3][1] = index;
        *block = 10;
        return;
    }
    else if(arr[3][1] == index && arr[4][1] == ' ' && arr[5][1] == ' ')
    {
        arr[4][1] = index;
        *block = 10;
        return;
    }
    else if(arr[3][1] == index && arr[4][1] == index && arr[5][1] == ' ')
    {
        arr[5][1] = index;
        *block = 10;
        return;
    }
    //------------------------------------------------------------------------------
    if(arr[3][4] == ' ' && arr[4][4] == ' ' && arr[5][4] == ' ')
    {
        arr[3][4] = index;
        *block = 11;
        return;
    }
    else if(arr[3][4] == index && arr[4][4] == ' ' && arr[5][4] == ' ')
    {
        arr[4][4] = index;
        *block = 11;
        return;
    }
    else if(arr[3][4] == index && arr[4][4] == index && arr[5][4] == ' ')
    {
        arr[5][4] = index;
        *block = 11;
        return;
    }
    //-------------------------------------------------------------------------------------------sides straight
    if(arr[0][0] == ' ' && arr[1][0] == ' ' && arr[2][0] == ' ')
    {
        arr[0][0] = index;
        *block = 12;
        return;
    }
    else if(arr[0][0] == index && arr[1][0] == ' ' && arr[2][0] == ' ')
    {
        arr[1][0] = index;
        *block = 12;
        return;
    }
    else if(arr[0][0] == index && arr[1][0] == index && arr[2][0] == ' ')
    {
        arr[2][0] = index;
        *block = 12;
        return;
    }
    //-------------------------------------------------------------------------------------
     if(arr[0][2] == ' ' && arr[1][2] == ' ' && arr[2][2] == ' ')
    {
        arr[0][2] = index;
        *block = 13;
        return;
    }
    else if(arr[0][2] == index && arr[1][2] == ' ' && arr[2][2] == ' ')
    {
        arr[1][2] = index;
        *block = 13;
        return;
    }
    else if(arr[0][2] == index && arr[1][2] == index && arr[2][2] == ' ')
    {
        arr[2][2] = index;
        *block = 13;
        return;
    }
    //------------------------------------------------------------------------------------
    if(arr[3][0] == ' ' && arr[4][0] == ' ' && arr[5][0] == ' ')
    {
        arr[3][0] = index;
        *block = 14;
        return;
    }
    else if(arr[3][0] == index && arr[4][0] == ' ' && arr[5][0] == ' ')
    {
        arr[4][0] = index;
        *block = 14;
        return;
    }
    else if(arr[3][0] == index && arr[4][0] == index && arr[5][0] == ' ')
    {
        arr[5][0] = index;
        *block = 14;
        return;
    }
    //---------------------------------------------------------------------------------------
    if(arr[3][2] == ' ' && arr[4][2] == ' ' && arr[5][2] == ' ')
    {
        arr[3][2] = index;
        *block = 15;
        return;
    }
    else if(arr[3][2] == index && arr[4][2] == ' ' && arr[5][2] == ' ')
    {
        arr[4][2] = index;
        *block = 15;
        return;
    }
    else if(arr[3][2] == index && arr[4][2] == index && arr[5][2] == ' ')
    {
        arr[5][2] = index;
        *block = 15;
        return;
    }
    //--------------------------------------------------------------------------
    if(arr[3][3] == ' ' && arr[4][3] == ' ' && arr[5][3] == ' ')
    {
        arr[3][3] = index;
        *block = 16;
        return;
    }
    else if(arr[3][3] == index && arr[4][3] == ' ' && arr[5][3] == ' ')
    {
        arr[4][3] = index;
        *block = 16;
        return;
    }
    else if(arr[3][3] == index && arr[4][3] == index && arr[5][3] == ' ')
    {
        arr[5][3] = index;
        *block = 16;
        return;
    }
    //------------------------------------------------------------------------------
    if(arr[3][2] == ' ' && arr[4][2] == ' ' && arr[5][2] == ' ')
    {
        arr[3][2] = index;
        *block = 17;
        return;
    }
    else if(arr[3][2] == index && arr[4][2] == ' ' && arr[5][2] == ' ')
    {
        arr[4][2] = index;
        *block = 17;
        return;
    }
    else if(arr[3][2] == index && arr[4][2] == index && arr[5][2] == ' ')
    {
        arr[5][2] = index;
        *block = 17;
        return;
    }
    //-------------------------------------------------------------------------------- power play part 2
    if(arr[1][0] == ' ' && arr[2][1] == ' ' && arr[3][2] == ' ')
    {
        arr[1][0] = index;
        *block = 18;
        return;
    }
    else if(arr[1][0] == index && arr[2][1] == ' ' && arr[3][2] == ' ')
    {
        arr[2][1] = index;
        *block = 18;
        return;
    }
    else if(arr[1][0] == index && arr[2][1] == index && arr[3][2] == ' ')
    {
        arr[3][2] = index;
        *block = 18;
        return;
    }
    //------------------------------------------------------------------------------
    if(arr[1][5] == ' ' && arr[2][4] == ' ' && arr[3][3] == ' ')
    {
        arr[1][5] = index;
        *block = 19;
        return;
    }
    else if(arr[1][5] == index && arr[2][4] == ' ' && arr[3][3] == ' ')
    {
        arr[2][4] = index;
        *block = 19;
        return;
    }
    else if(arr[1][5] == index && arr[2][4] == index && arr[3][3] == ' ')
    {
        arr[3][3] = index;
        *block = 19;
        return;
    }
    //----------------------------------------------------------------------------
    if(arr[4][0] == ' ' && arr[3][1] == ' ' && arr[2][2] == ' ')
    {
        arr[4][0] = index;
        *block = 20;
        return;
    }
    else if(arr[4][0] == index && arr[3][1] == ' ' && arr[2][2] == ' ')
    {
        arr[3][1] = index;
        *block = 20;
        return;
    }
    else if(arr[4][0] == index && arr[3][1] == index && arr[2][2] == ' ')
    {
        arr[2][2] = index;
        *block = 20;
        return;
    }
    //-----------------------------------------------------------------------------
    if(arr[4][5] == ' ' && arr[3][4] == ' ' && arr[2][3] == ' ')
    {
        arr[4][5] = index;
        *block = 21;
        return;
    }
    else if(arr[4][5] == index && arr[3][4] == ' ' && arr[2][3] == ' ')
    {
        arr[3][4] = index;
        *block = 21;
        return;
    }
    else if(arr[4][5] == index && arr[3][4] == index && arr[2][3] == ' ')
    {
        arr[2][3] = index;
        *block = 21;
        return;
    }
    //------------------------------------------------------------------------------
    easyCOMelement(arr);
    return;
}
//-----------------------------------------------------------------------------------hard com rotate
void hardCOMrotate(char arr[][7],int block)
{
    srand(time(NULL));
    int randomTurn = rand() % 2;
    if(randomTurn == 0)
    {
        if(block == 1)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 2)
        {
             rotateRight(arr,3,0);
            return;
        }
        else if(block == 3)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 4)
        {
            rotateRight(arr,0,0);
            return;
        }
        else if(block == 5)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 6)
        {
             rotateRight(arr,3,0);
            return;
        }
        else if(block == 7)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 8)
        {
            rotateRight(arr,3,0);
            return;
        }
        else if(block == 9)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 10)
        {
            rotateRight(arr,0,0);
            return;
        }
        else if(block == 11)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 12)
        {
            rotateRight(arr,3,0);
            return;
        }
        else if(block == 13)
        {
            rotateRight(arr,3,0);
            return;
        }
        else if(block == 14)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 15)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 15)
        {
            rotateRight(arr,0,0);
            return;
        }
        else if(block == 16)
        {
            rotateRight(arr,0,0);
            return;
        }
        else if(block == 16)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 17)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 18)
        {
            rotateRight(arr,3,3);
            return;
        }
        else if(block == 19)
        {
             rotateRight(arr,3,0);
            return;
        }
        else if(block == 20)
        {
            rotateRight(arr,0,3);
            return;
        }
        else if(block == 21)
        {
            rotateRight(arr,0,0);
            return;
        }
    }
    else if(randomTurn == 1)
    {
        if(block == 1)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 2)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 3)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 4)
        {
            rotateLeft(arr,0,0);
            return;
        }
        else if(block == 5)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 6)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 7)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 8)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 9)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 10)
        {
            rotateLeft(arr,0,0);
            return;
        }
        else if(block == 11)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 12)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 13)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 14)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 15)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 15)
        {
            rotateLeft(arr,0,0);
            return;
        }
        else if(block == 16)
        {
            rotateLeft(arr,0,0);
            return;
        }
        else if(block == 16)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 17)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 18)
        {
            rotateLeft(arr,3,3);
            return;
        }
        else if(block == 19)
        {
            rotateLeft(arr,3,0);
            return;
        }
        else if(block == 20)
        {
            rotateLeft(arr,0,3);
            return;
        }
        else if(block == 21)
        {
            rotateLeft(arr,0,0);
            return;
        }
    }
}
//-------------------------------------------fake loading function
void fakeLoading()
{
    textcolor(0);
    cout << "loading";
    textcolor(4);
    Sleep(600);
    cout << ".";
    Sleep(600);
    cout << ".";
    Sleep(600);
    cout << ".";
    Sleep(600);
    cout << ".";
    Sleep(600);
    cout << ".";
    Sleep(600);
    cout << ".\r";
}
//------------------------------------------------------------------------------------------------------------------functio to print a row of the box normally
void rowPrintnormal(string arr[][20],int row,char data1,char data2,char data3,char data4,char data5,char data6)
{
    textcolor(0);
    arr[row][0] = " ";
    cout << arr[row][0];
    int i = 1;
    //---------------------------first square
    arr[row][i] = "\u2503";
    arr[row][i+1] = data1;
    arr[row][i+2] = "\u2503";
    //------------------------------second square
    i = 4;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data2;
    arr[row][i+2] = "\u2503";
    //-----------------------------third square
    i = 7;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data3;
    arr[row][i+2] = "\u2503";
    //-----------------------------the vertical char in between the two major squares
    arr[row][10] = "\u254E";
    //-----------------------------fourth square
    i = 11;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data4;
    arr[row][i+2] = "\u2503";
    //------------------------------fifth square
    i = 14;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data5;
    arr[row][i+2] = "\u2503";
    //-----------------------------sixth square
    i = 17;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data6;
    arr[row][i+2] = "\u2503";
    //------------------------------printing the entire row    
    for(int i = 1; i < 20 ; i++)
    cout << arr[row][i];
    cout << endl;
}
//--------------------------------------------------------------------------function to print a row with arrow
void rowPrintARROW(string arr[][20],int row,char data1,char data2,char data3,char data4,char data5,char data6)
{
    textcolor(0);
    arr[row][0] = "\u21DB";
    cout << arr[row][0];
    int i = 1;
    //---------------------------first square
    arr[row][i] = "\u2503";
    arr[row][i+1] = data1;
    arr[row][i+2] = "\u2503";
    //------------------------------second square
    i = 4;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data2;
    arr[row][i+2] = "\u2503";
    //-----------------------------third square
    i = 7;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data3;
    arr[row][i+2] = "\u2503";
    //-----------------------------the vertical char in between the two major squares
    arr[row][10] = "\u254E";
    //-----------------------------fourth square
    i = 11;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data4;
    arr[row][i+2] = "\u2503";
    //------------------------------fifth square
    i = 14;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data5;
    arr[row][i+2] = "\u2503";
    //-----------------------------sixth square
    i = 17;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data6;
    arr[row][i+2] = "\u2503";
    //------------------------------printing the entire row    
    for(int i = 1; i < 20 ; i++)
    cout << arr[row][i];
    cout << endl;
}
//-------------------------------------------------function defined for printing a row of the box when choose rotation with an arrow on its left side
void rotatePrintARROWleft(string arr[][20],int row,char data1,char data2,char data3,char data4,char data5,char data6)
{
    textcolor(0);
    arr[row][0] = "\u21DB";
    cout << arr[row][0];
    int i = 1;
    //---------------------------first square
    arr[row][i] = "\u2503";
    arr[row][i+1] = data1;
    arr[row][i+2] = "\u2503";
    //------------------------------second square
    i = 4;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data2;
    arr[row][i+2] = "\u2503";
    //-----------------------------third square
    i = 7;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data3;
    arr[row][i+2] = "\u2503";
    //-----------------------------the vertical char in between the two major squares
    arr[row][10] = "\u254E";
    //-----------------------------fourth square
    i = 11;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data4;
    arr[row][i+2] = "\u2503";
    //------------------------------fifth square
    i = 14;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data5;
    arr[row][i+2] = "\u2503";
    //-----------------------------sixth square
    i = 17;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data6;
    arr[row][i+2] = "\u2503";
    //------------------------------printing the entire row    
    for(int i = 1; i < 20 ; i++)
    cout << arr[row][i];
    cout << endl;
}
//-------------------------------------------------function defined for printing a row of the box when choose rotation with an arrow on its right side
void rotatePrintARROWright(string arr[][20],int row,char data1,char data2,char data3,char data4,char data5,char data6)
{
    textcolor(0);
    arr[row][0] = "\u2503";
    cout << arr[row][0];
    int i = 1;
    //---------------------------first square
    arr[row][i] = "\u2503";
    arr[row][i+1] = data1;
    arr[row][i+2] = "\u2503";
    //------------------------------second square
    i = 4;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data2;
    arr[row][i+2] = "\u2503";
    //-----------------------------third square
    i = 7;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data3;
    arr[row][i+2] = "\u2503";
    //-----------------------------the vertical char in between the two major squares
    arr[row][10] = "\u254E";
    //-----------------------------fourth square
    i = 11;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data4;
    arr[row][i+2] = "\u2503";
    //------------------------------fifth square
    i = 14;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data5;
    arr[row][i+2] = "\u2503";
    //-----------------------------sixth square
    i = 17;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data6;
    arr[row][i+2] = "\u2503";
    //------------------------------printing the entire row    
    for(int i = 1; i < 20 ; i++)
    cout << arr[row][i];
    cout << "\u21DA" << endl;
}
//-------------------------------------------------------function to print a plain row in rotatation mode
void rotatePrintplain(string arr[][20],int row,char data1,char data2,char data3,char data4,char data5,char data6)
{
    textcolor(0);
    arr[row][0] = "\u2503";
    cout << arr[row][0];
    int i = 1;
    //---------------------------first square
    arr[row][i] = "\u2503";
    arr[row][i+1] = data1;
    arr[row][i+2] = "\u2503";
    //------------------------------second square
    i = 4;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data2;
    arr[row][i+2] = "\u2503";
    //-----------------------------third square
    i = 7;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data3;
    arr[row][i+2] = "\u2503";
    //-----------------------------the vertical char in between the two major squares
    arr[row][10] = "\u254E";
    //-----------------------------fourth square
    i = 11;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data4;
    arr[row][i+2] = "\u2503";
    //------------------------------fifth square
    i = 14;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data5;
    arr[row][i+2] = "\u2503";
    //-----------------------------sixth square
    i = 17;
    arr[row][i] = "\u2503";
    arr[row][i+1] = data6;
    arr[row][i+2] = "\u2503";
    //------------------------------printing the entire row    
    for(int i = 1; i < 20 ; i++)
    cout << arr[row][i];
    cout << "\u2503" <<endl;
}
//----------------------------------------------function to print the arrow which moves on the columns
void columnARROW(int arrowPOS)
{
    textcolor(0);
    if(arrowPOS <= 2)
    {
        if(arrowPOS == 0)
        {
            for(int i = 0;i < 2;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
        if(arrowPOS == 1)
        {
            for(int i = 0;i < 5;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
        if(arrowPOS == 2)
        {
            for(int i = 0;i < 8;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
    }
    else if(arrowPOS > 2)
    {
        if(arrowPOS == 3)
        {
            for(int i = 0;i < 12;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
        if(arrowPOS == 4)
        {
            for(int i = 0;i < 15;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
        if(arrowPOS == 5)
        {
            for(int i = 0;i < 18;i++)
            {
                cout << " ";
            }
            cout << "\u21ED" << endl;
            return;
        }
    }
}
//------------------------------------------------------------normal box print
void boxnormal(char data[][7],int arrowPOS)
{
    textcolor(0);
    string arr[19][20];
    //---------------------------------
    for(int i = 0; i < 10; i++)
    arr[0][i] = " ";
    arr[0][10] = "\u254E";
    for(int i = 11; i < 20 ; i++)
    arr[0][i] = " ";
    for(int i = 0; i < 20; i++)
    cout << arr[0][i];
    cout << endl;
    //------------------------------the code above for row 0
    arr[1][0] = " ";
    cout << arr[1][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[1][i] = "\u250C";
        arr[1][i+1] = "\u2500";
        arr[1][i+2] = "\u2510";
    }
    arr[1][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[1][i] = "\u250C";
    arr[1][i+1] = "\u2500";
    arr[1][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[1][i];
    cout << endl;
    //------------------------------the code above for row 1
    if(arrowPOS == 0)
    {
        rowPrintARROW(arr,2,data[0][0],data[0][1],data[0][2],data[0][3],data[0][4],data[0][5]);
    }
    else
    {
        rowPrintnormal(arr,2,data[0][0],data[0][1],data[0][2],data[0][3],data[0][4],data[0][5]);
    }
    //------------------------------the code above for row 2
    arr[3][0] = " ";
    cout << arr[3][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[3][i] = "\u2514";
        arr[3][i+1] = "\u2500";
        arr[3][i+2] = "\u2518";
    }
    arr[3][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[3][i] = "\u2514";
     arr[3][i+1] = "\u2500";
     arr[3][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[3][i];
    cout << endl;
    //------------------------------the code above for row 3
    arr[4][0] = " ";
    cout << arr[4][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[4][i] = "\u250C";
        arr[4][i+1] = "\u2500";
        arr[4][i+2] = "\u2510";
    }
    arr[4][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[4][i] = "\u250C";
    arr[4][i+1] = "\u2500";
    arr[4][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[4][i];
    cout << endl;
    //------------------------------the code above for row 4
    if(arrowPOS == 1)
    {
        rowPrintARROW(arr,5,data[1][0],data[1][1],data[1][2],data[1][3],data[1][4],data[1][5]);
    }
    else
    {
        rowPrintnormal(arr,5,data[1][0],data[1][1],data[1][2],data[1][3],data[1][4],data[1][5]);
    }
    //------------------------------the code above for row 5
    arr[6][0] = " ";
    cout << arr[6][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[6][i] = "\u2514";
        arr[6][i+1] = "\u2500";
        arr[6][i+2] = "\u2518";
    }
    arr[6][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[6][i] = "\u2514";
     arr[6][i+1] = "\u2500";
     arr[6][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[6][i];
    cout << endl;
    //------------------------------the code above for row 6
    arr[7][0] = " ";
    cout << arr[7][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[7][i] = "\u250C";
        arr[7][i+1] = "\u2500";
        arr[7][i+2] = "\u2510";
    }
    arr[7][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[7][i] = "\u250C";
    arr[7][i+1] = "\u2500";
    arr[7][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[7][i];
    cout << endl;
    //------------------------------the code above for row 7
    if(arrowPOS == 2)
    {
        rowPrintARROW(arr,8,data[2][0],data[2][1],data[2][2],data[2][3],data[2][4],data[2][5]);
    }
    else
    {
        rowPrintnormal(arr,8,data[2][0],data[2][1],data[2][2],data[2][3],data[2][4],data[2][5]);
    }
    //------------------------------the code above for row 8
    arr[9][0] = " ";
    cout << arr[9][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[9][i] = "\u2514";
        arr[9][i+1] = "\u2500";
        arr[9][i+2] = "\u2518";
    }
    arr[9][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[9][i] = "\u2514";
     arr[9][i+1] = "\u2500";
     arr[9][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[9][i];
    cout << endl;
    //------------------------------the code above for row 9
    
    for(int i = 0;i < 21;i++)
    {
        cout << "-";
    }
    cout << endl;
    //---------------------------------------the section line
    arr[10][0] = " ";
    cout << arr[10][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[10][i] = "\u250C";
        arr[10][i+1] = "\u2500";
        arr[10][i+2] = "\u2510";
    }
    arr[10][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[10][i] = "\u250C";
    arr[10][i+1] = "\u2500";
    arr[10][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[10][i];
    cout << endl;
    //---------------------------------------the code above is for row 10
    if(arrowPOS == 3)
    {
        rowPrintARROW(arr,11,data[3][0],data[3][1],data[3][2],data[3][3],data[3][4],data[3][5]);
    }
    else
    {
        rowPrintnormal(arr,11,data[3][0],data[3][1],data[3][2],data[3][3],data[3][4],data[3][5]);
    }
    //---------------------------------------the code above is for row 11
    arr[12][0] = " ";
    cout << arr[12][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[12][i] = "\u2514";
        arr[12][i+1] = "\u2500";
        arr[12][i+2] = "\u2518";
    }
    arr[12][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[12][i] = "\u2514";
     arr[12][i+1] = "\u2500";
     arr[12][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[12][i];
    cout << endl;
    //---------------------------------------the code above is for row 12
    arr[13][0] = " ";
    cout << arr[13][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[13][i] = "\u250C";
        arr[13][i+1] = "\u2500";
        arr[13][i+2] = "\u2510";
    }
    arr[13][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[13][i] = "\u250C";
    arr[13][i+1] = "\u2500";
    arr[13][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[13][i];
    cout << endl;
    //---------------------------------------the code above is for row 13
    if(arrowPOS == 4)
    {
        rowPrintARROW(arr,14,data[4][0],data[4][1],data[4][2],data[4][3],data[4][4],data[4][5]);
    }
    else 
    {
        rowPrintnormal(arr,14,data[4][0],data[4][1],data[4][2],data[4][3],data[4][4],data[4][5]);
    }
    //---------------------------------------the code above is for row 14
    arr[15][0] = " ";
    cout << arr[15][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[15][i] = "\u2514";
        arr[15][i+1] = "\u2500";
        arr[15][i+2] = "\u2518";
    }
    arr[15][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[15][i] = "\u2514";
     arr[15][i+1] = "\u2500";
     arr[15][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[15][i];
    cout << endl;
    //---------------------------------------the code above is for row 15
    arr[16][0] = " ";
    cout << arr[16][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[16][i] = "\u250C";
        arr[16][i+1] = "\u2500";
        arr[16][i+2] = "\u2510";
    }
    arr[16][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[16][i] = "\u250C";
    arr[16][i+1] = "\u2500";
    arr[16][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[16][i];
    cout << endl;
    //---------------------------------------the code above is for row 16
    if(arrowPOS == 5)
    {
        rowPrintARROW(arr,17,data[5][0],data[5][1],data[5][2],data[5][3],data[5][4],data[5][5]);
    }
    else 
    {
        rowPrintnormal(arr,17,data[5][0],data[5][1],data[5][2],data[5][3],data[5][4],data[5][5]);
    }
    //---------------------------------------the code above is for row 17
    arr[18][0] = " ";
    cout << arr[18][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[18][i] = "\u2514";
        arr[18][i+1] = "\u2500";
        arr[18][i+2] = "\u2518";
    }
    arr[18][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[18][i] = "\u2514";
     arr[18][i+1] = "\u2500";
     arr[18][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[18][i];
    cout << endl;
    //---------------------------------------the code above is for row 18
}
//----------------------------------------------rotate box print
void boxrotate(char data[][7],int x,int y)
{
    textcolor(0);
    string arr[19][20];
    for(int i = 0; i < 10; i++)
    arr[0][i] = " ";
    arr[0][10] = "\u254E";
    for(int i = 11; i < 20 ; i++)
        arr[0][i] = " ";
    for(int i = 0; i < 20; i++)
    cout << arr[0][i];
    cout  << endl;
    //---------------------------------------the code above is for row 0
    arr[1][0] = "\u2503";
    cout << arr[1][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[1][i] = "\u250C";
        arr[1][i+1] = "\u2500";
        arr[1][i+2] = "\u2510";
    }
    arr[1][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[1][i] = "\u250C";
    arr[1][i+1] = "\u2500";
    arr[1][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[1][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 1
    rotatePrintplain(arr,2,data[0][0],data[0][1],data[0][2],data[0][3],data[0][4],data[0][5]);
    //---------------------------------------the code above is for row 2
    arr[3][0] = "\u2503";
    cout << arr[3][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[3][i] = "\u2514";
        arr[3][i+1] = "\u2500";
        arr[3][i+2] = "\u2518";
    }
    arr[3][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[3][i] = "\u2514";
     arr[3][i+1] = "\u2500";
     arr[3][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[3][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 3
    arr[4][0] = "\u2503";
    cout << arr[4][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[4][i] = "\u250C";
        arr[4][i+1] = "\u2500";
        arr[4][i+2] = "\u2510";
    }
    arr[4][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[4][i] = "\u250C";
    arr[4][i+1] = "\u2500";
    arr[4][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[4][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 4
    if(y == 0 && x == 0)
    {
        rotatePrintARROWleft(arr,5,data[1][0],data[1][1],data[1][2],data[1][3],data[1][4],data[1][5]);
    }
    else if(y == 0 && x == 1)
    {
        rotatePrintARROWright(arr,5,data[1][0],data[1][1],data[1][2],data[1][3],data[1][4],data[1][5]);
    }
    else
    {
        rotatePrintplain(arr,5,data[1][0],data[1][1],data[1][2],data[1][3],data[1][4],data[1][5]);
    }
    //---------------------------------------the code above is for row 5
    arr[6][0] = "\u2503";
    cout << arr[6][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[6][i] = "\u2514";
        arr[6][i+1] = "\u2500";
        arr[6][i+2] = "\u2518";
    }
    arr[6][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[6][i] = "\u2514";
     arr[6][i+1] = "\u2500";
     arr[6][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[6][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 6
    arr[7][0] = "\u2503";
    cout << arr[7][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[7][i] = "\u250C";
        arr[7][i+1] = "\u2500";
        arr[7][i+2] = "\u2510";
    }
    arr[7][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[7][i] = "\u250C";
    arr[7][i+1] = "\u2500";
    arr[7][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[7][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 7
    rotatePrintplain(arr,8,data[2][0],data[2][1],data[2][2],data[2][3],data[2][4],data[2][5]);
    //---------------------------------------the code above is for row 8 
    arr[9][0] = "\u2503";
    cout << arr[9][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[9][i] = "\u2514";
        arr[9][i+1] = "\u2500";
        arr[9][i+2] = "\u2518";
    }
    arr[9][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[9][i] = "\u2514";
     arr[9][i+1] = "\u2500";
     arr[9][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[9][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 9
    for(int i = 0;i < 21;i++)
    {
        cout << "-";
    }
    cout << endl;
    //---------------------------------------------the section line
    arr[10][0] = "\u2503";
    cout << arr[10][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[10][i] = "\u250C";
        arr[10][i+1] = "\u2500";
        arr[10][i+2] = "\u2510";
    }
    arr[10][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[10][i] = "\u250C";
    arr[10][i+1] = "\u2500";
    arr[10][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[10][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 10
    rotatePrintplain(arr,11,data[3][0],data[3][1],data[3][2],data[3][3],data[3][4],data[3][5]);
    //---------------------------------------the code above is for row 11
    arr[12][0] = "\u2503";
    cout << arr[12][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[12][i] = "\u2514";
        arr[12][i+1] = "\u2500";
        arr[12][i+2] = "\u2518";
    }
    arr[12][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[12][i] = "\u2514";
     arr[12][i+1] = "\u2500";
     arr[12][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[12][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 12
    arr[13][0] = "\u2503";
    cout << arr[13][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[13][i] = "\u250C";
        arr[13][i+1] = "\u2500";
        arr[13][i+2] = "\u2510";
    }
    arr[13][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[13][i] = "\u250C";
    arr[13][i+1] = "\u2500";
    arr[13][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[13][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 13
    if(y == 1 && x == 0)
    {
        rotatePrintARROWleft(arr,14,data[4][0],data[4][1],data[4][2],data[4][3],data[4][4],data[4][5]);
    }
    else if(y == 1 && x == 1)
    {
        rotatePrintARROWright(arr,14,data[4][0],data[4][1],data[4][2],data[4][3],data[4][4],data[4][5]);
    }
    else
    {
        rotatePrintplain(arr,14,data[4][0],data[4][1],data[4][2],data[4][3],data[4][4],data[4][5]);
    }
    //---------------------------------------the code above is for row 14
    arr[15][0] = "\u2503";
    cout << arr[15][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[15][i] = "\u2514";
        arr[15][i+1] = "\u2500";
        arr[15][i+2] = "\u2518";
    }
    arr[15][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[15][i] = "\u2514";
     arr[15][i+1] = "\u2500";
     arr[15][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[15][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 15
    arr[16][0] = "\u2503";
    cout << arr[16][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[16][i] = "\u250C";
        arr[16][i+1] = "\u2500";
        arr[16][i+2] = "\u2510";
    }
    arr[16][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
    arr[16][i] = "\u250C";
    arr[16][i+1] = "\u2500";
    arr[16][i+2] = "\u2510";
    }
    for (int i = 1; i < 20 ; i++)
    cout << arr[16][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 16
    rotatePrintplain(arr,17,data[5][0],data[5][1],data[5][2],data[5][3],data[5][4],data[5][5]);
    //---------------------------------------the code above is for row 17
    arr[18][0] = "\u2503";
    cout << arr[18][0];
    for(int i = 1; i < 10; i += 3)
    {
        arr[18][i] = "\u2514";
        arr[18][i+1] = "\u2500";
        arr[18][i+2] = "\u2518";
    }
    arr[18][10] = "\u254E";
    for(int i = 11; i < 20; i += 3)
    {
     arr[18][i] = "\u2514";
     arr[18][i+1] = "\u2500";
     arr[18][i+2] = "\u2518";   
    }
    for(int i = 1; i < 20; i++)
    cout << arr[18][i];
    cout << "\u2503" <<endl;
    //---------------------------------------the code above is for row 18
}
//------------------------------------------normal wasd control
void wasdnormal(char data[][7])
{
    int x = 0;
    int y = 0;
    int end = 1;
    while(end != 0)
    {
        char move = getch();
        if(move == 'w')
        {   if(y > 0)
            {
                system("cls");
                y--;
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
            else
            {
                system("cls");
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
        }
        else if(move == 's')
        {
            if(y < 5)
            {
                system("cls");
                y++;
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
            else
            {
                system("cls");
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
        }
        else if(move == 'd')
        {
            if(x < 5)
            {
                system("cls");
                x++;
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
            else
            {
                system("cls");
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
        }
        else if(move == 'a')
        {
            if(x > 0)
            {
                system("cls");
                x--;
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
            else 
            {
                system("cls");
                boxnormal(data,y);
                columnARROW(x);
                continue;
            }
        }
        else
        {
            data[y][x] = move;
            end = 0;
        }
    }
}
//----------------------------wasd for rotation
void wasdrotate(char data[][7])
{
    int x = 0;
    int y = 0;
    int end = 1;
    while(end != 0)
    {
        char move = getch();
        if(move == 'w')
        {   if(y > 0)
            {
                system("cls");
                y--;
                boxrotate(data,x,y);
                continue;
            }
            else
            {
                system("cls");
                boxrotate(data,x,y);
                continue;
            }
        }
        else if(move == 's')
        {
            if(y < 2)
            {
                system("cls");
                y++;
                boxrotate(data,x,y);
                continue;
            }
            else
            {
                system("cls");
                boxrotate(data,x,y);
                continue;
            }
        }
        else if(move == 'd')
        {
            if(x < 2)
            {
                system("cls");
                x++;
                boxrotate(data,x,y);
                continue;
            }
            else
            {
                system("cls");
                boxrotate(data,x,y);
                continue;
            }
        }
        else if(move == 'a')
        {
            if(x > 0)
            {
                system("cls");
                x--;
                boxrotate(data,x,y);
                continue;
            }
            else 
            {
                system("cls");
                boxrotate(data,x,y);
                continue;
            }
        }
        else
        {  
            if(move == 'l')
            {
                if(x == 0 && y == 0)
                {
                    rotateLeft(data,0,0);
                    end = 0;
                }
                else if(x == 1 && y == 0)
                {
                    rotateLeft(data,0,3);
                    end = 0;
                }
                else if(x == 0 && y == 1)
                {
                    rotateLeft(data,3,0);
                    end = 0;
                }
                else if(x == 1 && y == 1)
                {
                    rotateLeft(data,3,3);
                    end = 0;
                }
            }
            else if(move == 'r')
            {
                if(x == 0 && y == 0)
                {
                    rotateRight(data,0,0);
                    end = 0;
                }
                else if(x == 1 && y == 0)
                {
                    rotateRight(data,0,3);
                    end = 0;
                }
                else if(x == 0 && y == 1)
                {
                    rotateRight(data,3,0);
                    end = 0;
                }
                else if(x == 1 && y == 1)
                {
                    rotateRight(data,3,3);
                    end = 0;
                }
            }
        }
    }
}
//-----------------------------------------------check proccess function
void checkprocess(int * s1,int * s2,int v1,int h1,int d1,int v2,int h2,int d2,int f)
{
    if(f == 1)
    {
        *s1 = 1;
        *s2 = 1;
        return;
    }
    else if(f == 0)
    {
        if(v1 == 1)
        {
            *s1 = 3;
            *s2 = 0;
            return;
        }
        if(h1 == 1)
        {
            *s1 = 3;
            *s2 = 0;
            return;
        }
        if(d1 == 1)
        {
            *s1 = 3;
            *s2 = 0;
            return;
        }
        if(v2 == 1)
        {
            *s1 = 0;
            *s2 = 3;
            return;
        }
        if(h2 == 1)
        {
            *s1 = 0;
            *s2 = 3;
            return;
        }
        if(d2 == 1)
        {
            *s1 = 0;
            *s2 = 3;
            return;
        }
        if(v1 == 1 && v2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(v1 == 1 && h2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(v1 == 1 && d2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(h1 == 1 && v2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(h1 == 1 && h2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(h1 == 1 && d2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(d1 == 1 && v2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(d1 == 1 && h2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
        if(d1 == 1 && d2 == 1)
        {
            *s1 = 1;
            *s2 = 1;
            return;
        }
    }
}
//-----------------------------------------------------------the end