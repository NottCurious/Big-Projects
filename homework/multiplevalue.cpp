// Written By Deepesh Nimma
#include <iostream>
using namespace std;

int main()
{
  int a[10] = {45, 24, 64, 45, 45, 98, 45, 45, 23, 45};
  int index[10], searching_value = 45, j = 0, count = 0;

  for(int i = 0; i < 10; i++)
  {
    index[i] = -1;
  }

  for(int i = 0; i < 10; i++)
  {
    if(a[i] == searching_value)
    {
      index[j] = i;
      count++; j++;
    }
  }

  cout << "There are " << count << " number of scores equal to " << searching_value << endl;
  cout << "They are found at Index Values: ";
  for(int i = 0; i < 10; i++)
  {
    if(index[i] != -1)
      cout << index[i] << " ";
  }

}
