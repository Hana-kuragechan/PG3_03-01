#include<stdio.h>
#include<list>
#include<vector>
int main() {
	std::list<const char*>lst{ 
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome"
		"Sugamo","Otuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	printf("1970年以前の駅\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		
		printf("%s", *itr);
	}

	printf("\n1970年の駅\n");
	for (auto itr = lst.begin();  itr !=lst.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = lst.insert(itr, "Nishi-Nippori");
			printf("%s", *itr);
			++itr;
		}
		printf("%s", *itr);
	}
	printf("\n2020年の駅\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = lst.insert(itr, "Takanawa Gateway");
			printf("%s", *itr);
			++itr;
		}
		printf("%s", *itr);
	}
	return 0;
}