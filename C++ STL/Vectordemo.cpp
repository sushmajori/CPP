#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5};
    vector <int> :: iterator itr;
    v.push_back(6);
    v.pop_back();

    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl;
    v.resize(8);
    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"Maximum "<<v.max_size()<<endl;

    if(v.empty()==1)
    {
        cout<<"Vecor is empty"<<endl;
    }
    else
    {
        cout<<"Vector is not empty"<<endl;
    }
    // Display the value of vector using for each loop
    cout<<"Display the value of vector using for each loop"<<endl;
    for(int x: v)
    {
        cout<<x<<endl;
    }

    // Display value of vector using for loop
    cout<<"Display value of vector using for loop"<<endl;
    for(auto i = v.begin(); i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
    // Display value of vector using iterator
    cout<<"Display value of vector using iteraor"<<endl;
    for(itr = v.begin(); itr!=v.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    // display value  of vector using reverse order
    cout<<"Display value of vector using reverse order"<<endl;
     for(auto i = v.rbegin(); i!= v.rend(); i++)
    {
        cout<<*i<<endl;
    }
   
    return 0;
}
