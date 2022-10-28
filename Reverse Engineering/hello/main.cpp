#include <iostream>

typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    ImageBaseOffset32 EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

typedef union _union_538 _union_538, *P_union_538;

typedef void * HANDLE;

typedef struct _struct_539 _struct_539, *P_struct_539;

typedef void * PVOID;

struct _struct_539 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_538 {
    struct _struct_539 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_538 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT * PCONTEXT;

typedef ulonglong DWORD64;

typedef ushort WORD;

typedef union _union_52 _union_52, *P_union_52;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_53 _struct_53, *P_struct_53;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_53 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_52 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_53 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_52 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _struct_314 _struct_314, *P_struct_314;

struct _struct_314 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_313 _struct_313, *P_struct_313;

struct _struct_313 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

typedef struct _struct_312 _struct_312, *P_struct_312;

struct _struct_312 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

typedef struct _struct_315 _struct_315, *P_struct_315;

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION * PRUNTIME_FUNCTION;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef ulonglong * PDWORD64;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_61 {
    PDWORD64 IntegerContext[16];
    struct _struct_62 s;
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionCollidedUnwind=3,
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

union _SLIST_HEADER {
    struct _struct_312 s;
    struct _struct_313 Header8;
    struct _struct_314 Header16;
    struct _struct_315 HeaderX64;
};

typedef struct _struct_60 _struct_60, *P_struct_60;

typedef struct _M128A * PM128A;

struct _struct_60 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef CHAR * LPSTR;

typedef wchar_t WCHAR;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef union _union_59 _union_59, *P_union_59;

union _union_59 {
    PM128A FloatingContext[16];
    struct _struct_60 s;
};

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_59 u;
    union _union_61 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR * LPCWSTR;

typedef struct _UNWIND_HISTORY_TABLE * PUNWIND_HISTORY_TABLE;

typedef union _SLIST_HEADER * PSLIST_HEADER;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE * PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[9];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef DWORD * LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef struct HINSTANCE__ * HINSTANCE;

typedef void * LPCVOID;

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648,
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef int (* _onexit_t)(void);

typedef longlong __time64_t;

typedef ulonglong size_t;

typedef int errno_t;




undefined * FUN_140001000(void)

{
    return &DAT_140005630;
}



undefined * FUN_140001010(void)

{
    return &DAT_140005628;
}



void FUN_140001020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined8 local_res10;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    uVar1 = __acrt_iob_func(1);
    puVar2 = (undefined8 *)FUN_140001000();
    __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
    return;
}



void FUN_140001080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined8 local_res10;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    uVar1 = __acrt_iob_func(0);
    puVar2 = (undefined8 *)FUN_140001010();
    __stdio_common_vfscanf(*puVar2,uVar1,param_1,0,&local_res10);
    return;
}



void FUN_1400010e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,LPDWORD param_4)

