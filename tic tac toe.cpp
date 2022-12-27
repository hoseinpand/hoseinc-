#define _WIN32_WINNT 0X0500
#include<graphics.h> 
#include <iostream>
using namespace std;


char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
int checkwin();


int w;
int main()
{
     int n,m;
char buffer1[50];
do{
char a1='0';
  if(n==1){
  closegraph();
for(int i1=0 ; i1<=10 ; i1++){

square[i1]=a1;
a1++;
}
  }

char buffer[50];
 
 
   n=1;
   
    int x,y;
    HWND Handle = GetConsoleWindow();
  ShowWindow(Handle ,SW_HIDE );
          initwindow(900,700,"tic tac toe");

int i=2;
    

        int player=1;
  
      
    do{
         	char mark ;
          
      board();
      settextstyle(4,0,4);
      settextjustify(1,1);
      outtextxy(775,100,"Tic Tac Toe");
       outtextxy(770,140,"Turn player ");
         player=(player%2)?1:2;
         sprintf( buffer , "%d" , player);
         outtextxy(760,190,buffer);

      if(ismouseclick(WM_LBUTTONUP))    // 4
      {
        while (!ismouseclick(WM_LBUTTONUP)) delay(1);    // 5
         getmouseclick(WM_LBUTTONUP, x, y);
         if(player==1)
         mark='X';
         else
         mark='O';  


        if((x >= 30) && (x <= 230) && (y >= 40) && (y <= 240) && square[1] == '1')    // 7
        {

          square[1]=mark;
          if(mark=='X')
          circle(130, 140, 90);
          
          if(mark=='O'){
          line(40,50,220,230);
          line(220,50,40,230);
          }
          player++;
        }

        
        else if((x >= 230) && (x <= 430) && (y >= 40) && (y <= 240) && square[2] == '2')    // 7
        {
          square[2]=mark;
          if(mark=='X')
          circle(330,140,90);
          if(mark=='O'){

          
          line(240,50,420,230);
          line(420,50,240,230);
          
          }
          player++;
        }
        else if((x>=430) && (x<=630) && (y>=40) && (y<=240) && square[3] == '3'){
          square[3]=mark;
          if(mark=='X')
          circle(530,140,90);
          if(mark=='O'){
            line(440,50,620,230);
          line(620,50,440,230);
          }
          player++;
        }
        else if((x>=30) && (x<=230) && (y>=240) && (y<=440) && square[4] == '4'){
          square[4]=mark;
          if(mark=='X')
          circle(130,340,90);
          if(mark=='O'){
            line(40,250,220,430);
          line(220,250,40,430);
          }
          player++;
        }
        else if((x>=230) && (x<=430) && (y>=240) && (y<=440) && square[5] == '5'){
          square[5]=mark;
          if(mark=='X')
          circle(330,340,90);
          if(mark=='O'){
            line(240,250,420,430);
          line(420,250,240,430);
          }
          player++;
        }
        else if((x>=430) && (x<=630) && (y>=240) && (y<=440) && square[6] == '6'){
          square[6]=mark;
          if(mark=='X')
          circle(530,340,90);
          if(mark=='O'){
            line(440,250,620,430);
          line(620,250,440,430);
          }
          player++;
        }
        else if((x>=30) && (x<=230) && (y>=440) && (y<=640) && square[7] == '7'){
          square[7]=mark;
          if(mark=='X')
          circle(130,540,90);
          if(mark=='O'){
            line(40,450,220,630);
          line(220,450,40,630);
          }
          player++;
        }
        else if((x>=230) && (x<=430) && (y>=440) && (y<=640) && square[8] == '8'){
          square[8]=mark;
          if(mark=='X')
          circle(330,540,90);
          if(mark=='O'){
            line(240,450,420,630);
          line(420,450,240,630);
          }
          player++;
        }
        else if((x>=430) && (x<=630) && (y>=440) && (y<=640) && square[9] == '9'){
          square[9]=mark;
          if(mark=='X')
          circle(530,540,90);
          if(mark=='O'){
            line(440,450,620,630);
          line(620,450,440,630);
          }
          player++;
        }
        
    i=checkwin();


      }
      
    }while(i==2);

    
        if(i==1){
        
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(30,140,630,140);
      }
      if(i==3){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(30,340,630,340);
      }
      if(i==4){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(30,540,630,540);
      }
      if(i==5){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(130,40,130,640);
      }
      if(i==6){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(330,40,330,640);
      }
      if(i==7){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(530,40,530,640);
      }
      if(i==8){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(30,40,630,640);
      }
       if(i==9){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(710,250,"player");
        outtextxy(770,250,buffer);
        outtextxy(820,250,"win");
        setcolor(YELLOW);
        line(630,40,30,640);
      }
      if(i==0){
        settextstyle(4,0,3);
        settextjustify(1,1);
        outtextxy(770,220,"game draw");
      }
      
setcolor(15);
outtextxy(770,455,"try again");
rectangle(695,430,845,470);
while(1){
 if(ismouseclick(WM_LBUTTONUP))    // 4
      {
        while (!ismouseclick(WM_LBUTTONUP)) delay(1);    // 5
         getmouseclick(WM_LBUTTONUP, x, y);
         if(x>=695 && x<=845 && y>=430 && y<=470){
          w=1;
break;
      }
      }
   }

}while(w==1);
    getch();
    closegraph();
    return 0;
}


int checkwin(){
	if(square[1]==square[2]&&square[2]==square[3]){
		return 1;
	}
	else if(square[4]==square[5]&&square[5]==square[6]){
		return 3;
	}
	else if(square[7]==square[8]&&square[8]==square[9]){
		return 4;
	}
	else if(square[1]==square[4]&&square[4]==square[7]){
		return 5;
	}
	else if(square[2]==square[5]&&square[5]==square[8]){
		return 6;
	}
	else if(square[3]==square[6]&&square[6]==square[9]){
		return 7;
	}
	else if(square[1]==square[5]&&square[5]==square[9]){
		return 8;
	}
	else if(square[3]==square[5]&&square[5]==square[7]){
		return 9;
	}
	else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9'){
		return 0;
	}
	else{
		return 2;
	}
}

void board(){
  //on
    line(30,40,630,40);
    line(30,40,30,640);
    line(30,640,630,640);
    line(630,40,630,640);
//in
    line(230,40,230,640);
    line(430,40,430,640);
    line(30,240,630,240);
    line(30,440,630,440);
}
