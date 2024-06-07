#include<stdio.h>

template<typename Type1, typename Type2>
class Number
{
public:
	Type1 a;
	Type2 b;

	 Number(Type1 a, Type2 b) :a(a), b(b) {};

	Type1 Min() {
		if (a > b) {
			return static_cast<Type1>(b);
		}
		else if (a < b) {
			return static_cast<Type1>(a);
		}
	}
private:

};


int main() {
	
	///戻り値int
	Number<int,float>num1(10, 20.4f);
	Number<int, double>num2(10, 6.7);
	///戻り値float
	Number<float,double>num3(8.2f, 3.3);
	Number<float,int>num4(8.2f, 3);
	///戻り値double
	Number<double,int>num5(7.9, 8);
	Number<double,float>num6(3.7, 6.8f);
	

	printf("%d\n", num1.Min());
	printf("%d\n", num2.Min());

	printf("%f\n", num3.Min());
	printf("%f\n", num4.Min());

	printf("%lf\n", num5.Min());
	printf("%lf\n", num6.Min());
	return 0;
}