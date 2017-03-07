/*
* Prabhjit Singh
* building heap using alogrithm,
* finding the max, and min elements. 
*/
#include<iostream>
#include<vector>
#include<algorithm>//contains make_heap
//also pop_heap, push_heap sort_heap etc
using namespace std;


int main(int argc, char const *argv[]) {
  int values[] = {30, 2, 9, 99, 100, 60, 75};
  //-------
  //get values into a vector
  vector<int> v(values, values+7);
  //-------
  //make the heap using the vector we just made
  //from begining to end
  make_heap(v.begin(), v.end());

  //output the full heap
  cout << "*** The heap *** \n";
  for (int i=0; i<v.size(); ++i){
    cout << ' ' << v[i];
  }
  cout << '\n';
    /*
    * using the front and end
    *  of the vector we can get
    * the maximum and miniumum
    * values of the heap
     */
    //output the max element of heap
    cout << "*** Heap's max element: ***" << '\n'
    << v.front() << '\n';

    //output the min element of heap
    cout << "*** Heap's min element: ***" << '\n'
    << v.back() << '\n';

  return 0;
}
