#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <time.h>

using namespace std;

/**
 *  @brief Класс Преподавателя, хранящий информацию о ФИО, факультете, учёном звании и степени, а также обладающий методами для взаимодействия объектов класса.
 */

class Prepod{
public:

/**
 *  @brief Конструктор по умолчанию
 *  @details Заполняет поля класса пустыми строками
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение отсутствует
 *
 *  Реализация:
 *
 *  @code
    Prepod::Prepod(){
        fname = "";
        lname = "";
        mname = "";
        faculty = "";
        adegree = "";
        atitle = "";
    }
 *  @endcode
 */
    Prepod();
/**
 *  @brief Конструктор из файлового потока
 *  @details Считывает поля класса из передаваемого файлового потока
 *  @param Ссылка на файловый поток ввода
 *  @return Возвращаемое значение отсутствует
 *
 *  Реализация:
 *
 *  @code
    Prepod::Prepod(ifstream& in){
        in >> fname >> lname >> mname >> faculty >> adegree >> atitle;
    }
 *  @endcode
 */
    Prepod(ifstream& in);
/**
 *  @brief Деструктор класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение отсутствует
 *
 *  Реализация:
 *
 *  @code
    Prepod::~Prepod(){

    }
 *  @endcode
 */
    ~Prepod();

/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getFname() const {
        return fname;
    }
 *  @endcode
 */
    string getFname() const;
/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getLname() const {
        return lname;
    }
 *  @endcode
 */
    string getLname() const;
/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getMname() const {
        return mname;
    }
 *  @endcode
 */
    string getMname() const;
/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getFaculty() const {
        return faculty;
    }
 *  @endcode
 */
    string getFaculty() const;
/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getAdegree() const {
        return adegree;
    }
 *  @endcode
 */
    string getAdegree() const;
/**
 *  @brief Функция-геттер
 *  @details Позволяет получить доступ к private полю класса
 *  @param Параметры отсутствуют
 *  @return Возвращаемое значение - строка, в которой содержится значение запрашиваемого поля
 *
 *  Реализация:
 *
 *  @code
    string Prepod::getAtitle() const {
        return atitle;
    }
 *  @endcode
 */
    string getAtitle() const;
/**
 *  @brief Оператор присваивания
 *  @details Присваивает объекту данного класса значения полей правого операнда этого же класса
 *  @param Константная ссылка на объект такого же класса
 *  @return Ссылка на этот же объект для возможности дальнейших преобразований компилятором
 *
 *  Реализация:
 *
 *  @code
    Prepod& Prepod::operator= (const Prepod& A){
        fname = A.getFname();
        lname = A.getLname();
        mname = A.getMname();
        faculty = A.getFaculty();
        adegree = A.getAdegree();
        atitle = A.getAtitle();

        return *this;
    }
 *  @endcode
 */
    Prepod& operator= (const Prepod& A);
/**
 *  @brief Оператор вывода
 *  @details Дружественный оператор вывода полей класса в поток
 *  @param Ссылка на поток вывода и константная ссылка на выводимый объект
 *  @return Ссылка на поток вывода для возможности дальнейших преобразований компилятором
 *
 *  Реализация:
 *
 *  @code
    ostream& operator<< (ostream& out, const Prepod& A){
        out << A.fname << " ";
        out << A.lname << " ";
        out << A.mname << " ";
        out << A.faculty << " ";
        out << A.adegree << " ";
        out << A.atitle << " ";
        out << endl;

        return out;
    }
 *  @endcode
 */
    friend ostream& operator<< (ostream& out, const Prepod& A);

private:
/**
 *  @brief Поля класса
 *  @details Фамилия, Имя, Отчество, Факультет, Учёная степень, Учёное звание
 */
    string fname, lname, mname, faculty, adegree, atitle;
};

Prepod::Prepod(){
    fname = "";
    lname = "";
    mname = "";
    faculty = "";
    adegree = "";
    atitle = "";
}

Prepod::Prepod(ifstream& in){
    in >> fname >> lname >> mname >> faculty >> adegree >> atitle;
}

Prepod::~Prepod(){

}

string Prepod::getFname() const {
    return fname;
}

string Prepod::getLname() const {
    return lname;
}

string Prepod::getMname() const {
    return mname;
}

string Prepod::getFaculty() const {
    return faculty;
}

string Prepod::getAdegree() const {
    return adegree;
}

string Prepod::getAtitle() const {
    return atitle;
}

Prepod& Prepod::operator= (const Prepod& A){
    fname = A.getFname();
    lname = A.getLname();
    mname = A.getMname();
    faculty = A.getFaculty();
    adegree = A.getAdegree();
    atitle = A.getAtitle();

    return *this;
}

