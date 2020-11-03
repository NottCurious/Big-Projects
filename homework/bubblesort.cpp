#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void BubbleSort(int a[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
      if (a[j] > a[j + 1])
        swap(&a[j], &a[j + 1]);
}

void BubbleSortDesc(int a[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)
    for (j = n - i + 1; j >= 0; j--)
      if (a[j] < a[j + 1])
        swap(&a[j], &a[j + 1]);
}

void PrintInvalid()
{
  cout << "Invalid Type";
}

void InputArray(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
}

void OutputArray(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}

int main()
{
  int n, a[10001];
  char type;
  cout << "Ascending(a) or Descending(d): ";
  cin >> type;

  if(type != 'a' || type != 'd')
  {
    PrintInvalid();
    return 0;
  }

  cout << "Enter Size of Array: ";
  cin >> n;
  InputArray(a, n);

  (type == 'a')? BubbleSort(a, n) : BubbleSortDesc(a, n);

  OutputArray(a, n);
}
