#include<iostream>
using namespace std;
void box(){
    for ( int i = 0; i < 7 ; i++){
        for ( int j = 0; j < 5 ; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void halfpry(){
    char c= 'F';
    for ( int i = 0; i < 6 ; i++){
        for ( int j = 0; j < i ; j++){
            
            cout<<(char)(c-i+j);
            
        }
        cout<<"\n";
    }
}
void pry(){
    for ( int i = 0; i < 7 ; i++){
        for ( int j = 0; j < 7-i ; j++){     
             cout<<" "; 
        }
        char ch ='A';
        for ( int k = 0; k < 2*i + 1; k++){
            if(k<(i+1/2)){
                cout<<ch;
                ch++;
            }
            else{
                cout<<ch;
                ch--;
            }
            
        }
        cout<<"\n";
    }
}
void shape(){
    for ( int i = 0; i < 7 ; i++){
        for ( int k = 0; k < 4*i + 1 ; k++){        
            cout<<"* ";  
        }
        for ( int j = 0; j < 7-i ; j++){        
            cout<<"  ";  
        }
        for ( int k = 0; k < 4*i + 1 ; k++){        
            cout<<"* ";  
        }
        cout<<"\n";
    }
   for ( int i = 0; i < 7 ; i++){
        for ( int j = 0; j < i+1 ; j++){        
            cout<<"* ";  
        }
        for ( int k = 0; k < 4*(6-i)+ 1 ; k++){        
            cout<<" ";  
        }
        for ( int j = 0; j < i+1 ; j++){        
            cout<<"* ";  
        }
        cout<<"\n";
    }
}
void shape2(){
    int k=0;
    for ( int i = 0; i < 7 ; i++){
        
        for ( int j = 0; j < i ; j++){ 
            k++;       
            cout<<k<<" ";  
        }
        
        cout<<"\n";
    }
}
int main(){

    shape();

    return 0;
}