ostream& operator<< (ostream& out, const Prepod& A){
    out << A.fname << " ";
    out << A.lname << " ";
    out << A.mname << " ";
    out << A.faculty << " ";
    out << A.adegree << " ";
    out << A.atitle << " ";
    out << endl;

    return out;
}


/**
    @brief Оператор равенства для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return True, если поля объектов равны, False иначе.
*/
bool operator== (const Prepod& A, const Prepod& B){
    return ((A.getFname() == B.getFname()) &&
            (A.getLname() == B.getLname()) &&
            (A.getMname() == B.getMname()) &&
            (A.getFaculty() == B.getFaculty()) &&
            (A.getAdegree() == B.getAdegree()) &&
            (A.getAtitle() == B.getAtitle()));
}

/**
    @brief Оператор неравенства для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return False, если поля объектов равны, True иначе.
*/
bool operator!= (const Prepod& A, const Prepod& B){
    return !(A == B);
}

/**
    @brief Оператор больше для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return True, если при сравнении полей по приоритетам, некоторое поле первого объекта лексически больше, чем соответствующее поле второго объекта, False иначе.
*/
bool operator> (const Prepod& A, const Prepod& B){
    if (A == B)
        return false;

    if (A.getFaculty() != B.getFaculty())
        return (A.getFaculty() > B.getFaculty());

    if (A.getFname() != B.getFname())
        return (A.getFname() > B.getFname());

    if (A.getLname() != B.getLname())
        return (A.getLname() > B.getLname());

    if (A.getMname() != B.getMname())
        return (A.getMname() > B.getMname());

    if (A.getAdegree() != B.getAdegree())
        return (A.getAdegree() > B.getAdegree());

    if (A.getAtitle() != B.getAtitle())
        return (A.getAtitle() > B.getAtitle());

    return false;
}

/**
    @brief Оператор меньше для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return True, если при сравнении полей по приоритетам, некоторое поле первого объекта лексически меньше, чем соответствующее поле второго объекта, False иначе.
*/
bool operator< (const Prepod& A, const Prepod& B){
    return (A != B && !(A > B));
}

/**
    @brief Оператор больше либо равно для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return True, если при сравнении полей по приоритетам, некоторое поле первого объекта лексически больше, чем соответствующее поле второго объекта, или объекты равны, False иначе.
*/
bool operator >= (const Prepod& A, const Prepod& B){
    return (A == B || A > B);
}

/**
    @brief Оператор меньше либо равно для двух объектов класса Prepod
    @param Две константные ссылки на сравниваемые объекты
    @return True, если при сравнении полей по приоритетам, некоторое поле первого объекта лексически меньше, чем соответствующее поле второго объекта, или объекты равны, False иначе.
*/
bool operator <= (const Prepod& A, const Prepod& B){
    return (A == B || A < B);
}


