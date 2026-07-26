#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    int n;
    int marks[100];
    int total = 0;
    float percent;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);
    
    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "How many subjects: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
    	while (true)
    	{
    		cout << "Enter marks of subject " << i + 1 << ": ";
    		cin >> marks[i];
    		
    		if (marks[i] >= 0 && marks[i] <= 100)
    		{
    			break;
			}
			else
			{
				cout << "Marks must be between 0 and 100. Try Again" << endl;
			}
		}   
    }

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    percent = (float)total / n;

    if (percent >= 90)
    {
        grade = 'A';
    }
    else if (percent >= 80)
    {
        grade = 'B';
    }
    else if (percent >= 70)
    {
        grade = 'C';
    }
    else if (percent >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "\nStudent Name = " << name << endl;
    cout << "Student Roll No = " << rollNo << endl;
    cout << "Subjects = " << n << endl;
    cout << "Total Marks = " << total << "/" << n*100 << endl;
    cout << "Percentage = " << percent << "%" << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}
