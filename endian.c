#include <stdio.h>

void check_endian() {
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	for (int i = 0; i < sizeof(num); i++) {
		printf("%p 0x%02x\n", (byte_ptr + i), (byte_ptr[i]));
	}

	if (byte_ptr[0] == 0x12) {
		printf("\nThis is a big endian");
	}

	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is_little_endian...");
	}
	else {
		printf("\nUnknown endian! ㅠㅠ");
	}
}

int main(void) {
	check_endian();
	return 0;
}