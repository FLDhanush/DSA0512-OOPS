#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() 
{
  char str[100];
  cout << "Enter a string: ";
  gets(str);
  int count=0;
  for(int i = 1; i < 100; i++) 
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
    	count++;
	}
  }
  cout << "total uppercase letters in a string are: "<<count-1<<endl;
  for(char &c : str) 
  {
    c= toupper(c);
  }
  cout<<"uppercase string: "<<str<<endl;
  for(char &c : str)
  {
    c=tolower(c);	
  }
  cout<<"lowercase string: "<<str<<endl;
  return 0;
}
