#include <iostream>  
using namespace std;  

int main(void)
{
   int i;

    cin>>i;

   if(i >10){
    cout<<"Guesss is too high"<<endl;
    cin>>i;
   }
   else if(i<10){
    cout<<"Guess Is too less "<<endl;
    cin>>i;
   }
   else {
    cout<<"Correct Guesss"<<endl;
    return;
   }
    
    return 0;
}