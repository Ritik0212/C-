#include<iostream>
using namespace std;
int search(int *a, int Res[]);
main(){
    int arr[]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
    int frame=3,count=0,i;
    int Res[frame];
    int temp , size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<frame;i++){
        Res[i]=arr[i];
        count++;
    }
    temp=count;
    i=0;
    while(temp=!size){
        if(search(&arr[temp], Res)==0){
            if(i<=2){
                Res[i++]=arr[temp];
                count++;
            }
            else{
                i=0;
                Res[i++]=arr[temp];
                count++;
            }
        }
        temp++;
    }
    cout<<count;
}
int search(int *a, int Res[]){
    int i, flag=0, s = sizeof(Res)/sizeof(Res[0]);
    cout<<s;
    for(i=0;i<s;i++){
        if(*a==Res[i]){
            flag=1;
            break;
        }
    }
   return flag; 
}
