#include <algorithm>
#include <iostream>
using namespace std;

int change(int current){
    if(current == 0){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int light[n];
    
    for(int i=0;i<n;++i){
        cin>>light[i];
    }
    
    int student;
    cin>>student;
    
    for(int i=0;i<student;++i){
        int gender;
        int num;
        cin>>gender>>num;
        
        if(gender == 1){
            // 남자일경우
            for(int j=num-1;j<n;j+=num){
                light[j] = change(light[j]);
            }
        }
        else{ 
            //여자일경우
            int index = 1; 
            int newNum = num-1;
            light[newNum] = change(light[newNum]);
            
            while(true){ 
                if(newNum-index<0 || newNum+index >= n){
                    break;
                }
                if(light[newNum-index] == light[newNum+index]){
                    light[newNum-index] = change(light[newNum-index]);
                    light[newNum+index] = change(light[newNum+index]);
                } 
                else{
                    break;
                } 
                index++;
            }
        }  
    }
    
    for(int i=0;i<n;++i){
        cout << light[i] << " ";
        if((i + 1) % 20 == 0) cout << '\n';
    }
    return 0;
}
