#include <iostream>
#include <list>
using namespace std;

int main(){

     list<int> lisE;
     list<int> lisO;
     int n,num1;
     cout<<"enter range :";
     cin>>n;

     for(int i=0;i<n;i++){
          cout<<"enter number";
          cin>>num1;
         if(num1%2==0){
            lisE.push_back(num1);
         }
         else{
            lisO.push_back(num1);
         }

     }
     list <int>::iterator it=lisE.begin();

     for(it=lisE.begin();it!=lisE.end();it++){
        cout<<*it<<" ";
     }
     cout<<endl;

      list <int>::iterator it2=lisO.begin();

     for(it2=lisO.begin();it2!=lisO.end();it2++){
        cout<<*it2<<" ";
     }

     list<int>::iterator it3=lisO.begin();

     advance(it3,4);
     lisO.insert(it3,1000);
}
