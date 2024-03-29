typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ulong size_t;

typedef struct basic_istream<char,std::char_traits<char>> basic_istream<char,std::char_traits<char>>, *Pbasic_istream<char,std::char_traits<char>>;

struct basic_istream<char,std::char_traits<char>> { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;










void __gmon_start__(void)

{
    __gmon_start__();
    return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
    int iVar1;

    iVar1 = puts(__s);
    return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
    int iVar1;

    iVar1 = putchar(__c);
    return iVar1;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
    Init(this);
    return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
    void *pvVar1;

    pvVar1 = malloc(__size);
    return pvVar1;
}



void __libc_start_main(void)

{
    __libc_start_main();
    return;
}



void __cxa_atexit(void)

{
    __cxa_atexit();
    return;
}



// std::ios_base::Init::~Init()

void __thiscall std::ios_base::Init::_Init(Init *this)

{
    do {
        // WARNING: Do nothing block with infinite loop
    } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,char *param_2)

{
    basic_ostream *pbVar1;

    pbVar1 = operator__(param_1,param_2);
    return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
    free(__ptr);
    return;
}



void __thiscall
std::basic_istream<char,std::char_traits<char>>::operator__
        (basic_istream_char_std__char_traits_char__ *this,int *param_1)

{
    operator__(this,param_1);
    return;
}


// WARNING: Removing unreachable block (ram,0x004008a7)
// WARNING: Removing unreachable block (ram,0x004008b1)

void deregister_tm_clones(void)

{
    return;
}



// WARNING: Removing unreachable block (ram,0x004008e4)
// WARNING: Removing unreachable block (ram,0x004008ee)

void register_tm_clones(void)

{
    return;
}




// WARNING: Removing unreachable block (ram,0x00400934)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
    register_tm_clones();
    return;
}



// gen(int)

undefined * gen(int param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)malloc(0x16);
    *puVar1 = 0x79;
    puVar1[1] = (char)param_1 + (char)(param_1 / 7) * -7 + '0';
    puVar1[2] = (char)param_1 + '<';
    puVar1[3] = 0x5f;
    puVar1[4] = puVar1[2] + -0x14;
    puVar1[5] = puVar1[4] + '\x03';
    puVar1[6] = puVar1[5];
    puVar1[7] = 0x65;
    puVar1[8] = puVar1[6];
    puVar1[9] = puVar1[3];
    puVar1[10] = 0x74;
    puVar1[0xb] = puVar1[10] + -0xc;
    puVar1[0xc] = 0x72;
    puVar1[0xd] = 0x33;
    puVar1[0xe] = 0x33;
    puVar1[0xf] = puVar1[3];
    puVar1[0x10] = 0x6e;
    puVar1[0x11] = puVar1[2];
    puVar1[0x12] = puVar1[0x10] + -1;
    puVar1[0x13] = 0x73;
    puVar1[0x14] = 0x21;
    puVar1[0x15] = 10;
    return puVar1;
}



// print_ptr(char*)

void print_ptr(char *param_1)

{
    int local_c;

    for (local_c = 0; local_c < 0x15; local_c = local_c + 1) {
        putchar((int)param_1[local_c]);
    }
    return;
}



undefined8 main(void)

{
    int local_1c;
    int local_18;
    int local_14;
    char *local_10;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    std::operator__((basic_ostream *)std::cout,"Enter three numbers!\n");
    local_10 = (char *)gen(local_1c + local_14 + local_18);
    if (local_1c + local_14 + local_18 == 0x539) {
        std::operator__((basic_ostream *)std::cout,"easyctf{");
        print_ptr(local_10);
        puts("}");
    }
    else {
        std::operator__((basic_ostream *)std::cout,"nope.\n");
    }
    free(local_10);
    return 0;
}



// __static_initialization_and_destruction_0(int, int)
