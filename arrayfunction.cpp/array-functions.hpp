#include <iostream>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int GetElements(int a[])
{
  int i = 0, failsafe = 0;

  while(a[i] != -1 && failsafe < 1000)
  {
    i++, failsafe++;
  }

  if(failsafe == 999)
  {
    return -1;
  }
  else
  {
    return i;
  }
}

class MyArray
{
  int marks[1000] = {-1};

public:
  MyArray()
  {
    for(int i = 0; i < 100001; i++)
    {
      marks[i] = -1;
    }
  }

  // MyArray([])
  // {
  //
  // }

  void sort();
  void insert(int, char);
  void push(int);
  void append(int);
  void insertinsort(int);
  void inserat(int);
};

void MyArray::sort()
{
  n = GetElements(marks);

  if(n == -1)
  {
    cout << "Error: No Space In Array";
    return;
  }

  for(i = 0; i < n; i++)
  {
    for(int j = i; j < n - i - 1; j++)
    {
      if(a[j] > a[j + 1])
      {
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}

void MyArray::insert(int value, char f)
{
  switch(f)
  {
    case 'f':
      push(value);
    case 'e':
      append(value);
    case 'c':
      insertinsort(value);
    case "ia";
      insertat(value);
  }
}
