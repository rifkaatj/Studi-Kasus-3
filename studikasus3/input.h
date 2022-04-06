using namespace std;

class Input{
public:
  void cetak(){
    cout<<"======Menu Rumah Makan======"<<endl;
    cout<<"============================"<<endl;
    cout<<" 1. Ayam Geprek  : Rp.21.000"<<endl;
    cout<<" 2. Ayam Goreng  : Rp.17.000"<<endl;
    cout<<" 3. Udang Goreng : Rp.19.000"<<endl;
    cout<<" 4. Cumi Goreng  : Rp.20.000"<<endl;
    cout<<" 5. Udang Bakar  : Rp.25.000"<<endl;
    cout<<"============================"<<endl;
    cout<<" Ayam Geprek "; cin>>ageprek;
    cout<<" Ayam Goreng "; cin>>agoreng;
    cout<<" Udang Goreng "; cin>>ugoreng;
    cout<<" Cumi Goreng "; cin>>cgoreng;
    cout<<" Udang Bakar"; cin>>ubakar;
  
  }

  void toFile(){
    tulis_data.open("../pra_data/input.txt");
    tulis_data<<ageprek<<endl;
    tulis_data<<agoreng<<endl;
    tulis_data<<ugoreng<<endl;
    tulis_data<<cgoreng<<endl;
    tulis_data<<ubakar<<endl;
    tulis_data.close();
  }

  private :
    ofstream tulis_data;
    int ageprek, agoreng, ugoreng, cgoreng, ubakar;
};