#include<iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;

}

string Status_lulus(float r){
    if (r >= 60)
        return "lolos";
    else
        return "gagal";

}

int main(){
    float niIBT,niIMT,rerata;
    string status;

    cout <<"masukkan nilai bahasa inggris";
    cin>>niIBT;
    cout <<"masukkan nilai matematika";
    cin>>niIMT;

    //rerata = (niIBT+niIMT)/2;
    //if(rerata >=60)
    //  status = "lolos";
    //else
        //status = "gagal";
    rerata = Rata_rata(niIBT,niIMT);
    //status =status_lulus(rerata);

    cout<< "status kelulusan =" <<Status_lulus(rerata)<<",dengan nilai rerata = "<<rerata<<endl;
    
}
