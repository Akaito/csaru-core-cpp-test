#include <cstdio>

#include <csaru-core-cpp/csaru-core-cpp.h> // ref()

int main (int argc, char ** argv) {

    ref(argc);
    ref(argv);

	std::size_t tempSt = CSaruCore::GetSystemPageSize();
	std::printf("System page size is {" PF_SIZE_T "} bytes.\n", tempSt);

	CSaruCore::SecureZero(&tempSt, sizeof(tempSt));
	std::printf("Set to zero, that value is {" PF_SIZE_T "}.\n", tempSt);

	std::printf("Beep!\n");
	CSaruCore::Beep();

    return 0;

}
