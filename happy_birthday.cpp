#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


int main(){
    system ("cls");
    int day,month,year,k,j;
    cout<<"Enter your bdate: DD MM YYYY ";
    cin>>day>>month>>year;

    if(month==1||month==2){
        month+=12;
        year--;
    }

    int q =day;
    int m =month;
    k=year%100;
    j=year/100;

    int h =(q+(13*(m+1))/5+k+(k/4)+(j/4)+5*j)%7;
    h =(h+5)%7;

    string week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday", "Sunday",};


   

    cout<<"The day, you born is; "<<week[h]<<endl;


}