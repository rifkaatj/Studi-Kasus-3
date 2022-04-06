using namespace std;

class process{
  public:
    void cetak(){
      cout<<"Chandra Rahmad Irfansyah \n";
    }
    void getData(){
      ambil_data.open("../dummy/out_input.txt");
      bool agoreng = true;
      bool ageprek = true;
      bool ugoreng = true;
      bool cgoreng = true;
      bool abakar = true;
      
      while(!ambil_data.eof()){
        if(agoreng){
          ambil_data>>jml_ag;
          agoreng = false;
        }
        else if (ageprek){
          ambil_data>>jml_age;
          ageprek = false;
        }
        else if (ugoreng){
          ambil_data>>jml_ugo;
          ugoreng = false;
        }
        else if (cgoreng){
          ambil_data>>jml_cgo;
          cgoreng = false;
        }
        else{
          ambil_data>>jml_ab;
        }
      }
      ambil_data.close();
    }

void toFile(){
  int total = (hrg_agoreng * jml_ag) + (hrg_ageprek * jml_age) + (hrg_cgoreng * jml_cgo) + (hrg_ugoreng * jml_ugo) +(hrg_abakar * jml_ab);
  float batas = 150000;
  float batas2 = 50000;
  float batas3 = 25000;
  float t2 = float(total);
  float diskon = (t2 * 0.15)+5000;
  float diskon2 = (t2 * 0.35)+8000;
  if((total>batas3)&&(total<batas2)){
    t2 = t2 - 3000;
  }
  else if((total>batas2)&&(total<batas)){
    t2 = t2 - diskon;
  }
  else{
    t2 = t2 - diskon2;
  }

  tulis_data.open("../pra_data/proses.txt");
  tulis_data<<total<<endl;
  tulis_data<<diskon<<endl;
  tulis_data<<t2<<endl;
  tulis_data<<jml_ag<<endl;
  tulis_data<<jml_age<<endl;
  tulis_data<<jml_cgo<<endl;
  tulis_data<<jml_ugo<<endl;
  tulis_data<<jml_ab;
  tulis_data.close();
}

  private:
    ofstream tulis_data;
    ifstream ambil_data;
    int jml_ag;
    int jml_age;
    int jml_ugo;
    int jml_cgo;
    int jml_ab;
    int hrg_agoreng = 17000;
    int hrg_ageprek = 21000;
    int hrg_abakar  = 25000;
    int hrg_cgoreng = 20000;
    int hrg_ugoreng = 19000;
};