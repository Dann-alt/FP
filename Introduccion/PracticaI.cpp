#include <iostream>
using namespace std;

int main()
{
      int matriz[9][9] = {
        {0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 9, 0, 6, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 0},
        {0, 0, 1, 0, 5, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 2},
        {0, 0, 0, 0, 6, 0, 9, 0, 0},
        {0, 8, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 9, 1, 0, 4, 0, 6, 0},
        {0, 0, 0, 0, 0, 0, 0, 5, 0} };
  
  cout << "Matriz: " << endl;
  for (int i = 0; i < 9; i++) 
  {
    for (int j = 0; j < 9; j++) 
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
    }
}