template <typename T>
T max(T a, T b)
{
  return (a>b)?a:b;
}

template <typename T>
class ClassName
{
  // class member
};


int main(){
  int a=100;
  int b=50;

  max<int>(a, b);

  ClassName<int>();
}
