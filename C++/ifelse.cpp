#include<bits/stdc++.h>
using namespace std;
int main(){
// adult or not using if else
    //   int age;
    //   cin >> age;
    //   if(age >=18){
    //       cout << "adult";
    //   }
       
    //   else if (age<18){
    //       cout << "not adult";
    //   }
    
    // else{
    //     cout << "not adult";
    // }
       
       /* school grade system
       a. below 25 - d
       b. 25 to 45 - c
       c. 46 to 55 - b
       d. 56 to 100 -a
       
       ask user to enter mark and print grade
       
       
       
       */
        //  int mark;
        //  cin >> mark ;
        //  if (mark < 25){
        //      cout << "d";
        //  }
        //  else if ( mark <= 45)
        //  {
        //      cout << "c";
        //  }
         
        //  else if (mark <= 55)
        //  {
        //      cout << "b";
        //  }
         
        //  else if (mark <= 100)
        //  {
        //      cout << "a";
        //  }
        
        /*
        age <18 == not eligible for job
        age >=18 == eligible
        age>= 55 <=57 == eligible but retirement  soon
        age >57 retirement time
        
        */
        int age;
        cin >> age ;
        if(age <18){
            cout << "not eligible ";
            
        }
        else if (age <=57){
            cout << "eligible" ;
            if(age >=55)
            {
                cout << ",but retirement soon";
            }
        }
       
        else{
            cout << "retirement time";
        }
    
         
         
    return 0;
}