
#include <iostream>
#include <vector>

class FizzBuzzDivisor {
public:
	FizzBuzzDivisor(int divisor, std::string name) {
		this->divisor = divisor;
		this->name = name;
	}
	~FizzBuzzDivisor() {}

	bool CanDivide(int number) {
		return number % divisor == 0;
	}

	int GetDivisor() {
		return divisor;
	}

	void SetDivisor(int value) {
		divisor = value;
	}

	std::string GetName() {
		return name;
	}

	void SetName(std::string value) {
		name = value;
	}

private:
	int divisor;
	std::string name;
};

class Range {
public:
	Range(int begin = 0, int end = 0) {
		this->begin = begin;
		this->end = end;
	}
	~Range() {}

	int GetBegin() {
		return begin;
	}

	void SetBegin(int value) {
		begin = value;
	}

	int GetEnd() {
		return end;
	}

	void SetEnd(int value) {
		end = value;
	}

private:
	int begin;
	int end;
};

class FizzBuzz {
public:
	FizzBuzz() {}
	~FizzBuzz() {}

	void PushBackDivisor(FizzBuzzDivisor div) {
		divisors.push_back(div);
	}

	Range GetRange() {
		return range;
	}

	void SetRange(Range range) {
		this->range = range;
	}

	void Run() {
		for (int number = range.GetBegin(); number <= range.GetEnd(); number++) {
			int should_print_value = 1;
			for (auto &div : divisors) {
				if (div.CanDivide(number)) {
					std::cout << div.GetName();
					should_print_value = 0;
				}
			}
			if (should_print_value) {
				std::cout << number;
			}
			std::cout << std::endl;
		}
	}

private:
	std::vector<FizzBuzzDivisor> divisors;
	Range range;
};

int main() {
	FizzBuzz app;
	
	app.PushBackDivisor(FizzBuzzDivisor(3, "Fizz"));
	app.PushBackDivisor(FizzBuzzDivisor(5, "Buzz"));

	app.SetRange(Range(1, 100));

	app.Run();

#if 0 // GARBAGE CODE
	for (int i=1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz");
		} else if (i % 3 == 0) {
			printf("Fizz");
		} else if (i % 5 == 0) {
			printf("Buzz");
		} else {
			printf("%i", i);
		}
		printf("\n");
	}
#endif

	return 0;
}

