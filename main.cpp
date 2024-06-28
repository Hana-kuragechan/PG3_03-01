#include"Circle.h"
#include"Rectangle.h"
int main() {
	IShape* shape[2];
	shape[0] = new Circle;
	shape[1] = new Rectangle;

	//面積を計算
	shape[0]->Size();
	shape[1]->Size();
	//計算結果を表示
	shape[0]->Draw();
	shape[1]->Draw();

	delete shape[0];
	delete shape[1];
	
	return 0;
}