#include <stdio.h>
#include <iostream>
#include<vector>

using namespace std;

int main(){

vector<int>ans;

ans.push_back(1);
ans.push_back(2);
ans.push_back(3);
ans.push_back(4);
ans.push_back(7);
ans.push_back(8);

int f =0;
int b = ans.size()-1;
int t =9;
while(f<=b)
{
if(f==b){
            cout<<"the value not found "<<endl;
            break;
        }


if(ans[f]+ans[b]==t){
    cout<<"the value founded and the values are "<<ans[f]<<" and "<<ans[b]<<" and the indexes are "<<f<<" and "<<b;
    break;
}

else if(ans[f]+ans[b]>t){
b--;
}



else if(ans[f]+ans[b]<t){
    f++;
}


}

return 0;
}