{
    int iVar1;
    DWORD DVar2;
    UINT UVar3;
    __time64_t _Var4;
    HANDLE hFile;
    int *piVar5;
    uint uVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined auStackY712 [32];
    int local_288;
    DWORD local_284;
    undefined4 local_280;
    undefined4 uStack636;
    undefined4 uStack632;
    undefined4 uStack628;
    undefined4 local_270;
    undefined4 uStack620;
    undefined4 uStack616;
    undefined4 uStack612;
    undefined4 local_260;
    undefined2 local_25c;
    undefined local_258 [16];
    undefined local_248 [16];
    CHAR local_238 [272];
    DWORD local_128 [68];
    ulonglong local_18;

    local_18 = DAT_140005008 ^ (ulonglong)auStackY712;
    local_258 = ZEXT816(0);
    local_248 = ZEXT816(0);
    _Var4 = _time64((__time64_t *)0x0);
    srand((uint)_Var4);
    FUN_140001020("What\'s your name?\n",param_2,param_3,param_4);
    FUN_140001080(&DAT_1400032a4,local_258,param_3,param_4);
    FUN_140001020("Hello, %s!\n",local_258,param_3,param_4);
    lVar7 = 5;
    do {
        iVar1 = rand();
        uVar8 = iVar1 % 10 + 1;
        iVar1 = rand();
        uVar6 = iVar1 % 10 + 1;
        uVar9 = (ulonglong)uVar6;
        FUN_140001020("%d x %d = ?\n",(ulonglong)uVar8,uVar9,param_4);
        piVar5 = &local_288;
        FUN_140001080(&DAT_1400032d0,piVar5,uVar9,param_4);
        if (local_288 != uVar6 * uVar8) {
            FUN_140001020("Wrong!\n",piVar5,uVar9,param_4);
            local_260 = 0x74686769;
            local_280 = 0x6c697645;
            uStack636 = 0x74614320;
            uStack632 = 0x796f4220;
            uStack628 = 0x6f59202c;
            local_25c = 0x2e;
            local_270 = 0x6e207275;
            uStack620 = 0x74686769;
            uStack616 = 0x6572616d;
            uStack612 = 0x6e6f7420;
            DVar2 = GetTempPathA(0x104,local_238);
            if (((int)DVar2 < 0x105) && (DVar2 != 0)) {
                param_4 = local_128;
                UVar3 = GetTempFileNameA(local_238,"cat",0,(LPSTR)param_4);
                if (UVar3 != 0) {
                    param_4 = (LPDWORD)0x0;
                    hFile = CreateFileA((LPCSTR)local_128,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                                        (HANDLE)0x0);
                    if (hFile != (HANDLE)0xffffffffffffffff) {
                        param_4 = &local_284;
                        WriteFile(hFile,&local_280,0x26,param_4,(LPOVERLAPPED)0x0);
                        CloseHandle(hFile);
                    }
                }
            }
        }
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_140001300(local_18 ^ (ulonglong)auStackY712);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140001300(longlong param_1)

{
    code *pcVar1;
    BOOL BVar2;
    undefined *puVar3;
    undefined auStack56 [8];
    undefined auStack48 [48];

    if ((param_1 == DAT_140005008) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
        return;
    }
    puVar3 = auStack56;
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(2);
        puVar3 = auStack48;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1400015f3;
    capture_previous_context((PCONTEXT)&DAT_1400050e0);
    _DAT_140005050 = *(undefined8 *)(puVar3 + 0x38);
    _DAT_140005178 = puVar3 + 0x40;
    _DAT_140005160 = *(undefined8 *)(puVar3 + 0x40);
    _DAT_140005040 = 0xc0000409;
    _DAT_140005044 = 1;
    _DAT_140005058 = 1;
    DAT_140005060 = 2;
    *(longlong *)(puVar3 + 0x20) = DAT_140005008;
    *(undefined8 *)(puVar3 + 0x28) = DAT_140005000;
    *(undefined8 *)(puVar3 + -8) = 0x140001695;
    DAT_1400051d8 = _DAT_140005050;
    __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140003270);
    return;
}



void FUN_140001320(void)

{
    code *pcVar1;
    bool bVar2;
    char cVar3;
    int iVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    undefined7 extraout_var;

    _set_app_type();
    uVar5 = FUN_140001a18();
    _set_fmode((int)uVar5);
    uVar5 = FUN_140001a0c();
    puVar6 = (undefined4 *)__p__commode();
    *puVar6 = (int)uVar5;
    uVar5 = __scrt_initialize_onexit_tables(1);
    if ((char)uVar5 != '\0') {
        FUN_140001c8c();
        atexit(&LAB_140001cc8);
        FUN_140001a10();
        iVar4 = _configure_narrow_argv();
        if (iVar4 == 0) {
            FUN_140001a20();
            bVar2 = FUN_140001a54();
            if ((int)CONCAT71(extraout_var,bVar2) != 0) {
                __setusermatherr();
            }
            _guard_check_icall();
            _guard_check_icall();
            uVar5 = FUN_140001a0c();
            _configthreadlocale((int)uVar5);
            cVar3 = FUN_140001a30();
            if (cVar3 != '\0') {
                _initialize_narrow_environment();
            }
            FUN_140001a0c();
            uVar5 = thunk_FUN_140001a0c();
            if ((int)uVar5 == 0) {
                return;
            }
        }
    }
    FUN_140001a78(7);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



undefined8 FUN_1400013d8(void)

{
    FUN_140001a38();
    return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

uint entry(void)

{
    undefined8 uVar1;
    bool bVar2;
    int iVar3;
    ulonglong uVar4;
    code **ppcVar5;
    longlong *plVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint *puVar9;
    ulonglong uVar10;
    uint unaff_EBX;
    LPDWORD in_R9;

    __security_init_cookie();
    uVar4 = __scrt_initialize_crt(1);
    if ((char)uVar4 == '\0') {
        FUN_140001a78(7);
    }
    else {
        bVar2 = false;
        uVar4 = __scrt_acquire_startup_lock();
        unaff_EBX = unaff_EBX & 0xffffff00 | (uint)(uVar4 & 0xff);
        if (DAT_1400055b0 != 1) {
            if (DAT_1400055b0 == 0) {
                DAT_1400055b0 = 1;
                iVar3 = _initterm_e(&DAT_140003230,&DAT_140003248);
                if (iVar3 != 0) {
                    return 0xff;
                }
                _initterm(&DAT_140003218,&DAT_140003228);
                DAT_1400055b0 = 2;
            }
            else {
                bVar2 = true;
            }
            __scrt_release_startup_lock((char)(uVar4 & 0xff));
            ppcVar5 = (code **)FUN_140001a60();
            if ((*ppcVar5 != (code *)0x0) &&
                (uVar4 = __scrt_is_nonwritable_in_current_image((longlong)ppcVar5), (char)uVar4 != '\0')) {
                (**ppcVar5)();
            }
            plVar6 = (longlong *)FUN_140001a68();
            if ((*plVar6 != 0) &&
                (uVar4 = __scrt_is_nonwritable_in_current_image((longlong)plVar6), (char)uVar4 != '\0')) {
                _register_thread_local_exe_atexit_callback();
            }
            uVar7 = _get_initial_narrow_environment();
            puVar8 = (undefined8 *)__p___argv();
            uVar1 = *puVar8;
            puVar9 = (uint *)__p___argc();
            uVar10 = (ulonglong)*puVar9;
            unaff_EBX = FUN_1400010e0(uVar10,uVar1,uVar7,in_R9);
            uVar4 = __scrt_is_managed_app();
            if ((char)uVar4 != '\0') {
                if (!bVar2) {
                    _cexit();
                }
                __scrt_uninitialize_crt(CONCAT71((int7)(uVar10 >> 8),1),'\0');
                return unaff_EBX;
            }
            goto LAB_140001570;
        }
    }
    FUN_140001a78(7);
    LAB_140001570:
    // WARNING: Subroutine does not return
    exit(unaff_EBX);
}



// Library Function - Single Match
//  __raise_securityfailure
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
    HANDLE hProcess;

    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(param_1);
    hProcess = GetCurrentProcess();
    // WARNING: Could not recover jumptable at 0x0001400015c1. Too many branches
    // WARNING: Treating indirect jump as call
    TerminateProcess(hProcess,0xc0000409);
    return;
}



// Library Function - Single Match
//  capture_previous_context
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
    DWORD64 ControlPc;
    PRUNTIME_FUNCTION FunctionEntry;
    int iVar1;
    DWORD64 local_res8;
    ulonglong local_res10;
    PVOID local_res18 [2];

    RtlCaptureContext();
    ControlPc = param_1->Rip;
    iVar1 = 0;
    do {
        FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
        if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
            return;
        }
        RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                         (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
    ulonglong uVar1;
    bool bVar2;
    undefined7 extraout_var;
    longlong in_GS_OFFSET;
    ulonglong uVar3;

    bVar2 = __scrt_is_ucrt_dll_in_use();
    uVar3 = CONCAT71(extraout_var,bVar2);
    if ((int)uVar3 == 0) {
        LAB_14000173e:
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
        uVar1 = *(ulonglong *)(*(longlong *)(in_GS_OFFSET + 0x30) + 8);
        do {
            LOCK();
            bVar2 = DAT_1400055b8 == 0;
            DAT_1400055b8 = DAT_1400055b8 ^ (ulonglong)bVar2 * (DAT_1400055b8 ^ uVar1);
            uVar3 = !bVar2 * DAT_1400055b8;
            if (bVar2) goto LAB_14000173e;
        } while (uVar1 != uVar3);
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    return uVar3;
}



// Library Function - Single Match
//  __scrt_initialize_crt
//
// Library: Visual Studio 2019 Release

ulonglong __scrt_initialize_crt(int param_1)

{
    ulonglong uVar1;

    if (param_1 == 0) {
        DAT_1400055c0 = 1;
    }
    __isa_available_init();
    uVar1 = FUN_140001a30();
    if ((char)uVar1 != '\0') {
        uVar1 = FUN_140001a30();
        if ((char)uVar1 != '\0') {
            return uVar1 & 0xffffffffffffff00 | 1;
        }
        uVar1 = FUN_140001a30();
    }
    return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_initialize_onexit_tables
//
// Library: Visual Studio 2019 Release

ulonglong __scrt_initialize_onexit_tables(uint param_1)

{
    code *pcVar1;
    bool bVar2;
    ulonglong in_RAX;
    undefined7 extraout_var;
    ulonglong uVar3;

    if (DAT_1400055c1 == '\0') {
        if (1 < param_1) {
            FUN_140001a78(5);
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
        }
        bVar2 = __scrt_is_ucrt_dll_in_use();
        if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
            in_RAX = 0xffffffffffffffff;
            _DAT_1400055c8 = 0xffffffff;
            uRam00000001400055cc = 0xffffffff;
            uRam00000001400055d0 = 0xffffffff;
            uRam00000001400055d4 = 0xffffffff;
            _DAT_1400055d8 = 0xffffffffffffffff;
            _DAT_1400055e0 = 0xffffffff;
            uRam00000001400055e4 = 0xffffffff;
            uRam00000001400055e8 = 0xffffffff;
            uRam00000001400055ec = 0xffffffff;
            _DAT_1400055f0 = 0xffffffffffffffff;
        }
        else {
            in_RAX = _initialize_onexit_table(&DAT_1400055c8);
            if (((int)in_RAX != 0) ||
                (in_RAX = _initialize_onexit_table(&DAT_1400055e0), (int)in_RAX != 0)) {
                return in_RAX & 0xffffffffffffff00;
            }
        }
        DAT_1400055c1 = '\x01';
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x0001400018b1)
// Library Function - Single Match
//  __scrt_is_nonwritable_in_current_image
//
// Library: Visual Studio 2019 Release

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
    ulonglong uVar1;
    uint7 uVar2;
    IMAGE_SECTION_HEADER *pIVar3;

    uVar1 = 0;
    for (pIVar3 = &IMAGE_SECTION_HEADER_140000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f8;
         pIVar3 = pIVar3 + 1) {
        if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
            (uVar1 = (ulonglong)(uint)(pIVar3->Misc + pIVar3->VirtualAddress),
                    param_1 - 0x140000000U < uVar1)) goto LAB_14000189a;
    }
    pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
    LAB_14000189a:
    if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    else {
        uVar2 = (uint7)(uVar1 >> 8);
        if ((int)pIVar3->Characteristics < 0) {
            uVar1 = (ulonglong)uVar2 << 8;
        }
        else {
            uVar1 = CONCAT71(uVar2,1);
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
//
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
    bool bVar1;
    undefined3 extraout_var;

    bVar1 = __scrt_is_ucrt_dll_in_use();
    if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
        DAT_1400055b8 = 0;
    }
    return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
//
// Library: Visual Studio 2019 Release

undefined __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
    if ((DAT_1400055c0 == '\0') || (param_2 == '\0')) {
        FUN_140001a30();
        FUN_140001a30();
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _onexit
//
// Library: Visual Studio 2019 Release

_onexit_t _onexit(_onexit_t _Func)

{
    int iVar1;
    _onexit_t p_Var2;

    if (_DAT_1400055c8 == -1) {
        iVar1 = _crt_atexit();
    }
    else {
        iVar1 = _register_onexit_function(&DAT_1400055c8);
    }
    p_Var2 = (_onexit_t)0x0;
    if (iVar1 == 0) {
        p_Var2 = _Func;
    }
    return p_Var2;
}



// Library Function - Single Match
//  atexit
//
// Library: Visual Studio 2019 Release

int atexit(void *param_1)

{
    _onexit_t p_Var1;

    p_Var1 = _onexit((_onexit_t)param_1);
    return (int)((p_Var1 != (_onexit_t)0x0) - 1);
}



// Library Function - Single Match
//  __security_init_cookie
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __security_init_cookie(void)

{
    DWORD DVar1;
    _FILETIME local_res8;
    _FILETIME local_res10;
    uint local_res18;
    undefined4 uStackX28;

    if (DAT_140005008 == 0x2b992ddfa232) {
        local_res10 = (_FILETIME)0x0;
        GetSystemTimeAsFileTime((LPFILETIME)&local_res10);
        local_res8 = local_res10;
        DVar1 = GetCurrentThreadId();
        local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
        DVar1 = GetCurrentProcessId();
        local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
        QueryPerformanceCounter((LARGE_INTEGER *)&local_res18);
        DAT_140005008 =
                ((ulonglong)local_res18 << 0x20 ^ CONCAT44(uStackX28,local_res18) ^ (ulonglong)local_res8 ^
                 (ulonglong)&local_res8) & 0xffffffffffff;
        if (DAT_140005008 == 0x2b992ddfa232) {
            DAT_140005008 = 0x2b992ddfa233;
        }
    }
    DAT_140005000 = ~DAT_140005008;
    return;
}



undefined8 FUN_140001a0c(void)

{
    return 0;
}



undefined8 FUN_140001a10(void)

{
    return 1;
}



undefined8 FUN_140001a18(void)

{
    return 0x4000;
}



void FUN_140001a20(void)

{
    // WARNING: Could not recover jumptable at 0x000140001a27. Too many branches
    // WARNING: Treating indirect jump as call
    InitializeSListHead((PSLIST_HEADER)&DAT_140005600);
    return;
}



undefined FUN_140001a30(void)

{
    return 1;
}



void _guard_check_icall(void)

{
    return;
}



void FUN_140001a38(void)

{
    ulonglong *puVar1;

    puVar1 = (ulonglong *)FUN_140001000();
    *puVar1 = *puVar1 | 0x24;
    puVar1 = (ulonglong *)FUN_140001010();
    *puVar1 = *puVar1 | 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140001a54(void)

{
    return _DAT_140005014 == 0;
}



undefined * FUN_140001a60(void)

{
    return &DAT_140005640;
}



undefined * FUN_140001a68(void)

{
    return &DAT_140005638;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140001a70(void)

{
    _DAT_140005610 = 0;
    return;
}



void FUN_140001a78(undefined4 param_1)

{
    code *pcVar1;
    BOOL BVar2;
    LONG LVar3;
    PRUNTIME_FUNCTION FunctionEntry;
    undefined *puVar4;
    undefined8 in_stack_00000000;
    DWORD64 local_res10;
    undefined local_res18 [8];
    undefined local_res20 [8];
    undefined auStack1480 [8];
    undefined auStack1472 [232];
    undefined local_4d8 [152];
    undefined *local_440;
    DWORD64 local_3e0;

    puVar4 = auStack1480;
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(param_1);
        puVar4 = auStack1472;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140001aac;
    FUN_140001a70();
    *(undefined8 *)(puVar4 + -8) = 0x140001abd;
    memset(local_4d8,0,0x4d0);
    *(undefined8 *)(puVar4 + -8) = 0x140001ac7;
    RtlCaptureContext(local_4d8);
    *(undefined8 *)(puVar4 + -8) = 0x140001ae1;
    FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
        *(undefined8 *)(puVar4 + 0x38) = 0;
        *(undefined **)(puVar4 + 0x30) = local_res18;
        *(undefined **)(puVar4 + 0x28) = local_res20;
        *(undefined **)(puVar4 + 0x20) = local_4d8;
        *(undefined8 *)(puVar4 + -8) = 0x140001b22;
        RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                         *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                         *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
    }
    local_440 = &stack0x00000008;
    *(undefined8 *)(puVar4 + -8) = 0x140001b54;
    memset(puVar4 + 0x50,0,0x98);
    *(undefined8 *)(puVar4 + 0x60) = in_stack_00000000;
    *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
    *(undefined4 *)(puVar4 + 0x54) = 1;
    *(undefined8 *)(puVar4 + -8) = 0x140001b76;
    BVar2 = IsDebuggerPresent();
    *(undefined **)(puVar4 + 0x40) = puVar4 + 0x50;
    *(undefined **)(puVar4 + 0x48) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x140001b97;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    *(undefined8 *)(puVar4 + -8) = 0x140001ba2;
    LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
    if ((LVar3 == 0) && (BVar2 != 1)) {
        *(undefined8 *)(puVar4 + -8) = 0x140001bb2;
        FUN_140001a70();
    }
    return;
}



undefined8 thunk_FUN_140001a0c(void)

{
    return 0;
}



// Library Function - Single Match
//  __scrt_is_managed_app
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_is_managed_app(void)

{
    HMODULE pHVar1;
    ulonglong uVar2;
    int *piVar3;

    pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar1 == (HMODULE)0x0) || (*(short *)&pHVar1->unused != 0x5a4d)) ||
         (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
         )) || (((pHVar1 = (HMODULE)0x20b, *(short *)(piVar3 + 6) != 0x20b ||
                                           ((uint)piVar3[0x21] < 0xf)) || (piVar3[0x3e] == 0)))) {
        uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
    }
    else {
        uVar2 = 0x201;
    }
    return uVar2;
}



void FUN_140001c20(void)

{
    // WARNING: Could not recover jumptable at 0x000140001c27. Too many branches
    // WARNING: Treating indirect jump as call
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_140001c30);
    return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140001c8c(void)

{
    code **ppcVar1;

    for (ppcVar1 = (code **)&DAT_140003848; ppcVar1 < &DAT_140003848; ppcVar1 = ppcVar1 + 1) {
        if (*ppcVar1 != (code *)0x0) {
            (**ppcVar1)();
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140001dc3)
// WARNING: Removing unreachable block (ram,0x000140001d3e)
// WARNING: Removing unreachable block (ram,0x000140001d17)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __isa_available_init
//
// Library: Visual Studio 2019 Release

undefined8 __isa_available_init(void)

{
    int *piVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    byte in_XCR0;

    piVar1 = (int *)cpuid_basic_info(0);
    uVar6 = 0;
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar4 = puVar2[3];
    if ((piVar1[1] ^ 0x756e6547U | piVar1[3] ^ 0x6c65746eU | piVar1[2] ^ 0x49656e69U) == 0) {
        _DAT_140005020 = 0xffffffffffffffff;
        uVar5 = *puVar2 & 0xfff3ff0;
        if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
            ((uVar5 - 0x30650 < 0x21 &&
              ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
            DAT_140005620 = DAT_140005620 | 1;
        }
    }
    if (6 < *piVar1) {
        lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
        uVar6 = *(uint *)(lVar3 + 4);
        if ((uVar6 >> 9 & 1) != 0) {
            DAT_140005620 = DAT_140005620 | 2;
        }
    }
    _DAT_140005018 = 1;
    DAT_14000501c = 2;
    if ((uVar4 >> 0x14 & 1) != 0) {
        _DAT_140005018 = 2;
        DAT_14000501c = 6;
        if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
            DAT_14000501c = 0xe;
            _DAT_140005018 = 3;
            if ((uVar6 & 0x20) != 0) {
                _DAT_140005018 = 5;
                DAT_14000501c = 0x2e;
                if (((uVar6 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
                    DAT_14000501c = 0x6e;
                    _DAT_140005018 = 6;
                }
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
//
// Library: Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
    return _DAT_140005030 != 0;
}



void __current_exception(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ec6. Too many branches
    // WARNING: Treating indirect jump as call
    __current_exception();
    return;
}



void __current_exception_context(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ecc. Too many branches
    // WARNING: Treating indirect jump as call
    __current_exception_context();
    return;
}



void * memset(void *_Dst,int _Val,size_t _Size)

{
    void *pvVar1;

    // WARNING: Could not recover jumptable at 0x000140001ed2. Too many branches
    // WARNING: Treating indirect jump as call
    pvVar1 = memset(_Dst,_Val,_Size);
    return pvVar1;
}



void _seh_filter_exe(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ed8. Too many branches
    // WARNING: Treating indirect jump as call
    _seh_filter_exe();
    return;
}



void _set_app_type(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ede. Too many branches
    // WARNING: Treating indirect jump as call
    _set_app_type();
    return;
}



void __setusermatherr(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ee4. Too many branches
    // WARNING: Treating indirect jump as call
    __setusermatherr();
    return;
}



void _configure_narrow_argv(void)

{
    // WARNING: Could not recover jumptable at 0x000140001eea. Too many branches
    // WARNING: Treating indirect jump as call
    _configure_narrow_argv();
    return;
}



void _initialize_narrow_environment(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ef0. Too many branches
    // WARNING: Treating indirect jump as call
    _initialize_narrow_environment();
    return;
}



void _get_initial_narrow_environment(void)

{
    // WARNING: Could not recover jumptable at 0x000140001ef6. Too many branches
    // WARNING: Treating indirect jump as call
    _get_initial_narrow_environment();
    return;
}



void _initterm(void)

{
    // WARNING: Could not recover jumptable at 0x000140001efc. Too many branches
    // WARNING: Treating indirect jump as call
    _initterm();
    return;
}



void _initterm_e(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f02. Too many branches
    // WARNING: Treating indirect jump as call
    _initterm_e();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void exit(int _Code)

{
    // WARNING: Could not recover jumptable at 0x000140001f08. Too many branches
    // WARNING: Treating indirect jump as call
    exit();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void _exit(int _Code)

{
    // WARNING: Could not recover jumptable at 0x000140001f0e. Too many branches
    // WARNING: Treating indirect jump as call
    _exit();
    return;
}



errno_t _set_fmode(int _Mode)

{
    errno_t eVar1;

    // WARNING: Could not recover jumptable at 0x000140001f14. Too many branches
    // WARNING: Treating indirect jump as call
    eVar1 = _set_fmode(_Mode);
    return eVar1;
}



void __p___argc(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f1a. Too many branches
    // WARNING: Treating indirect jump as call
    __p___argc();
    return;
}



void __p___argv(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f20. Too many branches
    // WARNING: Treating indirect jump as call
    __p___argv();
    return;
}



void _cexit(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f26. Too many branches
    // WARNING: Treating indirect jump as call
    _cexit();
    return;
}



void _register_thread_local_exe_atexit_callback(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f32. Too many branches
    // WARNING: Treating indirect jump as call
    _register_thread_local_exe_atexit_callback();
    return;
}



int _configthreadlocale(int _Flag)

{
    int iVar1;

    // WARNING: Could not recover jumptable at 0x000140001f38. Too many branches
    // WARNING: Treating indirect jump as call
    iVar1 = _configthreadlocale(_Flag);
    return iVar1;
}



void __p__commode(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f44. Too many branches
    // WARNING: Treating indirect jump as call
    __p__commode();
    return;
}



void _initialize_onexit_table(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f4a. Too many branches
    // WARNING: Treating indirect jump as call
    _initialize_onexit_table();
    return;
}



void _register_onexit_function(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f50. Too many branches
    // WARNING: Treating indirect jump as call
    _register_onexit_function();
    return;
}



void _crt_atexit(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f56. Too many branches
    // WARNING: Treating indirect jump as call
    _crt_atexit();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void terminate(void)

{
    // WARNING: Could not recover jumptable at 0x000140001f5c. Too many branches
    // WARNING: Treating indirect jump as call
    terminate();
    return;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
//
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar2 = param_1;
    if ((*(byte *)param_3 & 4) != 0) {
        uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
    }
    uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
    if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
        param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
    }
    FUN_140001300(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
    return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
    code *UNRECOVERED_JUMPTABLE;

    // WARNING: Could not recover jumptable at 0x000140001ff0. Too many branches
    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
}


