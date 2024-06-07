#include<stdio.h>

template<typename Type>
class Number
{
public:
	Type a;
	Type b;

	Number(Type a, Type b) :a(a), b(b) {};

	Type Min() {
		if (a > b) {
			return static_cast<Type>(b);
		}
		else if (a < b) {
			return static_cast<Type>(a);
		}
	}
private:

};


int main() {
	
	///int型
	Number<int>num1(10, 20);
	///float型
	Number<float>num2(8.2f, 3.3f);
	///double型
	Number<float>num3(10.2, 6.7);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());
	printf("%lf\n", num3.Min());
	return 0;
}