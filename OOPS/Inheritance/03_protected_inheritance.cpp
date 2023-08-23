// Thiis program is about procted member in inheritance

#include <iostream>
using namespace std;

class base
{
private:
    int a = 10;

public:
    int b = 20;

protected:
    int c = 30;
};

/* For a procted member:
 *
 *                          public derivation       private derivation       protected derivation
 * --> private member         Not inharited           Not inhareted             Not inhareted
 * --> protected member         protected                private                  procected
 * --> public member             public                  private                  procected
 *
 */

/* EXAMPLE 👇

class derived : public base // public
{
   void show()
   {
       cout << a << b << c; // a (private) Not inharited
   }                       // b (public) public
};                        // c (protected) protected

class derived : private base // private (By deafult)
{
   void show()
   {
       cout << a << b << c; // a (private) Not inharited
   }                       // b (public) private
};                        // c (protected) private

class derived : protected base // protected
{
   void show()
   {
       cout << a << b << c; // a (private) Not inharited
   }                       // b (public) procected
};                        // c (protected) procected
*/

int main()
{
    // ...

    return 0;
}