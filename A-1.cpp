#include<iostream>
using namespace std;
void f(int xval)
{
 int x;
 x = xval;
 cout<<&x<<endl;
}
void g(int yval)
{
 int y;
 cout<<&y;
}
int main()
{
 f(7);
 g(11);
 return 0;
 //Hai bien co cung dia chi vi la bien dia phuong dau tien cua ham
} 
