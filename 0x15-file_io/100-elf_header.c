#include "main.h"
/**
 * print_magic - Prints the magic numbers
 * @header: Pointer to ELF header
 */
void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
}

/**
 * print_class_data_version - Prints the class, data and version
 * @header: Pointer to ELF header
 */
void print_class_data_version(Elf64_Ehdr *header)
{
	printf("Class:                             ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

	printf("Data:                              ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2MSB ?
			"2's complement, big endian" : "2's complement, little endian");

	printf("Version:                           ");
	printf("%d%s\n", header->e_ident[EI_VERSION],
			header->e_ident[EI_VERSION] ==
			EV_CURRENT ? " (current)" : "");
}

/**
 * print_osabi - Prints the OS/ABI
 * @header: Pointer to ELF header
 */
void print_osabi(Elf64_Ehdr *header)
{
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("SGI Irix");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD");
			break;
		default:
			printf("<unknown: %x>", header->e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_magic(&header);
	print_class_data_version(&header);
	print_osabi(&header);

	close(fd);

	return (0);
}
