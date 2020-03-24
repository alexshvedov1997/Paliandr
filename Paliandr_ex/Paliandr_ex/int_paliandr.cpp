#include<iostream>
#include<cctype>
#include<string>
#include <algorithm>

using namespace std;

void delete_symbol(char mass[], string & s);
bool paliandr_meth(string & s);

int main(){
	string s;
	cout << " Enter word " << endl;
	getline(cin,s);
	char mass[] = {'.', ' ', '!',':', ';'};
	for( int i = 0; i < s.length(); i++){
	s[i] = tolower(s[i]);
	}
	string z = s;
	delete_symbol(mass,s);
//	reverse(s.begin(), s.end());
	bool tr = paliandr_meth(s);
	cout<<tr<<endl;

	cout<<s;

	return 0;
}

void delete_symbol(char mass[], string & s){
	for( int i = 0; i < s.length(); i++){
		for( int j = 0 ; j < strlen(mass); j++)
			if(s[i] == mass[j])
				s.erase(i,1);
	}
}

bool paliandr_meth(string & s){
	string z = s;
	reverse(s.begin(), s.end());
	if(z == s)
		return true;
	else
		return false;
}