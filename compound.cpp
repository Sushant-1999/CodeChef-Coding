#include <iostream>
#include <bits/stdc++.h>
using namespace std;


float Pow(float base, float ex){
    // power of 0
    if (ex == 0){
        return 1;
    // negative exponenet
    }else if( ex < 0){
        return 1 / Pow(base, -ex);
    // even exponenet
    }else if ((int)ex % 2 == 0){
        float half_pow = Pow(base, ex/2);
        return half_pow * half_pow;
    //integer exponenet
    }else{
        return base * Pow(base, ex - 1);
    }
}

float  Result(float  P, float  R, float  Y) {
    float  inn, res;
    inn = (1 + (R/100));
    inn = Pow(inn, Y);
    res = P * inn;
    return res;
}

int main() {
    float  P, R, Y, A, i, j, temp;
    cin >> P;
    cin >> R;
    cin >> Y;

    //Formula => A = P(1 + (R)/100)^n

    temp = Result(P, R, Y);
    printf("%.2f", temp);
    return 0;


}