#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 5;
         inches = 10;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         
      }
};

int main() {
   Distance D1,D2;
 D1.displayDistance();
   -D1;                     // apply negation
   D1.displayDistance();    // display D1
D2.displayDistance();
   -D2;                     // apply negation
   D2.displayDistance();    // display D2

   return 0;
}
