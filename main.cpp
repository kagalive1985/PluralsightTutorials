
#include "includes.h"

using namespace std;
int main()
{

	//double result = add2(3, 3);

	//cout << result;


	/*
	string name;
	cout << "Enter your name: ";
	cin >> name;
	string greeting = "Hello, " + name;

	if (name == "Rick")
	{
		greeting += ", It's me!";
	}
	cout << greeting << "\n";



	int l = greeting.length();

	cout << "\"" + greeting + "\" is " << l << " characters long." << "\n";
	
	string beginning = greeting.substr(greeting.find(' ') + 1);
	cout << beginning << "\n";

	if (beginning == name)
	{
		cout << "expected result!" << "\n";


	}*/

/*
	//Write a program that asks the user for two words and tells them which is longer


	string wordOne = "";
	string wordTwo = "";
	
	cout << "Enter the first word: \n";
	cin >> wordOne;
	cout << "Enter the second word: \n";
	cin >> wordTwo;

	int l1 = wordOne.length();
	int l2 = wordTwo.length();

	if (l1 > l2)
	{
		cout << wordOne + " is longer than " + wordTwo;

	}
	else if (l1 == l2) {
		cout << "They are equal!";
	}
	else
	{
		cout << wordTwo + " is longer than " + wordOne;
	}
	*/



	vector<int> nums; //A vector of integers - currently with 0 elements in it.

	//nums.push_back(3); //push_back adds an element at the end of the set NOTE: Types must match!


	// Let's populate the collection
	for (int i = 1; i <= 10; i++) {

		nums.push_back(i);
	}



	//Range based for loop (Used for iterating through the vector)

	for (auto item : nums)   //NOTE: 'item' is NOT a keyword, just an identifier for the iterator
	{
		cout << item << "\n";
	}

	//Accessing an element: eg: nums[x] where x is the position (nums is the vector name)
	//eg:

	cout << nums[3];

	/////////////////
	vector<string> words;

	words.push_back("Cat");
	words.push_back("Dog");
	words.push_back("Mouse");
	words.push_back("Rabbit");
	words.push_back("Donkey");
	words.push_back("Rhinoceros");
	words.push_back("Dog");

	for (auto word : words) {
		cout << word << "\n";
	}

	sort(begin(words), end(words));   //sort comes from <algorithm>


	for (auto word : words)
	{
		cout << word << "\n";
	}

	int result = 0;
	count(begin(nums), end(nums), 2);

	cout << "\nHere: " << result;


	return 0;
}