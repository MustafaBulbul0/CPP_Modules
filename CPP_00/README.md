About the Project
This project contains the exercises for C++ Module 00, an introduction to Object-Oriented Programming (OOP) with C++. The project aims to reinforce fundamental C++ concepts such as namespaces, classes, member functions, standard I/O streams, and initialization lists.

Project Rules
The following general rules were observed in this project:


Compilation: The code is compiled using the c++ command with the -Wall -Wextra -Werror flags. The code must also compile if the 

-std=c++98 flag is added.


Naming: Class names are in UpperCamelCase format, and files containing class code are named after the class itself (e.g., ClassName.hpp and ClassName.cpp).



Forbidden Functions: C++11 (and its derived forms) and Boost libraries are forbidden. The functions 

*printf(), *alloc(), and free() are also forbidden.


STL Restriction: The Standard Template Library (STL) containers (e.g., vector, list, map) and algorithms (<algorithm>) can only be used in Modules 08 and 09.


Independent Headers: Each header must include all its dependencies and use include guards to prevent double inclusion.

Exercises
This repository contains three exercises:

1. Megaphone (ex00)
This exercise involves writing a simple C++ program that converts command-line arguments to uppercase. If no arguments are provided, the program prints the message "* LOUD AND UNBEARABLE FEEDBACK NOISE".


2. My Awesome PhoneBook (ex01)
This exercise requires implementing an interactive program with two classes, 

PhoneBook and Contact. The program acts as a phonebook, accepting 

ADD, SEARCH, and EXIT commands from the user. The 

PhoneBook class can store a maximum of 8 contacts, and dynamic memory allocation is forbidden.

3. The Job Of Your Dreams (ex02)
This exercise involves recreating a missing 

Account.cpp file, given the tests.cpp and Account.hpp files. The goal is to produce a program output that perfectly matches the provided log file. This exercise is not mandatory to pass the module.

------------------------------------------------------------------------------
------------------------------------------------------------------------------

Proje Hakkında
Bu proje, C++ ile Nesne Yönelimli Programlamaya (OOP) giriş niteliğindeki C++ Modül 00'ın alıştırmalarını içermektedir. Proje, ad alanları (namespaces), sınıflar (classes), üye fonksiyonları (member functions), standart girdi/çıktı akışları (stdio streams) ve başlatma listeleri (initialization lists) gibi temel C++ kavramlarını pekiştirmeyi amaçlamaktadır.

Proje Kuralları
Bu projede aşağıdaki genel kurallara uyulmuştur:

Derleme: Kod c++ komutu ve -Wall -Wextra -Werror derleme bayrakları kullanılarak derlenir. Ayrıca, 

-std=c++98 bayrağı eklendiğinde de kodun derlenmeye devam etmesi beklenir.


Adlandırma: Sınıf isimleri UpperCamelCase formatındadır ve sınıf kodunu içeren dosyalar sınıf adıyla aynı isme sahiptir (örneğin, ClassName.hpp ve ClassName.cpp).


Yasaklı Fonksiyonlar: C++11 (ve türevleri) ile Boost kütüphaneleri yasaktır. Ayrıca, 

*printf(), *alloc() ve free() fonksiyonları da yasaktır.


STL Kısıtlaması: Standart Şablon Kütüphanesi'ndeki (STL) kapsayıcılar (örneğin, vector, list, map) ve algoritmalar (<algorithm>) yalnızca Modül 08 ve 09'da kullanılabilir.


Bağımsız Başlık Dosyaları: Her başlık dosyası kendi bağımlılıklarını içermelidir ve çift dahil etme sorununu önlemek için include guard kullanılmalıdır.

Alıştırmalar
Bu depoda 3 adet alıştırma bulunmaktadır:

1. Megafon (ex00)
Bu alıştırma, komut satırı argümanlarını büyük harflere dönüştüren basit bir C++ programı yazmayı içerir. Eğer argüman verilmezse, program "* LOUD AND UNBEARABLE FEEDBACK NOISE" şeklinde bir mesaj basar.


2. Benim Harika Telefon Defterim (ex01)
Bu alıştırma, 

PhoneBook ve Contact adında iki sınıfın implementasyonunu gerektiren etkileşimli bir programdır. Program, kullanıcıdan 

ADD, SEARCH ve EXIT komutlarını alarak bir telefon defteri işlevi görür. 

PhoneBook sınıfı maksimum 8 kişiyi saklayabilir ve dinamik bellek tahsisine izin verilmez.

3. Hayallerinizdeki İş (ex02)
Bu alıştırma, 

tests.cpp ve Account.hpp dosyaları verildiğinde eksik olan Account.cpp dosyasını yeniden oluşturma görevini içerir. Amaç, yeniden oluşturulan dosyanın, sağlanan log dosyasındaki çıktıyla eşleşen bir program çıktısı üretmesini sağlamaktır. Bu alıştırmanın tamamlanması zorunlu değildir