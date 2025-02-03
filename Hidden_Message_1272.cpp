#include<iostream>
#include<string> // Include <string> for getline
#include<vector>

using namespace std;
int main(){
    int num;
    cin>>num;
    cin.ignore();   // Ignore the newline left in the buffer

    vector<string> test(num);
    vector<string> finals(num);

    string tt;


    for(int  i = 0; i < num; i++){
        getline(cin,test[i]);
        tt = test[i];

        finals[i].clear(); //finals[i] = ""; assign an empty string

        bool founddot = false;
        bool started  = true;
        for(size_t k = 0; k < tt.length(); k++){
            if(tt[k] != ' '){
                if(started){
                    finals[i]+=tt[k];
                    started = false;
                }
            }else{
                started = true;
            }
            
            if(tt[k]=='.'){
                founddot = true;  //loop ends  and then next char after dot comes
            }
            else if(founddot){ //here comes the next char which is next to the dot
                if(tt[k]!='\0'){
                    finals[i].append(1, tt[k]);     
                }
                else{
                    finals[i].append(1,'\0');
                }
                founddot = false;
            }
                       
        }
        
    }
    for(const auto& op : finals){
        cout << op << endl;
    }
    return 0;    
}
