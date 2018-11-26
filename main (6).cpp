//this program is to calculate the number of chocolate par
//author : Abdelrahman osama
//individual task assignment-3 page 829

#include <iostream>

using namespace std;


int numberofchocholate(int chocholate){
      ///bonus = number of bonus chocolate(((choc/7+choc%7/7))

    if (chocholate <7){
        return chocholate ;

   }
   else{

       return numberofchocholate((chocholate/7+chocholate%7)/7)+chocholate+numberofchocholate(chocholate/7);
   }

}

int main(){
    int numdollers =0 ;
    cout << "Enter the money" << endl ;
    cin >> numdollers;
    cout <<"the number of chocolate is : " << numberofchocholate(numdollers) << endl;
    return 0;
}


