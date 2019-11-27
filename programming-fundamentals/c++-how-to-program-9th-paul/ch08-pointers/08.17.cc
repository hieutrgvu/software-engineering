// 8.17 (Generating Mazes Randomly) Write a function mazeGenerator that randomly
// produces a maze. The function should take as arguments a two-dimensional
// 12-by-12 character array and pointers to the int variables that represent the
// row and column of the maze’s entry point. Try your function mazeTraverse
// from Exercise 8.16, using several randomly generated mazes.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 12

char maze_map[SIZE][SIZE];

void GenerateMaze(char maze[SIZE][SIZE], int *entry_row,
  int *entry_col, int *exit_row, int *exit_col) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      maze[i][j] = ((rand() % 2) == 0) ? '#' : '.';
    }
  }

  // pin row and random column
  if (rand() % 2) {
    *entry_row = (SIZE - 1) * (rand() % 2);
    *entry_col = rand() % SIZE;
  }

  // pin column and random row
  else {
    *entry_col = (SIZE - 1) * (rand() % 2);
    *entry_row = rand() % SIZE;
  }
  maze[*entry_row][*entry_col] = '.';

  // pin row and random column
  if (rand() % 2) {
    *exit_row = (SIZE - 1) * (rand() % 2);
    *exit_col = rand() % SIZE;
  }

  // pin column and random row
  else {
    *exit_col = (SIZE - 1) * (rand() % 2);
    *exit_row = rand() % SIZE;
  }
  maze[*exit_row][*exit_col] = '.';
}

void PrintArray(char maze[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      std::cout << maze[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

// x: column, y: row
void TravelMaze (char maze[SIZE][SIZE], int start_row, int start_col,
  int hand_row, int hand_col, int end_row, int end_col) {
  if ((start_row == end_row) && (start_col == end_col)) return;

  bool is_move = false;

  if (start_row == hand_row) {
    if (start_col > hand_col) {
      if ((maze[start_row + 1][start_col] == '.') ||
        (maze[start_row + 1][start_col] == 'X')) {
        start_row++;
        is_move = true;
        if (maze[start_row][start_col - 1] == '#') hand_row++;
      }
      else {
        hand_row = start_row + 1;
        hand_col = start_col;
      }
    }
    else {
      if ((maze[start_row - 1][start_col] == '.') ||
        (maze[start_row - 1][start_col] == 'X')) {
        start_row--;
        is_move = true;
        if (maze[start_row][start_col + 1] == '#') hand_row--;
      }
      else {
        hand_row = start_row - 1;
        hand_col = start_col;
      }
    }
  }
  else if (start_col == hand_col) {
    if (start_row > hand_row) {
      if ((maze[start_row][start_col - 1] == '.') ||
        (maze[start_row][start_col - 1] == 'X')) {
        start_col--;
        is_move = true;
        if (maze[start_row - 1][start_col] == '#') hand_col--;
      }
      else {
        hand_row = start_row;
        hand_col = start_col - 1;
      }
    }
    else {
      if ((maze[start_row][start_col + 1] == '.') ||
        (maze[start_row][start_col + 1] == 'X')) {
        start_col++;
        is_move = true;
        if (maze[start_row + 1][start_col] == '#') hand_col++;
      }
      else {
        hand_row = start_row;
        hand_col = start_col + 1;
      }
    }
  }
  else {
    if (start_row > hand_row) {
      if (start_col > hand_col) start_col--;
      else start_row--;
    }
    else {
      if (start_col > hand_col) start_row++;
      else start_col++;
    }
    is_move = true;
  }

  if (is_move == true) {
    maze[start_row][start_col] = 'X';
    PrintArray(maze);
  }

  TravelMaze(maze, start_row, start_col, hand_row, hand_col, end_row, end_col);
}

int main() {
  int entry_row;
  int entry_col;
  int exit_row;
  int exit_col;

  srand(time(0));

  GenerateMaze(maze_map, &entry_row, &entry_col, &exit_row, &exit_col);
  PrintArray(maze_map);
  std::cout << "Entry: (" << entry_row << ", " << entry_col << ")";
  std::cout << "\nExit: (" << exit_row << ", " << exit_col << ")" << std::endl;

  //TravelMaze(maze_map, 2, 0, 3, 0, 4, 11);
  return 0;
}
