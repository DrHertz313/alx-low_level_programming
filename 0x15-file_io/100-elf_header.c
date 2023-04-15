#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

void display_error(char* error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

void display_elf_header_info(Elf64_Ehdr* header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++) {
	printf("%02x ", header->e_ident[i]);
}
	printf("\n");

	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              0x%x\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[])
{
	int fd;
	char buf[BUF_SIZE];
	Elf64_Ehdr header;

	if (argc != 2) {
	display_error("Invalid number of arguments");
}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
{
	display_error("Could not open file");
}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
{
	display_error("Could not read ELF header");
}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
	display_error("File is not an ELF file");
}

	display_elf_header_info(&header);

	if (close(fd) == -1)
{
	display_error("Could not close file");
}
return 0;
}
