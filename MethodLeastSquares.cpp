#include <iostream>
#include <string>

using namespace std;
int main() {
 double x , y;
 int n=0;
 double m;
 double b ;
 double arrx[8],arry[8];
 double sumx=0,sumy=0,sumxy=0;
 double sumxtetr = 0;

 double xx,yy;
while(n<8) {
cin >> x;

cin >> y;

arrx[n] = x;
arry[n] = y;
n++;

}

for(int i = 0;i<8;i++) {
    sumx = sumx + arrx[i];
    sumy = sumy + arry[i];
    sumxy = sumxy + arrx[i] * arry[i];
    sumxtetr = sumxtetr + arrx[i]*arrx[i];
}

m =  (sumx*sumy - n*sumxy) / ((sumx*sumx) - (n*sumxtetr));

b = (1/(double)n) * (sumy - m*sumx);


cout << "m: " << m << endl;
cout << "b: " << b << endl;

return 0;
}
