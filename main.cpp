#include <iostream>
#include <string>
using namespace std;

int count_var(int n, string surname){
	return (int)surname[0]%n;
}

int main(){
	int n,ans;
	cout << "enter student's surname\n"; 
	string surname;
	getline (cin, surname);
	cout << "enter number of variants\n";
	cin >> n;
	cout << count_var(n, surname);
}