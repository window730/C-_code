//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
// //���������ռ� wnadou
//namespace wandou
//{
//    int rand = 10;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//    struct Node
//    {
//        Node* next;
//        int val;
//    };
//}
//
//int main()
//{
//    printf("%p\n", rand); // Ĭ�Ϸ��ʵ���ȫ�ֵ�rand
//    printf("%d\n", wandou::rand); // ָ������ wandou �����ռ��е� rand
//    return 0;
//}
//
//namespace wandou
//{
//    namespace wd
//    {
//        int rand = 1;
//        int Add(int left, int right)
//        {
//            return left + right;
//        }
//    }
//}
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello, World!" << std::endl;  // ����ַ���
//    int a = 10;
//    std::cout << "a = " << a << std::endl;  // �������ֵ
//    double b = 3.14;
//    std::cout << "b = " << b << std::endl;  // ���������ֵ
//    return 0;
//}
//
//#include <iostream>
//
//int main()
//{
//    int a;
//    std::cout << "������һ������: ";
//    std::cin >> a;  // �ӱ�׼�����ȡһ���������洢������a��
//    std::cout << "�������������: " << a << std::endl;
//
//    double b;
//    std::cout << "������һ��������: ";
//    std::cin >> b;  // �ӱ�׼�����ȡһ�����������洢������b��
//    std::cout << "������ĸ�������: " << b << std::endl;
//
//    return 0;
//}
//
//#include <iostream>
//
//void Print(int x = 10, int y = 20)
//{
//    std::cout << "x = " << x << ", y = " << y << std::endl;
//}
//
//int main()
//{
//    Print();            // ���� Print()��ʹ��Ĭ��ֵ x=10, y=20
//    Print(5);           // ���� Print(5)��ʹ��Ĭ��ֵ y=20
//    Print(5, 15);       // ���� Print(5, 15)����ʹ��Ĭ��ֵ
//
//    return 0;
//}


//
//#include <iostream>
//
//// ���������غ���
//void Print(int x)
//{
//    
//    std::cout << "Print int: " << x << std::endl;
//}
//void Print(double x)
//{
//    std::cout << "Print double: " << x << std::endl;
//}
//
//void Print(int x, double y)
//{
//    std::cout << "Print int and double: " << x << ", " << y << std::endl;
//}
//
//int main()
//{
//    Print(5);           // ���� Print(int)
//    Print(5.5);         // ���� Print(double)
//    Print(5, 5.5);      // ���� Print(int, double)
//
//    return 0;
//}
