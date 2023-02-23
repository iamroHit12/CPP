#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &vec,int temp){
    vector<int> res;
    for(int i=0;i<vec.size();i++){
        if(vec[i]<temp){
            res.push_back(vec[i]);
        }else{
            res.push_back(temp);
        }
    }

    vec = res;
}

void sort(vector<int> &vec){
    if(vec.size()==1)
        return;

    int temp = vec[vec.size()-1];
    vec.pop_back();
    sort(vec);
    insert(vec,temp);
}

int main()
{
    vector<int> vec = {2,3,1,5,9,7};
    sort(vec);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}