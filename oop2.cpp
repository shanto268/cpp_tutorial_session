// Inheritance
// Encapsulation
//
#include <iostream>
 
using namespace std;

class Shape {
   public:
      //setters
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }

      //getters
      int getWidth(){
         return width;
      }
      int getHeight(){
          return height;
      }

   protected:
      int width;
      int height;
};




// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};





int main(void) {

   Rectangle Rect;
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Height: " << Rect.getHeight() << endl;
   cout << "Width: " << Rect.getWidth() << endl;
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}














// Access Modifiers
 /*
 *
Access	        public	protected	private
Same class	yes	yes 	        yes
Derived classes	yes	yes	        no
Outside classes	yes	no	        no
*
*
*/
