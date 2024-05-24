//#include <iostream>
//#include <typeinfo>
//
//using namespace std;
//
//// �º�������
//class Add {
//public:
//    Add(int n) : num(n) {}
//
//    // ģ�廯�� operator()��֧����������
//    template<typename T>
//    T operator()(T x) const 
//    {
//        return x + num;
//    }
//
//    // ֧������������ģ�廯 operator()
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
//    // ʹ��һ������
//    std::cout << add(10) << std::endl;  // �����15
//
//    // ʹ����������
//    std::cout << add(10, 20.5) << std::endl;  // �����35.5
//
//    // ʹ�ø���������
//    std::cout << add(10.5) << std::endl;  // �����15.5
//
//    return 0;
//}


//����ʵ�����
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
//	int result = RecallFunc(a, a + 4,20);//resultΪ1
//	cout << result << endl;
//	result = RecallFunc(a, a + 4,10);//resultΪ3
//	cout << result << endl;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    auto f = [](int a) { return a; }(20);
//    int*  f(); //lambda���ʽʹ�õĲ����ǲ��񵽵�a
//
//    //��ͨ���������塱����ġ�()���������
//
//    auto x = [](int a) {cout << "a = " << a << endl; };
//    x(123);//lambda���ʽʹ�õĲ������������ݵĲ���123
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 123;
//    auto f = [a] { a = 123; cout << a << endl; };
//    a = 321;
//    f(); // �����123
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 123;
//    auto f = [&a] {a = 2; cout << a << endl; };
//    f(); // �����2������123
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 123;
//    auto f = [=,a] { cout << a << endl; };
//    a = 552;
//    f(); // ���:552������123
//}

//#include <iostream>
//
//int main() {
//    // ���岢��������һ��lambda���ʽ
//    auto result = [](int x, int y) {
//        return x + y;
//        } (3, 4); // ���ݲ���3��4
//
//    std::cout << "Result: " << result << std::endl; // �����Result: 7
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


////Ƕ��lambda���ʽ
//#include <iostream>
//
//int main() {
//    // Ƕ��ʹ��Lambda���ʽ
//    auto outerLambda = [](int x) {
//        // �ڲ�Lambda���ʽ
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
//    std::cout << "Nested Lambda Result: " << nestedResult << std::endl;//�����10
//
//    return 0;
//}
