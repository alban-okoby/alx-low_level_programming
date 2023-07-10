#include "main.h"

/**
 * print_error - Prints an error message to stderr and exits
 * with status code 98.
 * @msg: The error message to display.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void print_elf_header(const Elf64_Ehdr *elf_header)
{
	printf("Magic:\t\t\t");
	for (int i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("Class:\t\t\t%s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :"ELF64");
	printf("Data:\t\t\t%s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little-endian" :
               elf_header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" :"Unknown");
        printf("Version:\t\t%d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:\t\t\t");
	switch (elf_header->e_ident[EI_OSABI])
        {
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("Solaris\n"); break;
		case ELFOSABI_AIX: printf("AIX\n"); break;
		case ELFOSABI_IRIX: printf("IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("TRU64 UNIX\n"); break;
		case ELFOSABI_ARM: printf("ARM architecture\n"); break;
		case ELFOSABI_STANDALONE: printf("Stand-alone (embedded) application\n"); break;
		default: printf("Unknown\n"); break;
        }
	printf("ABI Version:\t\t%d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:\t\t\t");
	switch (elf_header->e_type)
        {
		case ET_NONE: printf("NONE (No file type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("Unknown\n"); break;
        }
	printf("Entry point address:\t0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                print_error("Invalid number of arguments");
        }

        const char *filename = argv[1];

        int fd = open(filename, O_RDONLY);
        if (fd == -1)
        {
                print_error("Failed to open the file");
        }

        Elf64_Ehdr elf_header;
        ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
        if (bytes_read != sizeof(Elf64_Ehdr))
        {
                print_error("Failed to read ELF header");
        }

        if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
            elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
            elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
            elf_header.e_ident[EI_MAG3] != ELFMAG3)
        {
                print_error("Not an ELF file");
        }

        print_elf_header(&elf_header);

        close(fd);
        return 0;
}
