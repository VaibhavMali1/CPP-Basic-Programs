#include<iostream>
using namespace::std;

int main()
{
	int a1[20],a2[20],u[40],i,j,k,n,m;

    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a1[i];
    }

    cout<<"\nEnter size of second array: ";
    cin>>m;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<m;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a2[i];
    }


    for(i=0,j=0,k=0;i<n&&j<m;){
        if(a1[i]<a2[j]){
            u[k]=a1[i];
            i++;
            k++;
        }
        else if(a1[i]>a2[j]){
            u[k]=a2[j];
            j++;
            k++;
        }
        else{
            u[k]=a1[i];
            i++;
            j++;
            k++;
        }
    }

    if(i<n){
        for(;i<n;++i){
            u[k]=a1[i];
            k++;
        }
    }
    else if(j<m){
        for(;j<m;++j){
            u[k]=a2[j];
            k++;
        }
    }

    cout<<"\nUnion of two arrays is :: \n\n";
    for(i=0;i<k;++i)
    {
        cout<<u[i]<<"  ";
    }

    cout<<"\n";

    return 0;
}