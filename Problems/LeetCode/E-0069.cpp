#include<bits/stdc++.h>
#define TOLERANCE 0.001

/*

 _       _________ _______  _______ 
( (    /|\__   __/(  ____ \(  ____ \
|  \  ( |   ) (   | (    \/| (    \/
|   \ | |   | |   | |      | (__    
| (\ \) |   | |   | |      |  __)   
| | \   |   | |   | |      | (      
| )  \  |___) (___| (____/\| (____/\
|/    )_)\_______/(_______/(_______/
                                    
*/

using namespace std;

// Newton's Method of Square Root Approximation
int mySqrt(int x) {
    double n = x;
    while (fabs(pow(n, 2) - x) > TOLERANCE) {
        n = (n + x / n) / 2;
    }
    return n;
}

int main() {
    int num = 234234234;
    cout<<sqrt(num)-mySqrt(num);
    return 0;
}