#include <iostream>
#include <string>
using namespace std;
//global variable 
int len = 0, alpha = 0, special_char = 0;
void check_length(char pass[])
{
	int i = 0;
	while(pass[i] != '\0')
	{
		i++;
	}
	if(i >= 8 && i <= 16)
		::len = 1;
}
void check_special_char(char pass[])
{
	int i = 0;
	while(pass[i] != '\n')
	{
		if(pass[i] >= 32 && pass[i] <= 47)
		{
			::special_char = 1;
		}
		i++;
	}
}
void check_alpha(char pass[])
{
	int i = 0;
	while(pass[i] != '\n')
	{
			if((pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
			{
				::alpha = 1;
				break;
			}
		i++;
	}
}
int main()
{
	char pass[20], ch;
	int i = 0;
	//void&  pass[];  
	::len = 0;
	::alpha = 0;
	::special_char = 0;
	cout<<"Enter Password:";
	while((ch = getchar()) != '\n')
	{
		pass[i] = ch;
		i++;
	}
	pass[i] = '\0';
	// calling functions
	check_length(pass);
	check_special_char(pass);
	check_alpha(pass);
	cout<<endl<<::len<<::special_char<<::alpha<<endl;
	if(len == 1 && special_char == 1 && alpha == 1)
		cout<<"your password is strong"<<endl;
	else
		cout<<"you password is not strong"<<endl;
	cout<<"your password is:"<<pass<<endl;

	return 0;
}
