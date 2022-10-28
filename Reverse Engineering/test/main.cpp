#include <iostream>

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


typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};





// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
    int iVar1;

    iVar1 = puts(__s);
    return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked





// WARNING: Unknown calling convention yet parameter storage is locked








// std::ios_base::Init::~Init()




// WARNING: Unknown calling convention yet parameter storage is locked




// WARNING: Unknown calling convention yet parameter storage is locked






// WARNING: Removing unreachable block (ram,0x004008a7)
// WARNING: Removing unreachable block (ram,0x004008b1)


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



int main()

{
    int local_1c;
    int local_18;
    int local_14;
    char *local_10;

    local_14 = 1;
    local_18 = 1;
    local_1c = 1335;
    local_10 = (char *)gen(local_1c + local_14 + local_18);
    if (local_1c + local_14 + local_18 == 0x539) {
        print_ptr(local_10);
    }
    else {
    }
    free(local_10);
    return 0;
}



// __static_initialization_and_destruction_0(int, int)
