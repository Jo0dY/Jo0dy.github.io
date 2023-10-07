#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int resulta;
    int resultb;
    int resultc;

    cin >> a;
    cin >> b;

    if (b > 45) {
        resulta = a;
        resultb = b - 45;
    }
    else if (b == 45) {
        resulta = a;
        resultb = 0;
    }
   
    else{
        resulta = (a - 1);
        resultc = 45-b;
        resultb = 60 - resultc;
        if (a == 0)
            resulta = 24 - 1;
    }

   
    cout << resulta  <<" "<< resultb << endl;
    return 0;
}
