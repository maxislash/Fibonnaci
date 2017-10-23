#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int fibonnaci(int n); //return the n number of the Fibonnaci sequence
bool div3(int f) ; //return true if f is divisible by 3 
bool div5(int f); //return true if f is divisible by 5
bool prime(int f); //return true if f is a prime number

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int f = fibonnaci(n); //f = number n of the Fibonnaci sequence
    
    bool d3 = div3(f);
    bool d5 = div5(f);
    
    if (d3 && d5) printf("FizzBuzz\n");
    else if (d3) printf("Fizz\n");
    else if (d5) printf("Buzz\n");
    else if (prime(f)) printf("BuzzFizz\n");
    else printf("%d\n", f);

    return 0;
}

int fibonnaci(int n) { //Fibonnaci sequence
    if (n == 0) return 0; //basecase
    else if (n == 1) return 1; //basecase
    else return fibonnaci(n-1) + fibonnaci(n-2); //recursion to compute the number wanted
}

bool div3(int f){ //return true if f is divisible by 3 
    if (f % 3 == 0)
        return true;
    else return false;
} 

bool div5(int f) { //return true if f is divisible by 5
    if (f % 5 == 0)
        return true;
    else return false;
}

bool prime(int f) { //return true if f is a prime number
    for(int i=2; i< sqrt(f); i++){ //Checking if the number between 2 and square root of f can divide f
        if(f % i == 0) {
            return false;
        }
    }
    return true;
}



