#include <iostream>
using namespace std;
int cal_bonus(int salary);
void display(int salary[],int num);
int main()
{ 
	int num,salary;

	
	cout << "Enter Number of person: ";
	cin >> num;
	int *a = new int[num];
	for(int i = 0; i < num; i++)
	{
		cout << "Enter the salary " << i+1 << ":" ;
		cin >> a[i];
	}
	cout << "There are " << num << " persons " <<endl;
	display(a,num);
	return 0;
  }
void display(int salary[],int num)
{
	int *bonus = new int[num];
	for(int i = 0; i < num; i++)
	{
	cout << "The Salary for person " << i+1 << " = " << salary[i];
	bonus[i] =  cal_bonus(salary[i]);
	cout << " and Bonus = " << bonus[i] <<endl;
	}
}
int cal_bonus(int salary)
{ 
	int bonus;
	bonus = salary * 2;
	return bonus;
}
