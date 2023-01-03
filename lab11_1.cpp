#include<iostream>
#include<string>
using namespace std;

int main(){
	char grade ;
	int NS=1,NA=0,NB=0,NC=0,ND=0,NF=0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<NS<< "]: ";
		cin >> grade ;
		if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F')
		{
			if (grade == 'A')
			{
				NA++;
			}
			else if (grade == 'B')
			{
				NB++;
			}
			else if (grade =='C')
			{
				NC++;
			}
			else if (grade == 'D')
			{
				ND++;
			}
			else{
				NF++;
			}
			NS++;
			{

			}
			
			
			
		}
		else if (grade == '0')
		{
			break;
		}
		else{
			cout << "Wrong input. Please input again.\n";
		}
		
		
	}while(true);
	
	
	cout << "In total "<< NS-1 << " students.\n";
	cout << "A = " << NA <<", ";
	cout << "B = " << NB <<", ";
	cout << "C = " << NC <<", ";
	cout << "D = " << ND <<", ";
	cout << "F = " << NF ;
	

	
	return 0;
}
