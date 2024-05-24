//#include <iostream>
//#include <typeinfo>
//
//using namespace std;
//
//// 仿函数定义
//class Add {
//public:
//    Add(int n) : num(n) {}
//
//    // 模板化的 operator()，支持任意类型
//    template<typename T>
//    T operator()(T x) const 
//    {
//        return x + num;
//    }
//
//    // 支持两个参数的模板化 operator()
//    template<typename T, typename U>
//    auto operator()(T x, U y) const
//    {
//        return x + y + num;
//    }
//
//private:
//    int num;
//};
//
//int main() {
//    Add add(5);
//
//    // 使用一个参数
//    std::cout << add(10) << std::endl;  // 输出：15
//
//    // 使用两个参数
//    std::cout << add(10, 20.5) << std::endl;  // 输出：35.5
//
//    // 使用浮点数参数
//    std::cout << add(10.5) << std::endl;  // 输出：15.5
//
//    return 0;
//}


//测试实验代码
//#include <iostream>
//using namespace std;
//
//class Judge
//{
//public:
//	Judge(int n)
//		:
//		threshold(n)
//	{}
//
//	bool operator() (int num) const 
//	{
//		return num > 10 ? true : false;
//	}
//
//	bool operator() (int num,int threshold) const {
//		return num > threshold ? true : false;
//	}
//
//private:
//	const int threshold;
//};
//
//int RecallFunc(int* start, int* end,int threshold)
//{
//	int count = 0;
//	Judge j(10);
//	for (int* i = start; i != end + 1; i++) {
//		count =  j(*i, threshold) ? count + 1 : count;
//	}
//	return count;
//}
//
//int main() {
//	int a[5] = { 10,100,11,5,19 };
//
//	int result = RecallFunc(a, a + 4,20);//result为1
//	cout << result << endl;
//	result = RecallFunc(a, a + 4,10);//result为3
//	cout << result << endl;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    auto f = [](int a) { return a; }(20);
//    int*  f(); //lambda表达式使用的参数是捕获到的a
//
//    //或通过“函数体”后面的‘()’传入参数
//
//    auto x = [](int a) {cout << "a = " << a << endl; };
//    x(123);//lambda表达式使用的参数是自主传递的参数123
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 123;
//    auto f = [a] { a = 123; cout << a << endl; };
//    a = 321;
//    f(); // 输出：123
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 123;
//    auto f = [&a] {a = 2; cout << a << endl; };
//    f(); // 输出：2、不是123
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 123;
//    auto f = [=,a] { cout << a << endl; };
//    a = 552;
//    f(); // 输出:552、不是123
//}

//#include <iostream>
//
//int main() {
//    // 定义并立即调用一个lambda表达式
//    auto result = [](int x, int y) {
//        return x + y;
//        } (3, 4); // 传递参数3和4
//
//    std::cout << "Result: " << result << std::endl; // 输出：Result: 7
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int RecallFunc(int* start, int* end, bool (*pf)(int,int)) {
//    int count = 0;
//    int threshold = *start;
//    for (int* i = start+1; i != end + 1; i++) {
//        count = pf(*i, threshold) ? count + 1 : count;
//    }
//    return count;
//}
//
//bool IsGreaterThanTen(int num, int threshold) {
//    return num > threshold ? true : false;
//}
//
//int main() {
//    int a[5] = { 10,100,11,5,19 };
//    int result = RecallFunc(a, a + 4, IsGreaterThanTen);
//    cout << result << endl;
//    return 0;
//}


////嵌套lambda表达式
//#include <iostream>
//
//int main() {
//    // 嵌套使用Lambda表达式
//    auto outerLambda = [](int x) {
//        // 内部Lambda表达式
//        auto innerLambda = [](int y) {
//            return y * 2;
//            };
//
//        int result = innerLambda(x);
//        return result;
//        };
//
//    int num = 5;
//    int nestedResult = outerLambda(num);
//
//    std::cout << "Nested Lambda Result: " << nestedResult << std::endl;//输出：10
//
//    return 0;
//}
