#include <iostream>
using namespace std;

class user{
protected:
string name;
string cnic;

public:
user(){
    name="";
    cnic="";
}
void setname(string n){name=n;}
string getname() { return name;}

void setcnic(string c){cnic=c;}
string getcnic() { return cnic;}
};

class teacher:public user{
    protected:
    int sallary;
    
    public:
    teacher(){
        sallary=0;
    }
    void setsallary(int s){sallary=s;}
int getsallary() { return sallary;}
    
    
};
class student:public user{
    private:
    int batch;
    
    public:
    student(){
        batch=0;
    }
    void setbatch(int b){batch=b;}
int getbatch() { return batch;}
    
    
};

int main() {
user someone;
someone.setname("ALI");
someone.setcnic("42101-56734-189");
 
teacher professor;
professor.setname("AHMAD");
professor.setcnic("20981-673108-567");
professor.setsallary(68000);

student wasmiya;
wasmiya.setname("WASMIYA FATIMA");
wasmiya.setcnic("1986-67833-346");
wasmiya.setbatch(2023);

cout<<" USER:"<<endl<<"NAME="<<someone.getname()<<endl<<"CNIC="<<someone.getcnic()<<endl<<endl<<"TEACHER:"<<endl<<"NAME="<<professor.getname()<<endl<<"CNIC="<<professor.getcnic()<<endl<<"SALLARY="<<professor.getsallary()<<endl<<endl<<"STUDENT:"<<endl<<"NAME="<<wasmiya.getname()<<endl<<"CINIC="<<wasmiya.getcnic()<<endl<<"BATCH="<<wasmiya.getbatch()<<endl;
    

return 0;
}
