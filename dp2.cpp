#include<iostream>

using namespace std;


int b[5][5]={0};

int mxe(int a,int b,int c){

int mx;

a<b?b<c?mx=c:mx=b:mx=a;

return mx;

}

void mi(int a[5][5]){

for(int i=0;i<5;i++){

    for(int j=0;j<5;j++){

      //  if(i==0 && j==0)
       // b[i][j]=a[i][j]+b[i][j-1];

        if(i==0)
        b[j][i]=a[j][i];

       // else if(j==0)
        //b[i][j]=a[i][j]+b[i-1][j];

        else if(j==0)
        b[j][i]=a[i][j]+max(b[j][i-1],b[j+1][i-1]);

        else if(j==4)
        b[j][i]=a[i][j]+max(b[j][i-1],b[j-1][i-1]);

        else
        b[j][i]=a[i][j]+mxe(b[j-1][i-1],b[j][i-1],b[j+1][i-1]);

    }

    }


}

//int mx(){


//}


int main(){

    int c[5][5]={{1,2,3,4,5},{1,3,2,3,1},{2,3,4,1,3},{4,5,1,2,3},{5,6,3,4,2}};

mi(c);

for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){

        cout<<b[i][k]<<" ";

    }
cout<<endl;
}

}
