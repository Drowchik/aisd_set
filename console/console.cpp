#include <iostream>
#include <aisd_set/aisd_set.h>
#include <chrono>
using namespace std;
using namespace set_realization;

int main() {

	//TASK 1
	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 100 << " seconds"<< endl;
	//Average time, 1000 nums: 0.000195106 seconds														

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time vector, 1000 nums: " << time_count / 100 << " seconds" << endl;
	//Average time vector, 1000 nums: 0.00011154 seconds
	// 
	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average tima, 10000 nums: " << time_count / 100 << " seconds" << endl;
	//Average tima, 10000 nums: 0.00262845 seconds

	//double res = 0;
	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time vector, 10000 nums: " << time_count / 100 << " seconds" << endl;
	//Average time vector, 10000 nums: 0.00102622 seconds
	// 

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average tima, 100000 nums: " << time_count / 100 << " seconds" << endl;
	//Average tima, 100000 nums: 0.0442981 seconds
	// 
	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time vector, 10000 nums: " << time_count / 100 << " seconds" << endl;
	//answer 0.192364

	//2 TASK
	
	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-10000, 10000, 1000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < size; j++) {
	//	a.contains(random(-10000, 10000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time set, 1000 nums: 6.3815e-06 seconds
	// 
	//VECTOR
	//double res = 0;
	//vector<int> vec = random(-10000, 10000, 1000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < size; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-10000, 10000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time vector, 1000 nums: 1.2415e-05 seconds

	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-100000, 100000, 10000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	a.contains(random(-100000, 100000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time set, 1000 nums: 5.9438e-06 seconds

	//double res = 0;
	//vector<int> vec = random(-100000, 100000, 10000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-100000, 100000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time vector, 1000 nums: 1.39657e-05 seconds
	
	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-1000000, 1000000, 100000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	a.contains(random(-1000000, 1000000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time set, 1000 nums: 7.0102e-06 seconds
	// 
	//double res = 0;
	//vector<int> vec = random(-1000000, 1000000, 100000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-1000000, 1000000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;
	//Average contains time vector, 1000 nums: 8.65763e-05 seconds


	//TASK 3

	//insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 6.8722e-06 seconds

	//erase
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 6.8336e-06 seconds

	//vector insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 8.6143e-06 seconds

	
	//vector erase()
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-1000, 1000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 1.28001e-05 seconds

	//10.000

	//insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 1.00025e-05 seconds

	//erase
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 8.3108e-06 seconds

	//vector insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 1.17133e-05 seconds


	//vector erase()
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-10000, 10000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 5.85246e-05 seconds

	//100.000
	// 
	//insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 9.7221e-06 seconds

	//erase
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-100000, 100000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 9.9146e-06 seconds

	//vector insert
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-100000, 100000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;
	//Average time, 1000 nums: 7.5586e-06 seconds


	//vector erase()
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-100000, 100000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;
	//Average time, 1000 nums: 0.00033017 seconds
	return 0;
}