#include <cstdio>

#include <csaru-core-cpp/csaru-core-cpp.hpp> // unused()
#include <csaru-core-cpp/csaru-core-cpp.hpp> // test double-include

int main (int argc, char ** argv) {

    unused(argc);
    unused(argv);

    std::size_t tempSt = CSaruCore::GetSystemPageSize();
    std::printf("System page size is {" PF_SIZE_T "} bytes.\n", tempSt);

    CSaruCore::SecureZero(&tempSt, sizeof(tempSt));
    std::printf("Set to zero, that value is {" PF_SIZE_T "}.\n", tempSt);

    std::printf("Beep!\n");
    CSaruCore::Beep();

	std::printf("sizeof(int): {" PF_SIZE_T "}\n", sizeof(int));
	std::printf("sizeof(uint64_t): {" PF_SIZE_T "}\n", sizeof(uint64_t));
	std::printf("sizeof(void *): {" PF_SIZE_T "}\n", sizeof(void *));

    return 0;

}
