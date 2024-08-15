#include <iostream>
#include <list>
using namespace std;
/*
void assign(list<int> &lst2){
       list <int>::iterator it=lst2.begin();
        for(it=lst2.begin();it!=lst2.end();it++){

          cin>>*it;
      }
      cout<<endl;
       for(it=lst2.begin();it!=lst2.end();it++){
          cout<<*it<<" ";
      }

}
*/
int main()
{

    list <int> list1;

    list1.push_back(24);
     list1.push_back(12);
      list1.push_back(78);
      list1.push_back(90);
      list1.push_back(3);
      list1.push_back(45);
      list1.push_back(33);
      list1.pop_back();
      list1.pop_back();
      list1.pop_front();
      list1.push_front(24);

      list<int>::iterator it2=list1.begin();

      advance(it2,3);  //iterate to 3rd position
       list1.insert(it2,100);

      list<int>::iterator it=list1.begin();

      for(it=list1.begin();it!=list1.end();it++){
        cout<<*it<<" ";
      }

//=====================================================================
/*
       list<int> list2(3);

       assign(list2);

*/


}
