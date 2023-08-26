#include <iostream>
#include <vector>

template <typename T>
T my_square(T& a) {
	a *= a;
	return a;
}

template <typename U>
void vec_sq(std::vector<U>& vect)
{
	for (auto& i : vect)
		i = my_square(i);
};

int main() {
	int a = 4;
	std::vector<int> b = {-1, 4, 8};
	std::cout << "[IN]: " << a;
	std::cout << "\n[OUT]: " << my_square(a) << std::endl;
	std::cout << "[IN]: ";
	for (auto& i : b)
	{
		std::cout << i;
		if (i != b[b.size() - 1])
			std::cout << ", ";
	}
	std::cout << "\n[OUT]: ";
	vec_sq(b);
	for (auto& i : b)
	{
		std::cout << i;
		if (i != b[b.size()-1])
		std::cout << ", ";
	}
	return 0;
}