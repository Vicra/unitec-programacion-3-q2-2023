#include <iostream>
using namespace std;

#define OPEN 1
#define CLOSED 0

bool isSecureToMove(int** (&maze), int size, int x, int y) {
  // rango: [0 y size -1]
  // rango: [0 y 3]
  if (
    // limits
    x >= 0 && x < size && y >= 0 && y < size
    // isOpen
    && maze[x][y] == OPEN)
    return true;
  return false;
}

// 1. si se puede modificar el arreglo/matriz
// 2. al final del todo la matriz mantiene su integridad
bool mazeRunner(int** (&maze), int size, int x, int y) {
  // caso base A: llegue al final
  if(size-1 == x && size-1 == y){
    return true;
  }
  
  // TODO: determine where to move
  // casos recursivos
  maze[x][y] = CLOSED;
  // Caso1: me muevo a la dercha
  if(isSecureToMove(maze, size, x + 1, y)) {
    return mazeRunner(maze, size, x + 1, y);
  }
  // Caso2: me muevo a la izquierda
  else if(isSecureToMove(maze, size, x - 1, y)) {
    return mazeRunner(maze, size, x - 1, y);
  }
  // Caso3: me muevo hacia abajo
  else if(isSecureToMove(maze, size, x , y + 1)) {
    return mazeRunner(maze, size, x , y + 1);
  }
  // Caso4: me muevo hacia arriba
  else if(isSecureToMove(maze, size, x , y - 1)) {
    return mazeRunner(maze, size, x , y - 1);
  }
  maze[x][y] = OPEN;

  return false;
}

int main(int argc, char const *argv[])
{
  int size = 4;
  int ** maze = new int *[size];
  maze[0][0] = 1;
  maze[0][1] = 0;
  maze[0][2] = 0;
  
  maze[1][0] = 1;
  maze[1][1] = 0;
  maze[1][2] = 0;

  maze[2][0] = 1;
  maze[2][1] = 1;
  maze[2][2] = 1;

  int startxPos = 0;
  int startyPos = 0;
  bool finished = mazeRunner(maze, size, startxPos, startyPos);
  cout << boolalpha;   
  cout << "has finished: " << finished << endl;
  return 0;
}
