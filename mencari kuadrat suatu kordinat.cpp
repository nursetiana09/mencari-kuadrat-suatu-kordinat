#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

          cout << "\nPROGRAM MENCARI KUADRAT SUATU KORDINAT" <<endl;
          cout << "=======================================\n" <<endl;

          cout<<"masukan nilai x = ";cin>>x;
          cout<<"masukan nilai y = ";cin>>y;
          cout<<"\nkordinat titik(x,y) = "<<x<<" "<<y<<endl;

          if(x>0 && y>0)
          {
              cout<<"\nkuadrat 1"<<endl;
          }
          else if (x<0 && y<0)
           {
            cout<<"\nkuadrat 2"<<endl;
           }
           else if(x<0 && y<0)
           {
              cout<<"\nkuadrat 3"<<endl;
           }
           else
           {
               cout<<"\nkuadrat 4"<<endl;
           }
       return 0;
}
