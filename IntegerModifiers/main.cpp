#include <iostream>

int main()
{
    // using signed we can use positive and negative numbers

    signed int value1{10};
    signed int value2{-300};

    std::cout << "------------------------------------------" << std::endl;

    std::cout << "Value1 : " << value1 << " , size : "
              << sizeof(int) << "bytes" << std::endl;
    std::cout << "Value2 :  " << value2 << " , size : "
              << sizeof(int) << "bytes" << std::endl;

    // using unsigned we only can use positive numbers
    unsigned int value3{4};
    // unsigned int value4 {-5}; //Compiler error.

    std::cout << "Value3 : " << value3 << " , size : "
              << sizeof(unsigned int) << "bytes" << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    // short and long

    //  2 Bytes
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    // 4 Bytes
    int int_var{55};
    signed signed_var{66};
    signed int signed_int{777};
    unsigned int unsigned_int{77};

    // 4 or 8 Bytes
    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    // 8 Bytes
    long long long_long{888};
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "Short variable : " << short_var << " , size : "
              << sizeof(short) << "bytes" << std::endl;

    std::cout << "Short int  : " << short_int << ", size : "
              << sizeof(short int) << "bytes" << std::endl;

    std::cout << "Signed short : " << signed_short
              << " , size : " << sizeof(signed short) << " bytes" << std::endl;

    std::cout << "Signed short int :  " << signed_short_int
              << " , size : " << sizeof(signed short int) << " bytes" << std::endl;

    std::cout << "unsigned short int :  " << unsigned_short_int
              << " , size : " << sizeof(unsigned short int) << " bytes" << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    std::cout << "Long variable :  " << long_var << " , size : "
              << sizeof(long) << " bytes" << std::endl;

    std::cout << "Long int :  " << long_int << " , size : "
              << sizeof(long int) << " bytes" << std::endl;

    std::cout << "Signed long :  " << signed_long << " , size : "
              << sizeof(signed long) << " bytes" << std::endl;

    std::cout << "Signed long int : " << signed_long_int << " , size : "
              << sizeof(signed long int) << " bytes" << std::endl;

    std::cout << "unsigned long int : " << unsigned_long_int << " , size : "
              << sizeof(unsigned long int) << " bytes" << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    std::cout << "Long long : " << long_long << " , size : "
              << sizeof(long long) << " bytes" << std::endl;

    std::cout << "Long long int : " << long_long_int << " , size : "
              << sizeof(long long int) << " bytes" << std::endl;

    std::cout << "Signed long long : " << signed_long_long << " , size : "
              << sizeof(signed long long) << " bytes" << std::endl;

    std::cout << "Signed long long int : " << signed_long_long_int << " , size : "
              << sizeof(signed long long int) << " bytes" << std::endl;

    std::cout << "unsigned long long int : " << unsigned_long_long_int << " , size : "
              << sizeof(unsigned long long int) << " bytes" << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    return 0;
}
