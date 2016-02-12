#include <cstdio>

#include <csaru-core-cpp/csaru-core-cpp.h> // ref()

int main (int argc, char ** argv) {

    ref(argc);
    ref(argv);

	printf(
		"System page size is " PF_SIZE_T " bytes\n",
		CSaruCore::GetSystemPageSize()
	);

    return 0;

}
