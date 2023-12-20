// Rozdilenya.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class IPrintable {
public:
    virtual void print() const = 0;
};


class IScannable {
public:
    virtual void scan() const = 0;
};


class Printer : public IPrintable {
public:
    void print() const override {
        std::cout << "Printing document..." << std::endl;
    }
};


class Scanner : public IScannable {
public:
    void scan() const override {
        std::cout << "Scanning document..." << std::endl;
    }
};


class AllInOnePrinter : public IPrintable, public IScannable {
public:
    void print() const override {
        std::cout << "Printing document..." << std::endl;
    }

    void scan() const override {
        std::cout << "Scanning document..." << std::endl;
    }
};

int main() {
    Printer printer;
    Scanner scanner;
    AllInOnePrinter allInOnePrinter;

    
    printer.print();
    scanner.scan();
    allInOnePrinter.print();
    allInOnePrinter.scan();

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
