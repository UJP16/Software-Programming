#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime;
    
    cout<< "PLease enter positiove integer"<<endl;
    cin>>num;
    
    for(int i=3;i <= num;i++)
    {
        prime = true;
    
    for(int n =2;n<i-1;n++)
    {
        
        if(i%n==0)
        
        {
            
            prime = false;
         }
    }
         if(prime)
         {
         std::cout << i <<" is prime number" << std::endl;
         }
    }
	// your code goes here
	return 0;


}
