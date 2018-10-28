/* 
* pj92singh
* Testing c++ class
* Calling Rectangle class and Sedan class
* building objects based of this calls 
* 
* Building more memebers moving forward 
*/
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};
class Sedan{
	string make = "";
	public: 
		void set_theMake(string);
		string get_theMake(){ return make; }
}; 

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}
void Sedan::set_theMake(string z){
	make = z; 
}

int main () {
	string zz = "throw error"; 
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area() << "\n";

  try{
	  //testing calss Sedan
	  Sedan bmw; 
	  bmw.set_theMake("BWM 320i");
	  cout<< "The make: " <<bmw.get_theMake() <<"\n";	
	  throw zz; 
	}catch(string zz){
		cout << zz +"\n"; 
	}catch(...){
		cout << "Exception\n"; 
	}
  return 0;
}
