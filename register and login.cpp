#include <iostream>
#include <fstream>
#include <string>

void RegisterNewUser();
void LoginUser();
int main()
{
	char input = ' ';
	while (input != '0') {
		std::cout << "Wellcome!\nPress 1 to register\nPress 2 to login\nPress 0 to exit";
		std::cin >> input;
		if (input == '1')
			RegisterNewUser();
		else if (input == '2')
			LoginUser();
		else if (input == '0')
			std::cout << "See you...";
		else {
			std::cout << "Input not valid. Retry\n";
			std::cin >> input;
		}
	}
	return 0;
}

void RegisterNewUser() {
	std::string username, password, un, pw;
	std::cout << "Type your username: ";
	std::cin >> username;
	std::cout << "Type your password: ";
	std::cin >> password;

	std::ofstream write("C:\\Users\\User\\desktop\\" + username + ".txt");
	write << username << "\n";
	write << password << "\n";
	std::cout << "You are now registred!";
}
void LoginUser() {
	std::string username, password, un, pw;
	std::cout << "Type your username: ";
	std::cin >> username;
	std::cout << "Type your password: ";
	std::cin >> password;

	std::ifstream read("C:\\Users\\User\\desktop\\" + username + ".txt");
	std::getline(read, un);
	std::getline(read, pw);

	if (un == username && pw == password) {
		std::cout << "Loggin in...";
	}
	else {
		std::cout << "Wrong credencials... Retry...";
	}
}
