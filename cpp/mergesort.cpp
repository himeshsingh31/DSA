#include <iostream>
using namespace std;
void mainsort(int s,int e,int *arr){
int mid=(s+e)/2;


int len1=mid-s+1;
int len2=e-mid;
int mainindex=s;
int *first = new int[len1];
int *second = new int [len2];

for(int i=0;i<len1;i++){
first[i]=arr[mainindex++];
}


for(int i =0;i<len2;i++){
second[i]=arr[mainindex++];
}
int i =0;
int j=0;
mainindex = s;
while(i<len1 && j<len2){
    if(first[i]<second[j]){
        arr[mainindex++]=first[i];
    i++;
    }
else{
    arr[mainindex++]=second[j];
j++;
}


}

while(i<len1){
arr[mainindex++]=first[i];
i++;
}

while(j<len2){
arr[mainindex++]=second[j];
j++;
}

delete []first;
delete []second;



}
void mergesort(int s,int e, int arr[]){
    if(s>=e){
        return;
    }

int mid = (s+e)/2;
mergesort(s,mid,arr);
mergesort(mid+1,e,arr);

mainsort(s,e,arr);





}

int main() {
int arr[10]={93,82,7,642,5222,443,3,212,19,660};
for(int i=0;i<10;i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
int s=0;
int e =9;
mergesort(s,e,arr);
for(int i=0;i<10;i++){
    cout<<arr[i]<<"  ";
}
    return 0;
}