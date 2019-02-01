#include <iostream>
#include <cstdint>
#include <cmath>
#include <cstdlib>

//jooooooooooooooooooook.
//i am not talk for evil.
//this is item for (joke or idea).

template<class T,class F,class Fd>
const T NuTomMethod(const T& In,F A, Fd B) {//do you know joke mean?

	T Hoge = In;

	for (std::size_t i = 0; (1.0 / (1.0 / B(Hoge)))*i < 1.0; i++) {
		Hoge=(A(Hoge) / B(Hoge))*(i*(1.0/(1.0/B(Hoge))));
	}

	return (Hoge==In) ? Hoge:In;//近似解でもいいですが、記号がありません。執筆時は。
}

int main() {

	double V = 10;
	double M = 0.000001;
	auto Fa = [](const double& What) {return What; };
	auto Fb = [&](const double Delta) {return  (V - Delta)*M; };
	auto R = NuTomMethod<double>(V, Fa, Fb);

	std::cout << R << std::endl;

	return EXIT_SUCCESS;
}