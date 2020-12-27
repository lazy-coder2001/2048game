#include<stdio.h>
#include<stdio.h>
#include<windows.h>
void move_up();
void move_down();
void move_left();
void move_right();
void getch();
int main()
{
    int a[4][4];
    int i,j,flag;
    char ch;
    rand_value(a);
    while((ch=getch())&&flag)
    {
          switch(ch)
           {

            case 'w':
				move_up(a);system("cls");rand_value(a);flag=isEnd(a);break;
			case 's':
				move_down(a);system("cls");rand_value(a);flag=isEnd(a);break;
			case 'a':
				move_left(a);system("cls");rand_value(a);flag=isEnd(a);break;
			case 'd':
				move_right(a);system("cls");rand_value(a);flag=isEnd(a);break;
           }
    }
    return 0;
}
