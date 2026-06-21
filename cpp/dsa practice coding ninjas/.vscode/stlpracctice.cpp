#include <iostream>
#include <array>
#include <vector>
#include<list>
#include<algorithm>//for the sorting  and for the find () predefionded  function .
#include<functional>//for the greater fun in the sorting .
#include<numeric>//for the accumulate .

using namespace std;
int main()
{
    int hell[4] = {1, 2, 3, 4};
    array<int, 4> hello = {5, 6, 7, 8};

    cout << hello[0] << endl;
    cout << hell[0] << endl;

    // cout<<hell.at(2)<<endl;
    // this method cannot be used because in raw array we can only access the element by the manually like hell[1];
    cout << hello.at(2) << endl;

    cout << sizeof(hell) << endl;
    cout << sizeof(hello) << endl;

    int arr1[5]={1,2,3,4,5};
    array<int ,5>arr2 ={6,7,8,9,10};

    cout<<"arr1 "<<sizeof(arr1)<<endl;
    cout<<"arr2 "<<sizeof(arr2)<<endl;

    cout<<"arr1 "<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    cout <<"arr2 "<< arr2.size() << endl;
    // cout<<hell.size()<<endl;

    vector<int> arr={1,2,3};
   cout<< arr.capacity()<<endl;
   arr.push_back(4);
   cout<<arr.capacity()<<endl;
   arr.push_back(5);
   cout<<arr.capacity()<<endl;
   arr.push_back(6);
   arr.push_back(7);
   cout<<arr.capacity()<<endl;

    cout << hello.front() << endl;
    cout << hello.back() << endl;

    // here we can not do hell.front or back because of the raw array .

    vector<int> arihant;
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    arihant.push_back(1);
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    arihant.push_back(4);
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    arihant.push_back(3);
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    arihant.push_back(4);
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    arihant.push_back(5);
    cout << "the capicity of the arihant vector is >>>" << arihant.capacity() << endl;

    cout << arihant.front() << endl;
    cout << arihant.back() << endl;

    // here you can see that the size of that array is doubling by adding the elements .

    vector<int> last(arihant);
    cout<<"the last vector include the elements of the arihant vector.... "<<last[2]<<endl;


 if(find(arihant.begin(),arihant.end(),10)!= arihant.end()){
    cout<<"the element is found "<<endl;
 }
 else{
    cout<<"the element is not found ."<<endl;
 }


 int x=count(arihant.begin(),arihant.end(),4);
cout<<"the 4 is at "<<x<<" times in that array."<<endl;

    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(7);
    l.push_front(8);
    l.push_front(9);

for(int i :l){
    cout<<i<<endl;
}
cout<<"hello"<<endl;


sort(arihant.begin(),arihant.end(),greater<int>());
for(int i:arihant){
    cout<<i<<endl;
}

cout<<accumulate(arihant.begin(),arihant.end(),0)<<endl;


/*
there are also many more other ones which are like 
reverse(first_iterator, last_iterator) – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
*count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
*find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.
* binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
 *lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which         has a value not less than ‘x’.
 *upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last)                  which has a value greater than ‘x’. 
*/



    return 0;
}