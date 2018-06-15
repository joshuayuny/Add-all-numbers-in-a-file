// Add all numbers in a file 
#include <iostream>
#include <fstream>
using namespace std;

// function prototypes
int sum();

int main()
{
// String  file name is defined as text file called numbers
  string filename = "numbers.txt";
  int result = 0; 
// replace 0 with a call to the sumNumFile function here.
  cout << "The sum of the values in " << filename << " is " << sum() <<".";
  return 0;
}
// Function sum
int sum()
{
ifstream numbers;
int num;
int result = 0;
//Add the total 
numbers.open("numbers.txt");
if(numbers)
{
  while(numbers >> num)
  {
  result = result + num;
  }
}
else
{
  cout << "The file could not be loaded. Cannot perform operations on the file";
}
numbers.close();
return result;
}
