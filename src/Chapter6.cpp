#include <iostream>

using namespace std;


// A function with more that one parameter
// Takes in two numbers and pukes out a value
// based on both input values
int power(int base, int exp) {
	int result = 1;
	for(int i = 0; i < exp; ++i) {
		result = result * base;
	}
	return result;
}

// most classical function
// takes in a number, pukes out a result
// based on that number
int factorial(int n) {
	int result = 1;
	for(int i = 1; i <= n; ++i) {
		result = result * i;
	}
	return result;
}

// this one is similar, but takes in a
// number, and pukes out a boolean (true or false)
bool isPrime(int n) {
	if(n<=0) return false;
	if(n==1) return true;
	if(n==2) return true;
	for(int i = 2; i <= n/2; ++i) {
		if(n%i == 0) return false;
	}
	return true;
}

// void functions: these are more like "procedures"
// must produce lateral effects to be of any use
void printPrimesUpTo(int n) {
	for(int i = 2; i <= n; ++i) {
		if(isPrime(i)) cout << i << "\n";
	}
}

// returns value with no arguments: the result is either random, or can be precomputed once,
// so, if we take out any lateral effects, it really doesn't make a lot of sense to make an
// algorithm that takes no arguments
float pi() {
	return 3.1416f;
}

// void () functions. Their functionality is fixed. Lateral effects only (e.g.: console print).
void printMenu() {
	cout << "Hello, there. The possible commands are: \n";
	cout << "\n";
	cout << "POWER - calculate a^b\n";
	cout << "FACTORIAL - calculate n!\n";
	cout << "PRIMETO - print primes up to n\n";
	cout << "QUIT - exit this lame program and experience live, love and destiny out there...\n\n";
	cout << "What's it gonna be, popkin? -> "; 
}

int getANumberWithPrompt(string prompt) {

	string line;
	int value;

	cout << "\n " << prompt;
	getline(cin, line);
	value = stoi(line);

	return value;

}

void processCommand(string command) {

	int value;
	int otherValue;

	if(command == "POWER") {
		value = getANumberWithPrompt("So, enter the base: ");
		otherValue = getANumberWithPrompt("Enter the exponent: ");
		cout << value << " to the power of " << otherValue << " is " << power(value, otherValue);
	}
	else if (command == "FACTORIAL") {
		value = getANumberWithPrompt("So, enter a number:");
		cout << "  The factorial is: " << factorial(value);
	}
	else if (command == "PRIMETO") {
		value = getANumberWithPrompt("So, enter a number:");
		printPrimesUpTo(value);
	}
	else if (command == "PI") { // Hidden command!
		cout << "Pi exactly equals " << pi() << ", so people investing computational resources finding new decimals to pi are fools";
	}
	else if (command == "QUIT") {
		cout << "\n\nSo you're quite the quitter, uh? I know a quitter when I see one... !";
		exit(0);
	}
	else {
		cout << "Hey, focus! That's not even a valid command, what gives?!?";
	}
	cout << "\n\n";
}

int main(int argc, char **argv) {

	string line;
	
	while(1<2) { // for ever and ever... HA HA!!!!
		printMenu();
		getline(cin, line);
		processCommand(line);	
	}

}
