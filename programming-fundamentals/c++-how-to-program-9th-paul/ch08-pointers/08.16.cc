// 8.16 (Maze Traversal) The grid of hashes (#) and dots (.) in Fig. 8.22 is a
// two-dimensional array representation of a maze. In the two-dimensional array,
// the hashes represent the walls of the maze and the dots represent squares in
// the possible paths through the maze. Moves can be made only to a location in
// the array that contains a dot.
//
// There is a simple algorithm for walking through a maze that guarantees
// finding the exit (assuming that there is an exit). If there is not an exit,
// you’ll arrive at the starting location again. Place your right hand on the
// wall to your right and begin walking forward. Never remove your hand from
// the wall. If the maze turns to the right, you follow the wall to the right.
// As long as you do not remove your hand from the wall, eventually you’ll
// arrive at the exit of the maze. There may be a shorter path than the one
// you’ve taken, but you are guaranteed to get out of the maze if you follow
// the algorithm.
//
//      # # # # # # # # # # # #
//      # . . . # . . . . . . #
//      . . # . # . # # # # . #
//      # # # . # . . . . # . #
//      # . . . . # # # . # . .
//      # # # # . # . # . # . #
//      # . . # . # . # . # . #
//      # # . # . # . # . # . #
//      # . . . . . . . . # . #
//      # # # # # # . # # # . #
//      # . . . . . . # . . . #
//      # # # # # # # # # # # #
// Fig. 8.22 | Two-dimensional array representation of a maze.
//
// Write recursive function mazeTraverse to walk through the maze. The function
// should receive arguments that include a 12-by-12 character array representing
// the maze and the starting location of the maze. As mazeTraverse attempts to
// locate the exit from the maze, it should place the character X in each
// square in the path. The function should display the maze after each move,
// so the user can watch as the maze is solved.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

#define SIZE 12

char maze_map[SIZE][SIZE] =
{
  { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
  { '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },
  { '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#' },
  { '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
  { '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
  { '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
  { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
  { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
  { '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
  { '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#' },
  { '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
  { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
};

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
  maze_map[2][0] = 'X';
  PrintArray(maze_map);
  TravelMaze(maze_map, 2, 0, 3, 0, 4, 11);
  return 0;
}
