#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber()
{
  srand((unsigned)time(0));
  int i;
  i = (rand()%23434)+1;

  return i;
}

int main()
{
  int n, i, guess = 20;
  bool checkTrue = true;
  i = getRandomNumber();
  while(checkTrue == true && guess > 0)
  {
    cout << endl << "Enter Guess: ";
    cin >> n;

    if(n > i + 100)
    {
      cout << endl << "Too High";
      guess--;
    }
    else if(n > i)
    {
      cout << "High";
      guess--;
    }
    else if(n < i - 100)
    {
      cout << "Too Low";
      guess--;
    }
    else if(n < i)
    {
      cout << "Low";
      guess--;
    }
    else if(n == i)
    {
      cout << endl << endl << "YOU WIN!";
      checkTrue = false;
    }
  }
}
