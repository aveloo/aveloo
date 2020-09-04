#include <iostream>
using namespace std;
int main ()
{
	int students; int allCandies; int candiesForEach; int candiesForJohn; 
	cout<<"How many students does John's class count?: ";cin>>students;
	int studentsMinusJohn=students-1;
	cout<<"How many candies are there?: ";cin>>allCandies;
	if (studentsMinusJohn>allCandies)
	{
		cout<<"There are more students than candies. Nobody will get even one candy.";
		return 0;
	}
	else
	{
	candiesForEach=allCandies/studentsMinusJohn;
	candiesForJohn=allCandies-(studentsMinusJohn*candyForEach);
	cout<<"John will have "<<candiesForJohn<<" candies for tonight.";
	}	
return 0;
}