/**
    @brief Шаблонная функция сортировки Bubble Sort
    @param Сортируемый массив в виде указателя на первый элемент и размер массива
    @return Возвращаемое значение отсутствует
*/
template <typename T>
void bubbleSort(T* A, size_t n){
    for (size_t i = 0; i < n - 1; i++)
        for (size_t j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
}

/**
    @brief Шаблонная функция сортировки Quick Sort
    @param Сортируемый массив в виде указателя на первый элемент и размер массива
    @return Возвращаемое значение отсутствует
*/
template <typename T>
void quickSort(T* A, size_t n) {
    int i = 0, j = n - 1;
    T mid = A[n / 2];

    do {
        while(A[i] < mid)
            i++;

        while(A[j] > mid)
            j--;

        if (i <= j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if(j > 0)
        quickSort(A, j + 1);
    if (i < n)
        quickSort(&A[i], n - i);

    return;
}

/**
    @brief Шаблонная функция сортировки Merge Sort
    @param Сортируемый массив в виде указателя на первый элемент и размер массива
    @return Возвращаемое значение отсутствует
*/
template <typename T>
void mergeSort(T* A, size_t n){
    if (n == 1)
        return;

    mergeSort(A, n / 2);
    mergeSort(&A[n / 2], n - n / 2);

    size_t i = 0, j = n / 2, k = 0;

    T* tmp = new Prepod[n];

    while(k < n){
        if (i == n / 2){
            tmp[k] = A[j];
            j++;
        }
        else
        if (j == n){
            tmp[k] = A[i];
            i++;
        }
        else
        if (A[i] < A[j]){
            tmp[k] = A[i];
            i++;
        }
        else
        {
            tmp[k] = A[j];
            j++;
        }
        k++;
    }

    for (size_t i = 0; i < n; i++)
        A[i] = tmp[i];
}

/**
    @brief Шаблонная функция прямого поиска
    @param Массив A, в котором будет производиться поиск, размер массива n и ключ поиска keyName
    @return Индекс искомого элемента в массиве. -1 если элемент с таким ключом отсутствует
*/

template <typename T>
int linearSearch(T* A, size_t n, string keyName){
    for (size_t i = 0; i < n; i++)
        if (A[i].getFname() == keyName)
            return i;
    return -1;
}

/**
    @brief Шаблонная функция бинарного поиска
    @param Массив A, в котором будет производиться поиск, размер массива n и ключ поиска keyName
    @return Индекс искомого элемента в массиве. -1 если элемент с таким ключом отсутствует
*/

template <typename T>
int binarySearch(T* A, size_t n, string keyName){

    size_t left = 0, right = n, mid;

    while (left <= right){
        mid = (left + right) / 2;

        if (A[mid].getFname() == keyName)
            return mid;
        if (A[mid].getFname() > keyName)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

/**
    @brief Функция main
    @param Считывание выборок разного объема из файлов, выбор метода поиска и вывод на экран затраченного на поиск времени
    @return Возвращаемое значение - код завершения программы

    Реализация:

    @code
    int main(){
    setlocale(LC_ALL, "Russian");

    Prepod *data100 = new Prepod[100],
           *data500 = new Prepod[500],
           *data1000 = new Prepod[1000],
           *data5000 = new Prepod[5000],
           *data10000 = new Prepod[10000],
           *data50000 = new Prepod[50000],
           *data100000 = new Prepod[100000];

    ifstream in100("100.txt");

    if (in100.is_open())
        for (size_t i = 0; i < 100; i++)
            data100[i] = Prepod(in100);
    in100.close();


    ifstream in500("500.txt");
    if (in500.is_open())
        for (size_t i = 0; i < 500; i++)
            data500[i] = Prepod(in500);
    in500.close();

    ifstream in1000("1000.txt");
    if (in1000.is_open())
        for (size_t i = 0; i < 1000; i++)
            data1000[i] = Prepod(in1000);
    in1000.close();

    ifstream in5000("5000.txt");
    if (in5000.is_open())
        for (size_t i = 0; i < 5000; i++)
            data5000[i] = Prepod(in5000);
    in5000.close();

    ifstream in10000("10000.txt");
    if (in10000.is_open())
        for (size_t i = 0; i < 10000; i++)
            data10000[i] = Prepod(in10000);
    in10000.close();

    ifstream in50000("50000.txt");
    if (in50000.is_open())
        for (size_t i = 0; i < 50000; i++)
            data50000[i] = Prepod(in50000);
    in50000.close();

    ifstream in100000("100000.txt");
    if (in100000.is_open())
        for (size_t i = 0; i < 100000; i++)
            data100000[i] = Prepod(in100000);
    in100000.close();

    int choice;
    cout << "Search:\n1. Linear\n2. Binary with unsorted array\n3. Binary with sorted array\n4. Multimap\n";
    cin >> choice;

    if (choice == 1){
        int tmp;

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        tmp = linearSearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 2){
        int tmp;

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        quickSort(data100, 100);
        tmp = binarySearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data500, 500);
        tmp = binarySearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data1000, 1000);
        tmp = binarySearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data5000, 5000);
        tmp = binarySearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data10000, 10000);
        tmp = binarySearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data50000, 50000);
        tmp = binarySearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data100000, 100000);
        tmp = binarySearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 3){
        int tmp;

        quickSort(data100, 100);
        quickSort(data500, 500);
        quickSort(data1000, 1000);
        quickSort(data5000, 5000);
        quickSort(data10000, 10000);
        quickSort(data50000, 50000);
        quickSort(data100000, 100000);

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();

        tmp = binarySearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 4){
        multimap <string, Prepod> map100 = {},
                                  map500 = {},
                                  map1000 = {},
                                  map5000 = {},
                                  map10000 = {},
                                  map50000 = {},
                                  map100000 = {};


        for (int i = 0; i < 100; i++)
            map100.insert(pair <string, Prepod>(data100[i].getFname(), data100[i]));

        for (int i = 0; i < 500; i++)
            map500.insert(pair <string, Prepod>(data500[i].getFname(), data500[i]));

        for (int i = 0; i < 1000; i++)
            map1000.insert(pair <string, Prepod>(data1000[i].getFname(), data1000[i]));

        for (int i = 0; i < 5000; i++)
            map5000.insert(pair <string, Prepod>(data5000[i].getFname(), data5000[i]));

        for (int i = 0; i < 10000; i++)
            map10000.insert(pair <string, Prepod>(data10000[i].getFname(), data10000[i]));

        for (int i = 0; i < 50000; i++)
            map50000.insert(pair <string, Prepod>(data50000[i].getFname(), data50000[i]));

        for (int i = 0; i < 100000; i++)
            map100000.insert(pair <string, Prepod>(data100000[i].getFname(), data100000[i]));

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        auto tmp = map100.find("fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        tmp = map500.find("byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map1000.find("lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map5000.find("ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map10000.find("wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map50000.find("thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map100000.find("ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }
}
    @endcode
*/
int main(){
    setlocale(LC_ALL, "Russian");

    Prepod *data100 = new Prepod[100],
           *data500 = new Prepod[500],
           *data1000 = new Prepod[1000],
           *data5000 = new Prepod[5000],
           *data10000 = new Prepod[10000],
           *data50000 = new Prepod[50000],
           *data100000 = new Prepod[100000];

    ifstream in100("100.txt");

    if (in100.is_open())
        for (size_t i = 0; i < 100; i++)
            data100[i] = Prepod(in100);
    in100.close();


    ifstream in500("500.txt");
    if (in500.is_open())
        for (size_t i = 0; i < 500; i++)
            data500[i] = Prepod(in500);
    in500.close();

    ifstream in1000("1000.txt");
    if (in1000.is_open())
        for (size_t i = 0; i < 1000; i++)
            data1000[i] = Prepod(in1000);
    in1000.close();

    ifstream in5000("5000.txt");
    if (in5000.is_open())
        for (size_t i = 0; i < 5000; i++)
            data5000[i] = Prepod(in5000);
    in5000.close();

    ifstream in10000("10000.txt");
    if (in10000.is_open())
        for (size_t i = 0; i < 10000; i++)
            data10000[i] = Prepod(in10000);
    in10000.close();

    ifstream in50000("50000.txt");
    if (in50000.is_open())
        for (size_t i = 0; i < 50000; i++)
            data50000[i] = Prepod(in50000);
    in50000.close();

    ifstream in100000("100000.txt");
    if (in100000.is_open())
        for (size_t i = 0; i < 100000; i++)
            data100000[i] = Prepod(in100000);
    in100000.close();

    int choice;
    cout << "Search:\n1. Linear\n2. Binary with unsorted array\n3. Binary with sorted array\n4. Multimap\n";
    cin >> choice;

    if (choice == 1){
        int tmp;

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        tmp = linearSearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        tmp = linearSearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 2){
        int tmp;

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        quickSort(data100, 100);
        tmp = binarySearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data500, 500);
        tmp = binarySearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data1000, 1000);
        tmp = binarySearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data5000, 5000);
        tmp = binarySearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data10000, 10000);
        tmp = binarySearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data50000, 50000);
        tmp = binarySearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        quickSort(data100000, 100000);
        tmp = binarySearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 3){
        int tmp;

        quickSort(data100, 100);
        quickSort(data500, 500);
        quickSort(data1000, 1000);
        quickSort(data5000, 5000);
        quickSort(data10000, 10000);
        quickSort(data50000, 50000);
        quickSort(data100000, 100000);

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();

        tmp = binarySearch(data100, 100, "fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data500, 500, "byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data1000, 1000, "lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data5000, 5000, "ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data10000, 10000, "wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data50000, 50000, "thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();

        tmp = binarySearch(data100000, 100000, "ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }

    if (choice == 4){
        multimap <string, Prepod> map100 = {},
                                  map500 = {},
                                  map1000 = {},
                                  map5000 = {},
                                  map10000 = {},
                                  map50000 = {},
                                  map100000 = {};


        for (int i = 0; i < 100; i++)
            map100.insert(pair <string, Prepod>(data100[i].getFname(), data100[i]));

        for (int i = 0; i < 500; i++)
            map500.insert(pair <string, Prepod>(data500[i].getFname(), data500[i]));

        for (int i = 0; i < 1000; i++)
            map1000.insert(pair <string, Prepod>(data1000[i].getFname(), data1000[i]));

        for (int i = 0; i < 5000; i++)
            map5000.insert(pair <string, Prepod>(data5000[i].getFname(), data5000[i]));

        for (int i = 0; i < 10000; i++)
            map10000.insert(pair <string, Prepod>(data10000[i].getFname(), data10000[i]));

        for (int i = 0; i < 50000; i++)
            map50000.insert(pair <string, Prepod>(data50000[i].getFname(), data50000[i]));

        for (int i = 0; i < 100000; i++)
            map100000.insert(pair <string, Prepod>(data100000[i].getFname(), data100000[i]));

        cout << "Data sampling with a volume of 100:\t";
        auto start_t = chrono::steady_clock::now();
        auto tmp = map100.find("fmw");
        auto end_t = chrono::steady_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 500:\t";
        start_t = chrono::steady_clock::now();
        tmp = map500.find("byu");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 1000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map1000.find("lga");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 5000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map5000.find("ocy");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 10000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map10000.find("wmc");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 50000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map50000.find("thl");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";

        cout << "Data sampling with a volume of 100000:\t";
        start_t = chrono::steady_clock::now();
        tmp = map100000.find("ntx");
        end_t = chrono::steady_clock::now();
        elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end_t - start_t);
        cout << elapsed_ms.count() << " nanoseconds\n";
    }
}
