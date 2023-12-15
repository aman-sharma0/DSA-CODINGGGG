// //Divison Method
int FindBinary1(int num)
{
  int answer = 0;
  int i=0;
  while(num>0){
    int bit = num%2;
    answer = (bit*pow(10,i))+answer;
    num/=2;
    i+=1;
  }
  return answer;
}

int main()
{

  int n;
  cin >> n;

  int Binary = FindBinary1(n);

  cout << Binary << endl;

  return 0;
}