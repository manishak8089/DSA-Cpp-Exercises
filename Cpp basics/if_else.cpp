#include<iostream>
using namespace std;
int main(){
   int age;
   cin >> age;
if (age < 18){
    cout<< "not eligible for job";
}else if(age<=54){
    cout<<"Eligible for job\n";
}
else if (age<=57){
    cout<<"eligible for job, retirement soon";
}else{
    cout<<"retirement soon";
}

}