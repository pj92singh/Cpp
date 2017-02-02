/* 60-340 CPP
Assignment 1
Prabhjit Singh
uwinID: 103180339 

-A program takes in users input of words, 
and shows how many times the word is inputted in an unsorted
histogram with the following format: 

An unsorted frequency histogram of the input is:
bear  |****
cat   |**
dog   |*
house |***
tiger |**/
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int main()
{
	std::map<std::string, unsigned> hist;
	string s;

	while (cin >> s)
		++hist[s];

		//using a built in algorithim
		//using iterators, takes 2 iterators (begingin to end)
		//3rd argument is a function
		//that takes whatever you are visiting
		//in this case its the string
		//in historgram
	auto const longest_entry = std::max_element
	(
		begin(hist),
		end(hist),
		[](auto const& elem1, auto const& elem2)
		{
			return elem1.first.size() < elem2.first.size();
		}
	);

	int longest_word_length;
	longest_entry == end(hist) ?
		longest_word_length = 0
		:
		longest_word_length = longest_entry->first.size();

	cout << '\n' << '\n'
	<< "An unsorted frequency histogram of the input is:"
	<< '\n';
/*
using std::for_each to get the output as such:

An unsorted frequency histogram of the input is:
bear  |****
cat   |**
dog   |*
house |***
tiger |**/
	for_each(
		begin(hist), end(hist),
		[longest_word_length](auto const& elem)
		{
			cout << left
			<< setfill(' ')
			<< setw(longest_word_length)
			<< elem.first
			<< " |"
			<< setfill('*')
			<< setw(elem.second)
			<< ""
			<< '\n';
		}
	);

	return 0;
}
