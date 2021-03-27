#include <iostream>
#include <conio.h>

using namespace std;
bool gameOver;
const int width = 40;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;


enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
  gameOver = false;
  dir = STOP;
  x = width / 2;
  y = height / 2;
  fruitX = rand() % width;
  fruitY = rand() % height;
  score = 0;
}

void Draw()
{
  system("cls");
  cout << "Score:" << score << "Fruit" << fruitX << "-"<< fruitY<< endl;
  for(int i = 0; i < width; i++){
    cout << "#";
  }

  for(int i = 1; i < height; i++){
    for(int j = 0; j <= width; j++){
      if(j == 0 || j == width)
        cout << "#";
      else if(i == y && j == x)
        cout << "S";
      else if(i == fruitY && j == fruitX)
        cout << "F";
      else{
        bool print = false;
        for(int k = 0; k < nTail; k++){
          if(tailX[k] == j && tailY[k] == i)
          {
            cout << "s";
            print = true;
          }
        }
        if(!print)
          cout << " ";
      }
    }
    cout << endl;
  }

  for(int i = 0; i < width; i++){
    cout << "#";
  }
}

void Colision()
{
  /*
  if(x >= width || x <= 0 || y >= height || y <= 0)
    gameOver = true;
  */
  if(x >= width)
    x = 0;
  else if(x <= 0)
    x = width - 1;
  else if(y >= height)
    y = 0;
  else if(y <= 0)
    y = height - 1;
  else if(x == fruitX && y == fruitY){
    score++;
    nTail++;
    fruitX = rand() %  (width - 1) + 2;
    fruitY = rand() %  (height - 1) + 2;
  }
}
void Logic()
{
  int prevX = tailX[0];
  int prevY = tailY[0];
  int prev2X, prev2Y;
  tailX[0] = x;
  tailY[0] = y;
  for(int i = 1; i < nTail; i++){
    prev2X = tailX[i];
    prev2Y = tailY[i];
    tailX[i] = prevX;
    tailY[i] = prevY;
    prevX = prev2X;
    prevY = prev2Y;
  }
  switch (dir)
  {
    case UP:
      y--;
      break;
    case LEFT :
      x--;
      break;
    case DOWN:
      y++;
      break;
    case RIGHT:
      x++;
      break;
  }
  Colision();
}

void Input()
{
  if(_kbhit())
  {
    switch (_getch()) {
      case 'w':
        dir = UP;
        break;
      case 'a':
        dir = LEFT;
        break;
      case 's':
        dir = DOWN;
        break;
      case 'd':
        dir = RIGHT;
        break;
      case 'x':
        gameOver = true;
        break;
    }
  }
}

int main()
{
  Setup();
  while(!gameOver)
  {
    Draw();
    Input();
    Logic();
  }
  return 0;
}
