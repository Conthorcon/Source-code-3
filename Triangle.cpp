#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int x1,y1, x2,y2, x3,y3;
    double leng1, leng2, leng3;
    cout << "Input the first 2-D coordinate: ";
    cin >> x1 >> y1;
    cout << "Input the second 2-D coordinate: ";
    cin >> x2 >> y2;
    cout << "Input the third 2-D coordinate: ";
    cin >> x3 >> y3;
    
    leng1 = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    leng2 = sqrt( (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) );
    leng3 = sqrt( (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) );
    
    if ( (leng1 + leng2 > leng3) && (leng1 + leng3 > leng2) 
            && (leng2 + leng3 > leng1) ) 
    {
        cout << "That is a valid triangle" << endl;
        if (leng1 == leng2 && leng2 == leng3) 
            cout << "That is an Equilateral triangle" << endl;
        else if (leng1 == leng2 || leng2 == leng3 || leng1 == leng3) 
            cout << "That is an Isosceles triangle" << endl;
            else cout << "That is a Scalene triangle" << endl;
    }    
    else cout << "That is not a valid triangle" << endl;
    return 0;
}