#include <iostream>
using namespace std;
class balls {
    private:
    double height;
    double bridth;
    double length;
     
     public:
     balls() {
         height = 5.0;
         bridth = 8.0;
         length = 15.0;
     };

     balls operator+(const balls& ball) {
         balls newball;
         newball.height = this->height + ball.height;
         newball.bridth = this->bridth + ball.bridth;
         newball.length = this-> length + ball.length;
         return newball;

     };
     void getAll() {
         cout << height << endl;
         cout << bridth << endl;
         cout << length << endl;
         
};
     };

void func1(int & x,int &y) {
    x = 8;
    y = 13;
}

void func2(int * x,int*y) {
    *x = 12;
    *y=19;
}
int main(int argc, char const *argv[])
{
    balls ball1;
    balls ball2;
    balls ball3;
 ball3 = ball1 + ball2;
    ball3.getAll(); 

    int *bobby;
    bobby = new int[7];
    bobby[4] = 5;
    cout << bobby[4] << endl;
int x = 5 , y = 8;
    func1(x,y);
    cout << x << " " << y << endl;
    func2(&x,&y);
    cout << x << " " << y << endl;
    


    return 0;
}
