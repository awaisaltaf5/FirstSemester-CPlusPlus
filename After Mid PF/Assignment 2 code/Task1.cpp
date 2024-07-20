#include <iostream>
using namespace std;
int main()
{
int i, n, j;
for (i = 1; i <= 5; i++)
{
for (n = i; n <= 5; n++)
{
cout << " ";
}
for (j = 1; j <= i; j++)
{
cout << j<<" ";
}
cout << endl;
}
for (i = 4; i >= 1; i--)
{
for (n = i; n <= 5; n++)
{
cout << " ";
}
for (j = 1; j <= i; j++)
{
cout << j<<" ";
}
cout << endl;
}
}