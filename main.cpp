#include <iostream>

using namespace std;

int main()
{
    int m[4][4], i=0, j=0, k=0;
    char op;
    for(i=0; i<4; ++i){
        for(j=0; j<4; ++j){
            cin>>m[i][j];
        }
    }
    while(cin>>op){
        if(op=='q'){
            break;
        }
        if(op=='j'){
            for(j=0; j<4; ++j){
                for(i=0; i<4; ++i){
                    if(m[i][j]!=0){
                        for(k=i+1; k<4; ++k){
                            if(m[k][j]!=0){
                                if(m[k][j]==m[i][j]){
                                    m[i][j]=m[i][j]+m[k][j];
                                    m[k][j]=0;
                                    break;
                                }
                            }
                        }
                        while(m[i-1][j]==0){
                            m[i-1][j]=m[i][j];
                            m[i][j]=0;
                        }
                        i=k;
                    }
                }
            }
        }
        for(i=0; i<4; ++i){
            for(j=0; j<4; ++j){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
