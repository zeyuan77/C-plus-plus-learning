//#include<iostream>
#include<string>//�ַ�������
//using namespace std;//�����ռ� ��׼
//#define X 3
////const ���γ���
//int main()
//{
//	//string b = "abc";
//	//bool flag1 = true;//��0����1
//	//bool flag2 = false;//0
//	//cout << "abc" << endl << endl;
//	//cout << X << X + 1 << endl;
//	//cout << b << "\n";
//	//cout << flag1 << endl << flag2 << endl;
//	/*int a = 0;
//	cin >> a;
//	cout << "a��ֵ����ˣ�" << a << endl;
//	double b = 3;
//	cin >> b;
//	cout << "b��ֵ����ˣ�" << b << endl;
//	string c = "";
//	cin >> c;
//	cout << "c����ˣ�" << c << endl;*/
//	//int f = 128;
//	//cout << (f & (f - 1)) << endl;//�ж�2����
//	/*int x = 0;
//	string y = "abc";
//	y = y + "aaa";
//	cin >> x;
//	if (x & 1)
//	{
//		cout <<x<< "������" << endl;
//	}
//	else
//		cout << y << endl;*/
//	int n = 0;
//	while (cin >>n)
//	{
//		int sum = 0;
//		for (int i = 0; i <= n; i++)
//		{
//			sum += i;
//		}
//		cout <<sum << endl;
//	 
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int* getArray(int a, int d, int n) ָ�뺯��
//{
//	int* ret = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		ret[i] = a + i * d;
//	}
//	return ret;
//}
//int main()
//{
//	int* ans = getArray(5, 3, 6);
//	for (int i = 0; i < 6; i++)
//	{
//		cout << ans[i] << endl;
//
//	}
//	
//	return 0;
//}
//����ָ�� void��*ptr����int a,int b)
//#include<iostream>
//using namespace std;
//typedef void(*ptr)(int a, int b);//����ָ������
//void fun1(int, int)
//{
//	cout << "fun1" << endl;
//}
//void fun2(int, int)
//{
//	cout << "fun2" << endl;
//}
//void fun3(int, int)
//{
//	cout << "fun3" << endl;
//}
//int main()
//{ //int a=5;
//	ptr ptr1 = fun1;
//	ptr ptrs[] = { fun1,fun2,fun3 };//����ָ������
//	ptr1(1, 2);
//	cout << ptrs[0] << endl;
//	cout << ptrs[1] << endl;
//	cout << ptrs[2] << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//struct point
//{
//	double x, y;
//};
//struct Circle
//{
//	point pt;
//	double radius;
//
//};
//void moveCircle(Circle*c, int x, int y)
//{
//	c->pt.x += x;
//	c->pt.y += y;
//}
//void printCircle(const Circle* c)
//{
//	cout << "(" << c->pt.x << "," << c->pt.y << ") " << c->radius << endl;
//}
//
//int main()
//{
//	Circle c = { {9,8},5 };
//	moveCircle(&c, 1, 1);
//	printCircle(&c);
//
//	return 0;
//}
//struct Info
//{
//	char _name[20];
//	int _role;
//	union
//	{
//		double score;
//		char course[20];
//
//	}_sc;
//	void info(const char name[20], int role, double s, const char c[20])
//	{
//		strcpy_s(_name, name);
//		_role = role;
//		if (s > 0)_sc.score = s;
//		if (strlen(c) > 0) strcpy_s(_sc.course, c);
//	}
//};
//#include<iostream>
//using namespace std;
//int* getGaplist(int* arr, int size)
//{
//	int* p = new int[size - 1];//���� ������ջ������p���٣�������ָ��Ķ�����������
//	for (int i = 0; i < size - 1; i++)
//	{
//		p[i] = arr[i + 1] - arr[i];
//	}
//	return p;
//}
//
//int main()
//{
//	int arr[] = { 1,5,6,4,4,3,3,2,1,9 };
//	int* p = getGaplist(arr, 10);
//	for (int i = 0; i < 9; i++)
//	{
//		cout << p[i] << ' ';
//	}
//	cout << endl;
//	delete[]p;//�ͷ��ڴ�ռ�
//	p = NULL;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 520;
//	int& b = a;
//	b = 1314;  
//	//int* const b = &a;���ñ�������ָ�볣����ʼ���ٽ�����
//	//*b = 1314;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int countAndsum(int arr[], int size, int target, int& count)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == target)
//		{
//			count++;
//			sum += target;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,2,2,6,6,7 };
//	int c = 0;
//	int sum=countAndsum(arr,10,2,c);
//	cout << sum << " " << c << endl;
//
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void allocmemory(char*& ptr, int bytes)//ָ������
//{
//	ptr = new char[bytes];
//	cout << "ptr�ĵ�ַ " << &ptr<<endl;
//}
//void test()
//{
//	char* p = NULL;
//	allocmemory(p, 5);
//	cout << "p�ĵ�ַ " << &p << endl;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class hero {
//public:
//	void setname(string name)
//	{
//		m_Name = name;
//	}
//	string getname()
//	{
//		return m_Name;
//	}
//	int getskillcount()
//	{
//		return m_SkillCount;
//	}
//	void setSpeed(int speed)
//	{
//		if (speed < 100 || speed>500)//���������Ч��
//		{
//			cout << "�ٶ����ò��Ϸ�" << endl;
//			return;
//		}
//		m_Speed = speed;
//	}
//	hero()//Ĭ�Ϲ��캯��
//	{
//		m_Name = "";
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "Ĭ�Ϲ��캯����hero �������" << endl;
//	}
//	hero(string name,int speed)//�вι��캯��
//	{
//		m_Name = name;
//		m_SkillCount = 4;
//		m_Speed = speed;
//		cout << "�вι��캯����hero �������" << endl;
//	}
//	hero(const hero& h)//�������캯��
//	{
//		cout << "�������캯���������" << endl;
//	}
//	~hero()
//	{
//		cout << "���������������" << endl;
//	}
//		
//private:
//	string m_Name;//�ɶ�����д
//	int m_SkillCount=4;//ֻ��
//	int m_Speed;//ֻд
//};
//int main()
//{
//	//hero h;
//	//h.setname("yzy");
//	//cout << h.getname() << endl;
//	//cout << h.getskillcount() << endl;
//	//h.setSpeed(666);
//	hero h1;
//	hero h2("abc", 100);
//	hero h3();//��������
//	hero h4{};//Ĭ�Ϲ��캯��
//	hero h5 = hero("sss", 200);
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Hero {
//public:
//	Hero(string name,int hp):m_Name(name),m_Hp(hp){//��ʼ���б�
//	}
//	void print()
//	{
//		cout << "Ӣ��:" << m_Name << "��Ѫ���� " << m_Hp << endl;
//	}
//
//
//private:
//	string m_Name;
//	int m_Hp;
//
//};
//
//
//int main()
//{
//	Hero h("aaa", 90);
//	h.print();
//
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Hero {
//public:Hero() {
//	m_Name = "yzy";
//	m_Hp = 100;
//	}
//	  ~Hero()
//	  {
//
//	}
//	  static int m_Herocount;
//	  static int GetHeroCount()
//	  {
//		  return m_Herocount;
//	  }
//
//private:
//	string m_Name;
//	int m_Hp;
//};
//int Hero::m_Herocount = 100;//�������ʼ�� Hero::Ϊ������
//int main()
//{
//	Hero h;
//	//cout << h.m_Herocount << endl;//��������ʵ����ȡ
//	//cout << Hero::m_Herocount << endl;//������ȡ
//	cout << h.GetHeroCount() << endl;
//	cout << Hero::GetHeroCount() << endl;
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Hero {
//public:
//	Hero(int hp)
//	{
//		this->hp = hp;
//		cout << this << endl;
//		cout << (*this).hp << endl;
//
//	}
//	int GetHp() const//����������Ա�����޷��޸�
//	{
//		return hp;
//	}
//private:	int hp;
//
//};
//int main()
//{
//	Hero h(100);
//	cout << &h << endl;
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Hero {
//public:Hero():m_Hp(0),m_HeroCount(0){}
//	  int GetHp()const {
//		  m_HeroCount++;
//		  return m_Hp;
//	  }
//	  void printcount() const
//	  {
//		  cout << m_HeroCount << endl;
//	  }
//
//
//private:
//	int m_Hp;
//	mutable int m_HeroCount;//
//};
//int main()
//{
//	Hero h;
//	cout << h.GetHp() << endl;
//	h.printcount();
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class People;
//class PeopleFriend {
//public:PeopleFriend() {
//
//}
//	  ~PeopleFriend() {
//
//	  }
//	  void visit(People* p);//��������
//	  void visitAll(People* p);
//	  void visitPub(People* p);
//};
//
//
//
//class People {
//	friend void PeopleFriend::visitAll(People* p);//��Ա������Ϊ��Ԫ
//	friend class PeopleFriend;//����Ϊ��Ԫ
//	friend	void friendVisit(People* p);//ȫ�ֺ�����Ϊ��Ԫ
//public:People() {
//	m_House = "����";
//	m_Car = "�ܳ�";
//}
//public:
//	string m_House;
//private:
//	string m_Car;
//};
//void friendVisit(People* p)
//{
//	cout << "���������������" << p->m_House << endl;
//	cout << "���������������" << p->m_Car << endl;
//}
//void PeopleFriend::visit(People* p)//����д���������������򣬷�ֹ��δ����
//{
//	cout << "���������������" << p->m_House << endl;
//	cout << "���������������" << p->m_Car << endl;
//}
//void PeopleFriend::visitAll(People* p)
//{
//	cout << "���������������" << p->m_House << endl;
//	cout << "���������������" << p->m_Car << endl;
//
//}
//void PeopleFriend::visitPub(People* p)
//{
//	cout << "���������������" << p->m_House << endl;
//}
//
//int main()
//{
//	People p;
//	//friendVisit(&p);
//	PeopleFriend pf;
//	pf.visitAll(&p);
//	pf.visitPub(&p);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//class Complex {
//	friend	Complex operator+(Complex& a, Complex& b);
//	friend Complex operator-(Complex& a, Complex& b);
//	friend ostream& operator<<(ostream&, const Complex& c);
//public:
//	Complex():real(0),image(0){}
//	~Complex(){}
//	Complex(int real, int image)
//	{
//		this->real = real;
//		this->image = image;
//	}
//	/*Complex operator+(Complex& other)
//	{
//		Complex ret;
//		ret.real = this->real + other.real;
//		ret.image = this->image + other.image;
//		return ret;
//	}*/
//	/*void Print()
//	{
//		cout << real << "+" << image << "i" << endl;
//	}*/
//	//ǰ��++
//	Complex& operator++() {//++����ԭ����һ���󣬷�ֹ����һ���¶���
//		this->real += 1;
//		return *this;//���ر�����һ����
//	}
//	Complex operator++(int)
//	{
//		Complex temp = *this;//���浱ǰ����״̬
//		this->real += 1;//����
//		return temp;//��������ǰ��״̬
//	}
//private:
//	int real;
//	int image;
//};
//Complex operator+(Complex& a,Complex& b)//���������
//{
//	Complex ret;
//	ret.real = a.real + b.real;
//	ret.image = a.image + b.image;
//	return ret;
//}
//Complex operator-(Complex& a, Complex& b)
//{
//	Complex ret;
//	ret.real = a.real - b.real;
//	ret.image = a.image - b.image;
//	return ret;
//}
//ostream& operator<<(ostream & ,const Complex& c)//�������������
//{                            //  ��������
//	cout << c.real << "+" << c.image << "i";
//	return cout;
//}
//
//int main()
//{
//	Complex a(10, 20);
//	//Complex b(5, 8);
//	//Complex c = a + b;//Complex c = a .add (b);
//	//Complex d = a - b;
//	//c.Print();
//	//d.Print();
//	//++a;
//	//cout<<++(++a) << endl;
//	cout << a << endl;
//	a++;
//	cout << a << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//	virtual void eat() {
//		cout << "�����ڳԶ���" << endl;//�麯�� ���า�Ǹ���
//	}
//};
//class Cat :public Animal {
//public:
//	void eat() {
//		cout << "è�ڳԶ���" << endl;
//	}
//};
//void eat(Animal& a)
//{
//	a.eat();
//
//}
//void Test()
//{
//	Cat c;
//	eat(c);
//
//}
//int main()
//{
//	Test();
//	cout << "Animal's size " << sizeof(Animal) << endl;//��СΪ�麯��ָ��Ĵ�С
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class BaseA {
//public:
//	BaseA() {}
//	//virtual ~BaseA()//������
//	//{
//	//	cout << "BaseA ������" << endl;
//	//}
//	virtual ~BaseA() = 0; //��������
//};
//BaseA::~BaseA()
//{
//	cout << "BaseA ������" << endl;
//
//}
//class SonA :public BaseA 
//{
//public:
//	SonA() :m_Value(NULL)
//	{
//		m_Value = new int(10);
//	}
//	~SonA() {
//		cout << "SonA ������" << endl;
//		delete m_Value;
//	}
//
//	int* m_Value;
//};
//int main()
//{
//	BaseA* a = new SonA();//ΪSonA����Ķ��󿪱ٿռ䣬�����ָ�����
//	delete a;//���������������������ڴ�й¶����
//	//BaseA x;�������޷�ʵ����
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//template<typename T>
//class DynamicArray 
//{private:
//	T* elements;
//	int size;
//public:
//	DynamicArray(int n); //: size(n) {
//	//	elements = new T[n];
//	//}
//	~DynamicArray(); /*{
//		delete[] elements;
//	}*/
//	T& operator[](int index);
//	/*{
//		return elements[index];*///�������ã���ֱ�ӶԶ�����ж�д����ֵ�Ȳ��� ����el[i],������ֵ
//	/*}*/
//	void update(int index, T value);
//	/*{
//		elements[index] = value;
//	}*/
//
//};
////��Ա������������
//template<typename T>
//DynamicArray<T>::DynamicArray(int n) : size(n) {
//	elements = new T[n];
//}
//template<typename T>
//DynamicArray<T>::~DynamicArray() {
//	delete[] elements;
//}
//template<typename T>
//T& DynamicArray<T>:: operator[](int index) {
//	return elements[index];
//}
//template<typename T>
//void DynamicArray<T>::update(int index, T value)
//{
//	elements[index] = value;
//}
//
//
//
//
//int main()
//{
//	//DynamicArray<int> da(100);
//	//da[1] = 3;//��ֵ����
//	//da[2] = 4;
//	//cout << da[1] << ' ' << da[2] << endl;
//
//	DynamicArray<char>db(100);
//	db[1] = 'A';
//	db[2] = 'B';
//	cout << db[1] << ' ' << db[2] << endl;
//	db.update(1, 'C');
//	cout << db[1] << endl;
//
//
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//template<class Nametype,class Hptype>
//class Hero 
//{
//public:
//	Hero(NameType name, HpType hp)
//	{
//		this->m_name = name;
//		this->m_hp = hp;
//	}
//private:
//	NameType m_name;
//	HpType m_hp;
//};
//class Heroson :public Hero<string ,double>{
//
//};
//template<class T1,class T2,class T3> 
//class Herod :public Hero<T1, T2> {
//	T3 a;
//};
//int main()
//{
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 1;
//	cout << x << endl;
//	{
//		cout << x << endl;
//		int x = 2;
//		cout << x << endl;
//		{
//			cout << x << endl;
//			int x = 3;
//			cout << x << endl;
//		}
//		cout << x << endl;
//	}
//	cout << x << endl;
//
//
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void figure_me_out(int& x, int y, int& z);
//int main()
//{
//    int a, b, c;
//    a = 10;
//    b = 20;
//    c = 30;
//    figure_me_out(a, b, c);
//    cout << a << "," << b << "," << c;
//    return 0;
//}
//
//void figure_me_out(int& x, int y, int& z)
//{
//    cout << x << "," << y << "," << z << endl;
//    x = 1;
//    y = 2;
//    z = 3;
//    cout << x << "," << y << "," << z << endl;
//
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//void printVector( vector<int>& v)
//{
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//}
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	v1.insert(v1.begin(), 666);
//	printVector(v1);
//	v1.insert(v1.begin() + 1, 999);
//	printVector(v1);
//	cout << v1.at(2) << endl;
//
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//bool cmp(int a, int b)
//{
//	return a>b;//���򣬷���true ��һ��Ԫ�����ڵڶ���Ԫ��֮ǰ
//}
//int main()
//{
//	vector<int> v1 = { 9,4,3,2,1,5,8,6,7 };
//	sort(v1.begin(), v1.end(),cmp);
//	for (int i = 0; i < 9; i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	s.assign(6, 'a');
//	cout << s << endl;
//	string s1(s);
//	cout << s1 << endl;
//	s1.assign("abcd", 2);
//	cout << s1 << endl;
//	s1.append("1234", 3);
//	cout << s1 << endl;
//	s1 += "abc";
//	cout << s1 << endl;
//	s1.push_back('c');
//	cout << s1 << endl;
//	cout << s1.at(1) << endl;
//	s1.at(1) = 'l';
//	cout << s1 << endl;
//	s1.insert(2, 2, 'z');
//	cout << s1 << endl;
//	s1.insert(0,"oaaa");
//	cout << s1 << endl;
//	s1.insert(s1.size(), "uuu");
//	cout << s1 << endl;
//	s1.insert(s1.begin(), 'h');
//	cout << s1 << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	s = "Hello woooorld";
//	//s.erase(s.begin() + 7, s.begin() + 10);
//	//cout << s << endl;
//	string sub = s.substr(7, 4);
//	cout << sub << endl;
//
//
//	return 0;
//}
// hdoj 2006
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			v.push_back(x);
//		}
//		int output = 1;
//		for (int i = 0; i <n; i++)
//		{
//			int val = v.at(i);
//			if (val % 2 == 1)
//			{
//				output *= val;
//			}
//		}
//		cout << output << endl;
//	}
//	return 0;
//}
// hdoj 2008
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n && n)
//	{
//		vector<double> v;
//		for (int i = 0; i < n; i++)
//		{
//			double x;
//			cin >> x;
//			v.push_back(x);
//		}
//		int zcnt = 0, pcnt = 0, ncnt = 0;
//		for (int i = 0; i < n; i++)
//		{
//			double val = v.at(i);
//			if (val > 1e-8)
//			{
//				pcnt++;
//			}
//			else if (val < -1e-8)
//			{
//				ncnt++;
//			}
//			else
//			{
//				zcnt++;
//			}
//		}
//		cout << ncnt << " " << zcnt << " " << pcnt << endl;
//	}
//	return 0;
//}
//hdoj 2014
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<double> v;
//		for (int i = 0; i < n; i++)
//		{
//			double x;
//			cin >> x;
//			v.push_back(x);
//		}
//		double max = -100;
//		double min = 101;
//		double sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			double val = v.at(i);
//			if (val > max)max = val;
//			if (val < min)min = val;
//			sum += val;
//		}
//		sum -= min;
//		sum -= max;
//		sum /= (n - 2);
//		printf("%.2lf\n", sum);
//	}
//	return 0;
//}
//#include<iostream>
//#include<list>
//using namespace std;
//void printList(const list<int>& l)
//{
//	for (list<int>::const_iterator it = l.begin(); it!=l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int getlistByindex(list<int>& l, int index)
//{
//	list<int>::iterator it = l.begin();
//	while (index--)
//	{
//		it++;
//	}
//	return *it;
//}
//int main()
//{
//	list<int> l({ 1,2,3,4,5 });
//	l = { 2,3,4,5,6 };
//	/*printList(l);
//	l.insert(++l.begin(), 0);
//	printList(l);
//	l.erase(l.begin());
//	printList(l);
//	l.erase(l.begin(), --l.end());
//	printList(l);*/
//	for (int i = 0; i < l.size(); i++)
//	{
//		int ret = getlistByindex(l, i);
//		cout << ret << " ";
//	}
//	l.reverse();
//	
//
//
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//class test 
//{
//public:
//	test()
//	{
//		_name = "";
//		_priority = -1;
//	}
//	test(string name,int priority):_name(name),_priority(priority){}
//	~test(){}
//	bool operator<(const test& other) const {
//		return this->_priority < other._priority;
//	}
//	void print() const {
//		cout << "(" << _priority << ")" << _name << endl;
//	}
//
//private:
//	string _name;
//	int _priority;
//};
//int main()
//{
//	set<test> s;
//	s.insert(test("ccc", 3));
//	s.insert(test("eee", 5));
//	s.insert(test("bbb", 2));
//	s.insert(test("ddd", 4));
//	s.insert(test("aaa", 1));
//	for (set<test>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		(*it).print();
//	}
//	
//	
//
//	return 0;
//}
//#include<iostream>
//#include<map>
//using namespace std;
//void printMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	map<int, int> m;
//	m = {
//		pair<int,int>(1,3),
//		pair<int,int>(2,10),
//		pair<int,int>(3,9),
//		pair<int,int>(4,22)
//	};
//	printMap(m);
//	m.insert(make_pair(5, 20));
//	printMap(m);
//	m[3] -= 2;
//	cout << m[3] << endl;
//	return 0;
//}
//#include<iostream>
//#include<list>
//using namespace std;
//int getListByindex(list<int>& l, int index)
//{
//	list<int>::iterator it = l.begin();
//	while (index--)
//	{
//		it++;
//	}
//	return*it;
//}
//int main()
//{
//	list<int> l;
//	l.push_back(1);
//	l.push_back(1);
//	l.push_back(1);
//	for (int i = 3; i <= 40; i++)
//	{
//		int val = getListByindex(l, i-1) + getListByindex(l, i - 2);
//		l.push_back(val);
//	}
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		cout << getListByindex(l,x) << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<queue>
//using namespace std;
//struct type {
//	int key;
//	int value;
//	type() {
//		key = 0;
//		value = 0;
//	}
//	type(int k,int v):key(k),value(v){}
//	bool operator<(const type& t) const {
//		return key > t.key;//< �󶥶� > С����
//	}
//};
//int main()
//{
//	priority_queue<type> q;
//	q.push(type(6,1));
//	q.push(type(5, 1));
//	q.push(type(3, 1));
//	q.push(type(7, 1));
//	q.push(type(1, 1));
//	q.push(type(9, 1));
//	q.push(type(2, 1));
//	while (!q.empty())
//	{
//		cout << q.top().key << " " << q.size() << endl;
//		q.pop();
//	}
//
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool cmp(double a,double b)
//{
//	return a < b;
//}
//void function(vector<double>& v)
//{
//	double  x;
//	for (int i = 0; i < 6; i++)
//	{
//		cin >> x;
//		v.push_back(x);
//	}
//	sort(v.begin(),v.end(),cmp);
//	cout << "After sorted:" << endl;
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//	cout<<"The median is:"<< (v.at(2) + v.at(3)) / 2.0 << endl;
//}
//int main()
//{
//	vector<double> v;
//	function(v);
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//bool Isprime_number(int x)
//{
//	if (x== 1)return false;
//	else if (x== 2) return true;
//	else
//	{
//		for (int i = 2; i <=sqrt(x); i++)
//		{
//			if (x % i == 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}
//int main()
//{
//	int x;
//	cin >> x;
//	if (Isprime_number(x)) {
//		cout << x << " is a prime number";
//	}
//	else
//	{
//		cout << x << " is not a prime number";
//	}
//	
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//double compute_function(double x)
//{
//	double sum = 1.0;
//	double item = -1.0;
//	int n = 1;
//	while (fabs(item) > 1e-8)
//	{
//		item *= -x / n;
//		sum += item;
//		n++;
//	}
//	return sum;
//}
//int main()
//{
//	double x;
//	cin >> x;
//	cout << "the result is:" << compute_function(x) << endl;
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int getvolumn(int length, int width, int height = 12)
//{
//	return length * width * height;
//}
//double getvolumn(double length, double width, double height=12.0)
//{
//	return length * width * height;
//}
//int main()
//{
//	int intlength = 10; int intwidth = 6;
//	double doublelength = 5.0; double doublewidth = 6.0;
//	int intV = getvolumn(intlength, intwidth);
//	double doubleV = getvolumn(doublelength, doublewidth);
//	cout << "The volumn of int is: " << intV << endl;
//	cout << "The volumn of double is: " << doubleV << endl;
//
//
//
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<ctype.h>
//using namespace std;
//string tolower(string s)
//{
//	for (int i = 0; i < s.size(); i++)
//	{
//		s[i] = tolower(s[i]);
//	}
//	return s;
//}
//double costOfCall(string& day, int hour, int minute, int durationTime)
//{
//	double rate;
//	day = tolower(day);
//	if (day == "sa" || day == "su")
//	{
//		rate = 0.15;
//	}
//	else
//	{
//		if (8 <= hour && hour < 18)
//		{
//			rate = 0.40;
//		}
//		else
//		{
//			rate = 0.25;
//		}
//	}
//	double cost = rate * durationTime;
//	return cost;
//	
//}
//int main()
//{
//	string day;
//	string choice= "yes";
//	int hour, minute, durationTime;
//	while (choice == "yes")
//	{
//		cout << "Enter the day of the week: ";
//		cin >> day;
//		cout << "Enter the time the call started at (hh:mm): ";
//		cin >> hour;
//		cin.ignore();//:
//		cin >> minute;
//		cout << "Enter the duration of the call in minutes: ";
//		cin >> durationTime;
//		cout << "The cost of the call is: $" << costOfCall(day, hour, minute, durationTime) << endl;
//		cout << "Would you like to repeat the program? (yes/no): ";
//		cin >> choice;
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//bool gethumanpick(int& toothPicks,int&humanpick)//���ü��ٿ���
//{
//	int topick = 0;
//	while (true)
//	{
//		cout << "There are " << toothPicks << " toothpicks left" << endl;
//		cout << "How many toothpicks do you want to pick up (1,2,or 3)? ";
//		cin >> topick;
//		if (topick < 1 || topick > 3)
//		{
//			cout << "Invalid input, please try again" << endl;
//			continue;
//		}
//		toothPicks -= topick;
//		humanpick = topick;
//		if (toothPicks <= 0)
//		{
//			toothPicks = 0;
//			cout << "There are " << toothPicks << " toothpicks left" << endl;
//			cout << "You lose!" << endl;
//			return false;
//		}
//		return true;
//	}
//}
//void getComputerpick(int& toothpicks, int humanpick) {
//	int computerpick = 0;
//	if (toothpicks > 4)
//	{
//		computerpick = 4 - humanpick;
//	}
//	else if (toothpicks >= 2 && toothpicks <= 4)
//	{
//		computerpick = toothpicks - 1;
//	}
//	else if(toothpicks==1){
//		computerpick = 1;
//	}
//	toothpicks -= computerpick;
//	cout << "The computer picks up " << computerpick << " toothpicks" << endl;
//	if (toothpicks == 0)
//	{
//		cout << "The computer loses!" << endl;
//	}
//	
//	
//
//}
//int main()
//{
//	int toothPicks = 23;
//	int humanpick = 0;
//	while (toothPicks > 0)
//	{
//		if (gethumanpick(toothPicks, humanpick))
//		{
//			getComputerpick(toothPicks, humanpick);
//		}
//		humanpick = 0;//ÿ�β������ÿ�
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	for (int c = 1; c <= 3; c += 2)
//	{
//		int a = 3*c;
//		for (int b = 1; b <= 9; b++)
//		{
//			for (int d = 1; d <= 9; d+=2)
//			{
//				if (a != b && a != d && b != d && a + b + c + d == 27)
//				{
//					cout << "The address is:" << endl;	
//					cout<<a<< b<<c<<d<< endl;
//				}
//			}
//
//		}
//	}			
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//const int maxLength = 20;//ȫ�ֱ���������󳤶�
//bool readNumber(string s, int num[])
//{
//	int len = s.size();
//	if (len > maxLength)
//	{
//		cout << "The number is too long" << endl;
//		return false;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		num[i] = s[len - i - 1] - '0';//����洢
//	}
//	for (int i = len; i < maxLength; i++)//����Ĳ�0
//	{
//		num[i] = 0;
//	}
//	return true;
//}
//bool addNumber(int num1[], int num2[], int sum[])
//{
//	for (int i = 0; i < maxLength; i++)
//	{
//		sum[i] += num1[i] + num2[i];
//		if (sum[i] >= 10)//��λ
//		{
//			sum[i] -= 10;
//			sum[i + 1]++;
//		}
//	}
//	if (sum[maxLength] > 0)
//	{
//		cout << "�������" << endl;
//		return false;
//	}
//	return true;
//}
//void printNumber(int sum[])
//{
//	for (int i = maxLength; i >= 0; i--)
//	{
//		if (sum[i] != 0)
//		{
//			for (int j = i; j >= 0; j--)
//			{
//				cout << sum[j];
//			}
//			cout << endl;
//			break;
//		}
//	}
//}
//int main() {
//	string choice = "yes";
//	while (choice == "yes")
//	{
//		int num1[maxLength] = { 0 }, num2[maxLength] = { 0 }, sum[maxLength+1] = { 0 };
//		cout << "The maxLength is:" << maxLength << endl;
//		string s1, s2;
//		cout << "Enter two numbers: ";
//		cin >> s1 >> s2;
//		readNumber(s1, num1);
//		readNumber(s2, num2);
//		bool add = true;
//		if (readNumber(s1, num1) && readNumber(s2, num2))
//		{
//			add = addNumber(num1, num2, sum);
//		}
//		
//		if (add)
//		{
//			printNumber(sum);
//		}
//		cout << "Would you like to repeat the program? (yes/no): ";
//		cin >> choice;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//double leapingBall(vector<double>& v,double height,int epoch)
//{
//	double sum = 0;
//	sum += v[0];
//	if (epoch == 1)
//	{
//		return sum;
//	}
//	for (int i = 1; i <=epoch-1; ++i)
//	{
//		double x=height /= 2;
//		v.push_back(x);
//		sum += 2*v[i];
//	}
//	return sum;
//
//}
//int main()
//{
//	vector<double> v;
//	double height = 100;
//	v.push_back(height);
//	int epoch;//�ڼ������
//	cin >> epoch;
//	double result=leapingBall(v,height,epoch);
//	cout << result << endl;
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << endl;
//	}
//	cout << v[10] << endl;//0.0976562
//
//	return 0;
//}