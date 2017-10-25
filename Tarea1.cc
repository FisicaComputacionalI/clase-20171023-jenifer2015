 #include<iostream>

using  namespace std;
int esprimo(int x){
  int flag=0;
  for (int i=2; i<= (x/2); i++)
    {
      if(x%i==0)
	flag=1;
    }
      return flag;
}
  int main(){
  int p, S=12;
  cout<<"Ingrese un numero p "<<endl;
  cin>>p;
  do{
    if((p%2)==0){
      p = p+1;}

    if (esprimo(p)==0 ){
      p = p + 2;
      }
  } while (esprimo(p)==0);
    cout<<p<<endl;


  return 0;
}
