#include <iostream>
#include <string>
#include <vector>
using namespace std;


void clean(vector<int> &vec){

    while(vec.size() !=0){

        vec.pop_back();
    }

}

bool checkAllEqual(vector<int> &vec){


    bool result;
    for (size_t i=0 ; i < vec.size(); i++) {
        if( i < vec.size()-1){
           //cout << vec[i] << " and " << vec[i+1]<< endl;
           result =  (vec[i] == vec[i+1]);
        if(result== false) return false;
        else {
            //cout << "true" <<endl;
            result = true;
            }
        }
        //return result;
    }
    //cout <<"returning..." <<endl;
    return result;

}


void print(vector<int> vec){
    for(size_t i=0 ; i < vec.size() ; i++){

        cout << vec[i] <<" ";
    }
    cout <<endl;

}




int round(vector<int>& vec){

    int count =0;
    vector<int> temp;


   // cout << "size : " << vec.size() <<endl;
    while( checkAllEqual(vec)!=true){
        //print(vec);
        if( temp.size() !=0) clean(temp);
        if( temp.size() ==0){
            for(size_t i=0 ; i <vec.size() ; i++) temp.push_back(0);
        }
        for (size_t i=0 ; i < temp.size(); i++) {
            //cout <<" one" <<endl;

            if( i==0){
                // cout << " two " <<endl;
                if(vec[vec.size()-1] %2 ==1){
                  //  cout << " here " << vec[vec.size()-1] <<" and "<< vec[vec.size()-1]+1  <<endl;
                    vec[vec.size()-1] = vec[vec.size()-1]+1;

                }

                temp[i] = vec[vec.size()-1]/2;
            }else if(i !=0){
                if(vec[i-1] %2 ==1) vec[i-1] = vec[i-1]+1;
                temp[i] = vec[i-1] /2;
            }
        }
       // cout << "temp "; print(temp);
        //print(temp);
        for (size_t i=0 ; i < vec.size() ;i++){
            //cout << " three " <<endl;
            vec[i] = vec[i]/2;
            //print(vec);

        }
       // cout <<"vector 1 : ";
        //print(vec);
        //return 0;
        for (size_t i=0 ; i < vec.size() ;i++){
            //cout << " four" <<endl;
            vec[i] = vec[i] + temp[i];
        }


        //clean(temp);
        count++;
      // cout << "vector final "; print(vec);

    }
    return count-1;
}


int main (int argc, const char * argv[])
{

    int student;
    int candy;
    vector<int> classes;
    while(true){

        cin>> student;
        if( classes.size() != 0) clean(classes);
        if(student > 1){
        if(student ==0 ) return 0;
        for( int i=0 ; i < student
            ; i++){
            cin>> candy;
            classes.push_back(candy);

        }
        //cout <<"size : " <<classes.size() <<endl;
        if( classes.size() >1){
        cout << round(classes) <<" "<<classes[0] << endl;

        //cout << checkAllEqual(classes)<<endl;
       // if(  checkAllEqual(classes)==true ) cout << "true" <<endl;
       // else {cout << "false" <<endl;}


            }
        }


    }
}
