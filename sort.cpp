/*
 Prabhjit Singh
 Sorting 50 random values in a vector
 and out putting it out
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int values[50], i;
  //make random values
  for(i =0; i<50; ++i)
  {
    values[i]= rand() % 1000;
  }

  //put my values into a vector
  vector<int> v(values, values+50);
  cout << "\n\nThe unsorted vector\n";
  for (vector<int>::iterator it_1=v.begin(); it_1!=v.end(); ++it_1)
    cout << ' ' << *it_1;
  cout << '\n';

  cout << "\n\nCalling the sort func..." << '\n';
  //use the sort function to sort it
  sort (v.begin(), v.begin()+50);


  // print out the sorted vector:
  cout << "*** Sorted vector ***\n";
  for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  
  return 0;
}
