typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
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

typedef unsigned short    wchar16;
typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef ulong DWORD;

typedef wchar_t WCHAR;

typedef WCHAR * LPWSTR;

typedef ushort WORD;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

typedef void * HANDLE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
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

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _STARTUPINFOW * LPSTARTUPINFOW;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[12];
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef char * va_list;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef uint size_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef struct localeinfo_struct * _locale_t;

typedef size_t rsize_t;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef double ULONGLONG;

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

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

typedef struct _TEB _TEB, *P_TEB;

struct _TEB {
};

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY * Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef WCHAR * LPCWSTR;

typedef union _SLIST_HEADER * PSLIST_HEADER;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef CHAR * LPSTR;

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

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int BOOL;

typedef BOOL * LPBOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef void * LPCVOID;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
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
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

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
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
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

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

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

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
};

typedef dword unsigned_long;

typedef struct _RTC_ALLOCA_NODE _RTC_ALLOCA_NODE, *P_RTC_ALLOCA_NODE;

struct _RTC_ALLOCA_NODE { // PlaceHolder Structure
};

typedef struct void_(__cdecl**_const)(void) void_(__cdecl**_const)(void), *Pvoid_(__cdecl**_const)(void);

struct void_(__cdecl**_const)(void) { // PlaceHolder Structure
};

typedef struct void_(__cdecl**)(void) void_(__cdecl**)(void), *Pvoid_(__cdecl**)(void);

struct void_(__cdecl**)(void) { // PlaceHolder Structure
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

struct _IMAGE_SECTION_HEADER { // PlaceHolder Structure
};

typedef struct tagEXCEPTION_VISUALCPP_DEBUG_INFO tagEXCEPTION_VISUALCPP_DEBUG_INFO, *PtagEXCEPTION_VISUALCPP_DEBUG_INFO;

struct tagEXCEPTION_VISUALCPP_DEBUG_INFO { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

typedef struct unsigned_char unsigned_char, *Punsigned_char;

struct unsigned_char { // PlaceHolder Structure
};

typedef dword unsigned_int;

typedef int (* _onexit_t)(void);




// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl
_wmakepath_s(wchar_t *_PathResult,size_t _SIZE,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,
            wchar_t *_Ext)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414dd6. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _wmakepath_s();
  return eVar1;
}



undefined4 thunk_FUN_004138e0(void)

{
  return 1;
}



undefined thunk_FUN_00414eb0(void)

{
  return 1;
}



undefined thunk_FUN_00414e80(void)

{
  return 1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d82. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __crt_debugger_hook(int param_1)

{
  _DAT_0041a554 = 0;
  return;
}



void _get_initial_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d40. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_narrow_environment();
  return;
}



void thunk_FUN_004121c0(void)

{
  int _Mode;
  
  _Mode = thunk_FUN_00413900();
  _set_fmode(_Mode);
  return;
}



void thunk_FUN_004121a0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_004138f0();
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = uVar1;
  return;
}



void __cdecl _ReadPointerNoFence(undefined4 *param_1)

{
  thunk_FUN_00414c60(param_1);
  return;
}



void __initialize_default_precision(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
    ___scrt_fastfail(7);
  }
  return;
}



void entry(void)

{
  __scrt_common_main();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414de2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = wcscpy_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d94. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = strcpy_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d9a. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = strcat_s();
  return eVar1;
}



void ___scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined4 auStack816 [39];
  EXCEPTION_RECORD EStack100;
  _EXCEPTION_POINTERS _Stack20;
  LONG LStack12;
  char cStack6;
  undefined uStack5;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  __crt_debugger_hook(3);
  memset(auStack816,0,0x2cc);
  auStack816[0] = 0x10001;
  memset(&EStack100,0,0x50);
  EStack100.ExceptionCode = 0x40000015;
  EStack100.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  cStack6 = BVar2 == 1;
  _Stack20.ExceptionRecord = &EStack100;
  _Stack20.ContextRecord = (PCONTEXT)auStack816;
  uStack5 = cStack6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LStack12 = UnhandledExceptionFilter(&_Stack20);
  if ((LStack12 == 0) && (cStack6 == '\0')) {
    __crt_debugger_hook(3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_0041a030 != 0;
}



void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (*(int *)(&DAT_0041a00c + param_2 * 4) != -1) {
      FUN_004125c0(param_1,*(int *)(&DAT_0041a00c + param_2 * 4),param_2,
                   (&PTR_s_The_value_of_ESP_was_not_properl_00417bc8)[param_2]);
      return;
    }
  }
  else {
    FUN_004125c0(param_1,1,5,"Unknown Runtime Check Error\n\r");
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

_TEB * _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
}



undefined4 thunk_FUN_004138f0(void)

{
  return 0;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00414ce6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



undefined thunk_FUN_00414ea0(void)

{
  return 1;
}



void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  undefined in_DL;
  undefined extraout_DL;
  undefined extraout_DL_00;
  char acStack324 [244];
  char acStack80 [52];
  byte abStack28 [20];
  uint uStack8;
  
  iVar1 = DAT_0041a01c;
  uStack8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a01c != -1) {
    if (param_2 == (_RTC_ALLOCA_NODE *)0x0) {
      FUN_004125c0(param_1,DAT_0041a01c,4,
                   "Stack area around _alloca memory reserved by this function is corrupted\n");
      thunk_FUN_00411cd0(uStack8 ^ (uint)&stack0xfffffffc,extraout_DL,(char)param_1);
      return;
    }
    FUN_00412510(abStack28,acStack80,(int)(param_2 + 0x20),*(int *)(param_2 + 0xc) - 0x24);
    _sprintf_s(acStack324,0xf4,"%s%s%p%s%zd%s%d%s%s%s%s%s",
               "Stack area around _alloca memory reserved by this function is corrupted",
               "\nAddress: 0x",param_2 + 0x20,"\nSize: ",*(int *)(param_2 + 0xc) + -0x24,
               "\nAllocation number within this function: ",param_3,"\nData: <",abStack28,
               &DAT_0041816c,acStack80,&DAT_00418168);
    FUN_004125c0(param_1,iVar1,4,acStack324);
    in_DL = extraout_DL_00;
  }
  thunk_FUN_00411cd0(uStack8 ^ (uint)&stack0xfffffffc,in_DL,(char)param_1);
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined4 thunk_FUN_00413c60(void)

{
  return 0;
}



undefined4 thunk_FUN_00413920(void)

{
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d70. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  int iStack8;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  if (p_Var1 == (_onexit_t)0x0) {
    iStack8 = -1;
  }
  else {
    iStack8 = 0;
  }
  return iStack8;
}



undefined4 thunk_FUN_00412e60(void)

{
  return DAT_0041a508;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)memset();
  return pvVar1;
}



undefined * FID_conflict____scrt_get_dyn_tls_dtor_callback(void)

{
  return &DAT_0041a56c;
}



void thunk_FUN_00413de0(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)&DAT_00418938;
  do {
    pcVar1 = *ppcVar2;
    if (pcVar1 != (code *)0x0) {
      thunk_FUN_00413e60();
      (*pcVar1)();
    }
    ppcVar2 = ppcVar2 + 1;
  } while (ppcVar2 < &DAT_00418b3c);
  return;
}



void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  unsigned_int uVar3;
  char *pcVar4;
  undefined in_DL;
  undefined extraout_DL;
  char in_stack_fffffbf8;
  
  iVar1 = DAT_0041a014;
  uVar2 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a014 == -1) goto LAB_004124ca;
  if (*param_2 == '\0') {
LAB_004124b8:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    uVar3 = _strlen_priv(param_2);
    if (0x400 < uVar3 + 0x2d) goto LAB_004124b8;
    strcpy_s(&stack0xfffffbf8,0x400,"Stack around the variable \'");
    strcat_s(&stack0xfffffbf8,0x400,param_2);
    strcat_s(&stack0xfffffbf8,0x400,"\' was corrupted.");
    pcVar4 = &stack0xfffffbf8;
  }
  FUN_004125c0(param_1,iVar1,2,pcVar4);
  in_DL = extraout_DL;
LAB_004124ca:
  thunk_FUN_00411cd0(uVar2 ^ (uint)&stack0xfffffffc,in_DL,in_stack_fffffbf8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_0041a24c = uVar3;
  _DAT_0041a154 = uVar2;
  _DAT_0041a258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a25c = &param_1;
  _DAT_0041a148 = 0xc0000409;
  _DAT_0041a14c = 1;
  _DAT_0041a158 = 1;
  DAT_0041a15c = param_1;
  _DAT_0041a224 = in_GS;
  _DAT_0041a228 = in_FS;
  _DAT_0041a22c = in_ES;
  _DAT_0041a230 = in_DS;
  _DAT_0041a234 = unaff_EDI;
  _DAT_0041a238 = unaff_ESI;
  _DAT_0041a23c = unaff_EBX;
  _DAT_0041a244 = uVar5;
  DAT_0041a250 = _DAT_0041a154;
  _DAT_0041a254 = in_CS;
  _DAT_0041a260 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00418288);
  _DAT_0041a240 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_0041a248 = (undefined4)uVar11;
  return;
}



void __std_type_info_destroy_list(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cda. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_type_info_destroy_list();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d5e. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode();
  return eVar1;
}



undefined thunk_FUN_00414e90(void)

{
  return 1;
}



undefined thunk_FUN_00414ec0(void)

{
  return 1;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d8e. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool ___scrt_is_user_matherr_present(void)

{
  return _DAT_0041a028 == 0;
}



// WARNING: Removing unreachable block (ram,0x00414a4a)
// WARNING: Removing unreachable block (ram,0x00414976)
// WARNING: Removing unreachable block (ram,0x00414900)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  undefined extraout_DL;
  undefined uVar8;
  uint uVar9;
  uint in_XCR0;
  undefined in_stack_ffffffbc;
  uint uStack12;
  
  uVar4 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  _DAT_0041a560 = 0;
  DAT_0041a02c = DAT_0041a02c | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar8 = extraout_DL;
  if (BVar5 != 0) {
    uStack12 = 0;
    _DAT_0041a560 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = *puVar2;
    uVar7 = puVar2[3];
    if (((piVar1[1] ^ 0x756e6547U | piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU) == 0) &&
       ((((((uVar6 & 0xfff3ff0) == 0x106c0 || ((uVar6 & 0xfff3ff0) == 0x20660)) ||
          ((uVar6 & 0xfff3ff0) == 0x20670)) ||
         (((uVar6 & 0xfff3ff0) == 0x30650 || ((uVar6 & 0xfff3ff0) == 0x30660)))) ||
        ((uVar6 & 0xfff3ff0) == 0x30670)))) {
      DAT_0041a564 = DAT_0041a564 | 1;
    }
    if (6 < *piVar1) {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uStack12 = *(uint *)(iVar3 + 4);
      if ((uStack12 & 0x200) != 0) {
        DAT_0041a564 = DAT_0041a564 | 2;
      }
    }
    uVar9 = uVar7 & 0x100000;
    uVar6 = DAT_0041a02c | 2;
    if (uVar9 != 0) {
      _DAT_0041a560 = 2;
      uVar6 = DAT_0041a02c | 6;
      uVar9 = uVar7 & 0x8000000;
      if ((uVar9 != 0) && ((uVar7 & 0x10000000) != 0)) {
        uVar9 = in_XCR0 & 6;
        in_stack_ffffffbc = (undefined)uVar9;
        if (uVar9 == 6) {
          _DAT_0041a560 = 3;
          uVar9 = 8;
          uVar6 = DAT_0041a02c | 0xe;
          if ((uStack12 & 0x20) != 0) {
            _DAT_0041a560 = 5;
            uVar6 = DAT_0041a02c | 0x2e;
          }
        }
      }
    }
    DAT_0041a02c = uVar6;
    uVar8 = (undefined)uVar9;
  }
  thunk_FUN_00411cd0(uVar4 ^ (uint)&stack0xfffffffc,uVar8,in_stack_ffffffbc);
  return;
}



undefined8 __fastcall __RTC_CheckEsp(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return CONCAT44(param_2,in_EAX);
  }
  _RTC_Failure(unaff_retaddr,0);
  return CONCAT44(param_2,in_EAX);
}



uint ___scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  uint uVar2;
  int *piVar3;
  uint3 uVar4;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if (pHVar1 == (HMODULE)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(short *)&pHVar1->unused == 0x5a4d) {
      piVar3 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused);
      if (*piVar3 == 0x4550) {
        uVar4 = (uint3)(byte)((ushort)*(short *)(piVar3 + 6) >> 8);
        if (*(short *)(piVar3 + 6) == 0x10b) {
          if ((uint)piVar3[0x1d] < 0xf) {
            uVar2 = (uint)uVar4 << 8;
          }
          else {
            if (piVar3[0x3a] == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
          }
        }
        else {
          uVar2 = (uint)uVar4 << 8;
        }
      }
      else {
        uVar2 = (uint)piVar3 & 0xffffff00;
      }
    }
    else {
      uVar2 = (uint)pHVar1 & 0xffffff00;
    }
  }
  return uVar2;
}



void____cdecl____void_ * __cdecl
__crt_fast_decode_pointer_void____cdecl____void__(void____cdecl___const__void_ *param_1)

{
  void____cdecl____void_ *pvVar1;
  
  pvVar1 = (void____cdecl____void_ *)
           __crt_rotate_pointer_value((uint)param_1 ^ DAT_0041a000,DAT_0041a000 % 0x20);
  return pvVar1;
}



int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_004117a0();
  iVar2 = __stdio_common_vsprintf_s(*puVar1,puVar1[1],_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



undefined thunk_FUN_00414ea0(void)

{
  return 1;
}



void __stdio_common_vsprintf_s(void)

{
                    // WARNING: Could not recover jumptable at 0x00414da0. Too many branches
                    // WARNING: Treating indirect jump as call
  __stdio_common_vsprintf_s();
  return;
}



void thunk_FUN_00413d20(void)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_0041114a);
  return;
}



undefined4 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((DAT_0041a531 == '\0') || (param_2 == '\0')) {
    thunk_FUN_00414eb0();
    uVar1 = thunk_FUN_00414eb0();
    uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined thunk_FUN_00414ec0(void)

{
  return 1;
}



void _crt_at_quick_exit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_at_quick_exit();
  return;
}



void thunk_FUN_004139b0(void)

{
  return;
}



void _set_new_mode(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d88. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_new_mode();
  return;
}



undefined8 __cdecl
thunk_FUN_004117e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  undefined4 auStack196 [47];
  undefined4 uStack8;
  
  puVar1 = auStack196;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_004117a0();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,param_3,param_4);
  uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  uStack8 = 0x41183c;
  uVar3 = __RTC_CheckEsp(extraout_ECX_00,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



unsigned_int __cdecl __crt_rotate_pointer_value(unsigned_int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x1f;
  return param_1 >> bVar1 | param_1 << 0x20 - bVar1;
}



undefined4 thunk_FUN_00413910(void)

{
  return 0;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00414d58. Too many branches
                    // WARNING: Treating indirect jump as call
  _exit();
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d28. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



void thunk_FUN_00411710(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack196 [48];
  
  puVar2 = auStack196;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



void thunk_FUN_004139c0(void)

{
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d3a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



undefined * ___local_stdio_scanf_options(void)

{
  return &DAT_0041a548;
}



void __cdecl ___security_init_cookie(void)

{
  uint uStack8;
  
  if ((DAT_0041a000 == 0xbb40e64e) || ((DAT_0041a000 & 0xffff0000) == 0)) {
    uStack8 = ___get_entropy();
    if (uStack8 == 0xbb40e64e) {
      uStack8 = 0xbb40e64f;
    }
    else {
      if ((uStack8 & 0xffff0000) == 0) {
        uStack8 = (uStack8 | 0x4711) << 0x10 | uStack8;
      }
    }
    DAT_0041a000 = uStack8;
    DAT_0041a004 = ~uStack8;
  }
  else {
    DAT_0041a004 = ~DAT_0041a000;
  }
  return;
}



undefined thunk_FUN_00414eb0(void)

{
  return 1;
}



void thunk_FUN_00413930(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041a538);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



undefined thunk_FUN_00414e80(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  void____cdecl____void_ *pvVar3;
  
  if (DAT_0041a530 != '\0') {
    return 1;
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    ___scrt_fastfail(5);
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) == 0) || (param_1 != 0)) {
    pvVar3 = __crt_fast_encode_pointer_void____cdecl____void__
                       ((void____cdecl___const__void_ *)0xffffffff);
    DAT_0041a518 = pvVar3;
    _DAT_0041a51c = pvVar3;
    _DAT_0041a520 = pvVar3;
    DAT_0041a524 = pvVar3;
    _DAT_0041a528 = pvVar3;
    _DAT_0041a52c = pvVar3;
  }
  else {
    uVar2 = _initialize_onexit_table(&DAT_0041a518);
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
    pvVar3 = (void____cdecl____void_ *)_initialize_onexit_table(&DAT_0041a524);
    if (pvVar3 != (void____cdecl____void_ *)0x0) {
      return (uint)pvVar3 & 0xffffff00;
    }
  }
  DAT_0041a530 = 1;
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414dca. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



void ___scrt_initialize_default_local_stdio_options(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)thunk_FUN_004117a0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)___local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



int __cdecl __scrt_narrow_argv_policy::configure_argv(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk_FUN_004138e0();
  iVar2 = _configure_narrow_argv(uVar1);
  return iVar2;
}



undefined8 __cdecl thunk_FUN_00411860(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 auStack220 [49];
  undefined1 *puStack24;
  undefined4 uStack12;
  undefined4 uStack8;
  
  puVar2 = auStack220;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_00411710();
  puStack24 = &param_3;
  uVar3 = thunk_FUN_004117e0(param_1,param_2,0,puStack24);
  uStack12 = (undefined4)uVar3;
  puStack24 = (undefined1 *)0x0;
  uStack8 = 0x4118bc;
  uVar3 = __RTC_CheckEsp(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  void____cdecl____void_ *pvVar1;
  int iVar2;
  _onexit_t p_Stack12;
  _onexit_t p_Stack8;
  
  pvVar1 = __crt_fast_decode_pointer_void____cdecl____void__(DAT_0041a518);
  p_Stack12 = _Func;
  if (pvVar1 == (void____cdecl____void_ *)0xffffffff) {
    iVar2 = _crt_atexit(_Func);
    if (iVar2 != 0) {
      p_Stack8 = (_onexit_t)0x0;
      p_Stack12 = p_Stack8;
    }
  }
  else {
    iVar2 = _register_onexit_function(&DAT_0041a518,_Func);
    if (iVar2 != 0) {
      p_Stack12 = (_onexit_t)0x0;
    }
  }
  return p_Stack12;
}



void _seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d22. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_exe();
  return;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x00414da6. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *unaff_retaddr;
  
  iVar2 = 0;
  if (0 < *param_2) {
    iVar3 = 0;
    do {
      iVar1 = param_2[1];
      if ((*(int *)(*(int *)(iVar1 + iVar3) + param_1 + -4) != -0x33333334) ||
         (*(int *)(*(int *)(iVar1 + 4 + iVar3) + *(int *)(iVar1 + iVar3) + param_1) != -0x33333334))
      {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar1 + 8 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *param_2);
  }
  return;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d64. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d6a. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argv();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall thunk_FUN_00411cd0(int param_1,undefined param_2,undefined param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  
  if (param_1 == DAT_0041a000) {
    return;
  }
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_0041a24c = uVar3;
  _DAT_0041a154 = uVar2;
  _DAT_0041a258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a25c = &param_3;
  _DAT_0041a198 = 0x10001;
  _DAT_0041a148 = 0xc0000409;
  _DAT_0041a14c = 1;
  _DAT_0041a158 = 1;
  DAT_0041a15c = 2;
  _DAT_0041a224 = in_GS;
  _DAT_0041a228 = in_FS;
  _DAT_0041a22c = in_ES;
  _DAT_0041a230 = in_DS;
  _DAT_0041a234 = unaff_EDI;
  _DAT_0041a238 = unaff_ESI;
  _DAT_0041a23c = unaff_EBX;
  _DAT_0041a244 = uVar5;
  DAT_0041a250 = _DAT_0041a154;
  _DAT_0041a254 = in_CS;
  _DAT_0041a260 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00418288);
  _DAT_0041a240 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_0041a248 = (undefined4)uVar11;
  return;
}



undefined * FID_conflict____scrt_get_dyn_tls_dtor_callback(void)

{
  return &DAT_0041a578;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00414db2. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



uint __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    DAT_0041a531 = 1;
  }
  ___isa_available_init();
  cVar1 = thunk_FUN_00414e80();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_00414e80();
    if ((uVar2 & 0xff) == 0) {
      uVar2 = thunk_FUN_00414eb0();
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}



void _guard_check_icall(void)

{
  return;
}



undefined thunk_FUN_00414e90(void)

{
  return 1;
}



undefined8 thunk_FUN_004118e0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined in_stack_fffffee8;
  int *piStack84;
  int iStack60;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  int iStack16;
  uint uStack8;
  
  puVar3 = (undefined4 *)&stack0xfffffee8;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  iStack16 = 0;
  iStack60 = 0x61657242;
  uStack56 = 0x6c6c416b;
  uStack52 = 0x7b465443;
  uStack48 = 0x5f353359;
  uStack44 = 0x336d5f31;
  uStack40 = 0x375f6e61;
  uStack36 = 0x5f733168;
  uStack32 = 0x7d336e30;
  uStack28 = 0;
  fopen("./config/CGCTF{is_this_the_flag}.txt","w");
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  if ((int)uVar4 == 0) {
    puts("sorry, you dont know me :( ");
    __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  }
  else {
    puts("You did a great job, go to get your flag");
    __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
    piStack84 = &iStack60;
    while (*piStack84 != 0) {
      iStack16 = *piStack84;
      piStack84 = piStack84 + 1;
      thunk_FUN_00411860((int)uVar4,&DAT_00417b94,0xf0);
    }
  }
  system("PAUSE");
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  uVar2 = (undefined)((ulonglong)uVar4 >> 0x20);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411a24);
  thunk_FUN_00411cd0(uStack8 ^ (uint)&stack0xfffffffc,uVar2,in_stack_fffffee8);
  uStack8 = 0x411a1d;
  uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
  return uVar4;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl
_wsplitpath_s(wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSize,wchar_t *_Dir,size_t _DirSize,
             wchar_t *_Filename,size_t _FilenameSize,wchar_t *_Ext,size_t _ExtSize)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _wsplitpath_s();
  return eVar1;
}



undefined4 thunk_FUN_00414ed0(void)

{
  return 0;
}



void thunk_FUN_00413e60(void)

{
  _guard_check_icall();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00414d52. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d46. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d34. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



undefined4 __cdecl thunk_FUN_00414c60(undefined4 *param_1)

{
  return *param_1;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d2e. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void __vcrt_GetModuleFileNameW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cec. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_GetModuleFileNameW();
  return;
}



void____cdecl____void_ * __cdecl
__crt_fast_encode_pointer_void____cdecl____void__(void____cdecl___const__void_ *param_1)

{
  unsigned_int uVar1;
  
  uVar1 = __crt_rotate_pointer_value((unsigned_int)param_1,0x20 - DAT_0041a000 % 0x20);
  return (void____cdecl____void_ *)(uVar1 ^ DAT_0041a000);
}



BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414e18. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



int __cdecl __scrt_narrow_environment_policy::initialize_environment(void)

{
  int iVar1;
  
  iVar1 = _initialize_narrow_environment();
  return iVar1;
}



undefined4 thunk_FUN_00412e50(void)

{
  return DAT_0041a504;
}



int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
  thunk_FUN_00411710();
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}



void __cdecl ___scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    DAT_0041a514 = 0;
  }
  return;
}



int ___scrt_acquire_startup_lock(void)

{
  int iVar1;
  bool bVar2;
  uint3 extraout_var;
  int iVar3;
  _TEB *p_Var4;
  int iVar5;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) == 0) {
    iVar3 = (uint)extraout_var << 8;
  }
  else {
    p_Var4 = _NtCurrentTeb();
    iVar3 = *(int *)(p_Var4 + 4);
    do {
      iVar5 = 0;
      LOCK();
      iVar1 = iVar3;
      if (DAT_0041a514 != 0) {
        iVar5 = DAT_0041a514;
        iVar1 = DAT_0041a514;
      }
      DAT_0041a514 = iVar1;
      if (iVar5 == 0) {
        return 0;
      }
    } while (iVar3 != iVar5);
    iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return iVar3;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dbe. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



undefined4 __cdecl
thunk_FUN_00414470(int param_1,undefined2 *param_2,undefined4 param_3,uint *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  SIZE_T SVar3;
  int iVar4;
  uint uVar5;
  FARPROC pFVar6;
  HANDLE pvVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  ushort *puVar15;
  DWORD DVar16;
  undefined4 uVar17;
  code ***pppcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int **ppiVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined *puVar25;
  _MEMORY_BASIC_INFORMATION _Stack80;
  undefined auStack52 [4];
  undefined4 uStack48;
  int iStack44;
  undefined4 uStack40;
  int *piStack36;
  uint uStack32;
  code **ppcStack28;
  int *piStack24;
  uint uStack20;
  uint *puStack16;
  code **ppcStack12;
  ushort auStack8 [2];
  
  *param_4 = 0;
  *param_2 = 0;
  SVar3 = VirtualQuery((LPCVOID)(param_1 + -1),(PMEMORY_BASIC_INFORMATION)&_Stack80,0x1c);
                    // WARNING: Load size is inaccurate
  if ((((SVar3 == 0) ||
       (iVar4 = __vcrt_GetModuleFileNameW(_Stack80.AllocationBase,param_5,param_6), iVar4 == 0)) ||
      (*_Stack80.AllocationBase != 0x5a4d)) ||
     ((*(int *)((int)_Stack80.AllocationBase + 0x3c) < 1 ||
      (piVar8 = (int *)(*(int *)((int)_Stack80.AllocationBase + 0x3c) + (int)_Stack80.AllocationBase
                       ), *piVar8 != 0x4550)))) {
    return 0;
  }
  uVar11 = (int)(LPCVOID)(param_1 + -1) - (int)_Stack80.AllocationBase;
  uVar12 = (uint)*(ushort *)((int)piVar8 + 6);
  uVar10 = 0;
  uVar5 = 0;
  if (uVar12 != 0) {
    puVar9 = (uint *)((int)piVar8 + *(ushort *)(piVar8 + 5) + 0x20);
    do {
      if ((puVar9[1] <= uVar11) && (uVar10 = uVar11 - puVar9[1], uVar11 < *puVar9)) break;
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 10;
    } while (uVar5 < uVar12);
  }
  if (uVar5 == uVar12) {
    return 0;
  }
  puStack16 = (uint *)(uVar5 + 1);
  if (DAT_0041a55d == '\0') {
    if (DAT_0041a558 != (HMODULE)0x0) {
      return 0;
    }
    DAT_0041a558 = GetPdbDll();
    if (DAT_0041a558 == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_0041a55d = '\x01';
  }
  pFVar6 = GetProcAddress(DAT_0041a558,"PDBOpenValidate5");
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  pppcVar18 = &ppcStack28;
  uVar24 = 0;
  uVar22 = 0;
  puVar25 = auStack52;
  uVar20 = 0;
  uVar19 = 0;
  uVar17 = 0;
  uVar23 = param_5;
  thunk_FUN_00413e60();
  iVar4 = (*pFVar6)(uVar23,uVar17,uVar19,uVar20,puVar25,uVar22,uVar24,pppcVar18);
  if (iVar4 == 0) {
    return 0;
  }
  uStack40 = 0;
  pcVar1 = *(code **)*ppcStack28;
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0x1329141) goto LAB_004146dd;
  ppiVar21 = &piStack36;
  puVar25 = &DAT_00418578;
  uVar23 = 0;
  pcVar1 = *(code **)(*ppcStack28 + 0x1c);
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)(uVar23,puVar25,ppiVar21);
  if (iVar4 == 0) goto LAB_004146dd;
  ppiVar21 = &piStack24;
  uVar19 = 0;
  uVar17 = 0;
  uVar23 = 0;
  pcVar1 = *(code **)(*piStack36 + 0x20);
  puVar9 = puStack16;
  uVar5 = uVar10;
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)(puVar9,uVar5,ppiVar21,uVar23,uVar17,uVar19);
  if (iVar4 != 0) {
    pppcVar18 = &ppcStack12;
    ppcStack12 = (code **)0x0;
    pcVar1 = *(code **)(*piStack24 + 0x68);
    thunk_FUN_00413e60();
    cVar2 = (*pcVar1)(pppcVar18);
    if ((cVar2 != '\0') && (ppcStack12 != (code **)0x0)) {
      pcVar1 = *(code **)(*ppcStack12 + 8);
      thunk_FUN_00413e60();
      iVar4 = (*pcVar1)();
      puVar9 = (uint *)0x0;
      if (iVar4 != 0) {
        do {
          puVar9 = &uStack20;
          uVar17 = 0;
          piVar8 = &iStack44;
          puVar15 = auStack8;
          pcVar1 = *(code **)(*ppcStack12 + 0xc);
          puVar14 = &uStack32;
          uVar23 = 0;
          thunk_FUN_00413e60();
          cVar2 = (*pcVar1)(uVar23,puVar14,puVar15,piVar8,puVar9,uVar17);
          if (cVar2 == '\0') goto LAB_004146a5;
          if ((((uint *)(uint)auStack8[0] == puStack16) && (uStack32 <= uVar10)) &&
             (uVar10 < iStack44 + uStack32)) {
            if ((uStack20 == 0) || (0x1ffffffe < uStack20)) goto LAB_004146a5;
            SVar3 = uStack20 << 3;
            DVar16 = 0;
            pvVar7 = GetProcessHeap();
            puVar9 = (uint *)HeapAlloc(pvVar7,DVar16,SVar3);
            puStack16 = puVar9;
            if (puVar9 == (uint *)0x0) goto LAB_004146a5;
            puVar14 = &uStack20;
            puVar13 = &uStack48;
            uVar19 = 0;
            uVar17 = 0;
            uVar23 = 0;
            pcVar1 = *(code **)(*ppcStack12 + 0xc);
            thunk_FUN_00413e60();
            cVar2 = (*pcVar1)(puVar13,uVar23,uVar17,uVar19,puVar14,puVar9);
            puVar9 = puStack16;
            if ((cVar2 == '\0') || (uVar10 - uStack32 < *puStack16)) goto LAB_00414695;
            uVar5 = 1;
            if (1 < uStack20) goto LAB_00414766;
            goto LAB_00414770;
          }
          pcVar1 = *(code **)(*ppcStack12 + 8);
          thunk_FUN_00413e60();
          iVar4 = (*pcVar1)();
        } while (iVar4 != 0);
        puVar9 = (uint *)0x0;
      }
      goto LAB_00414695;
    }
    goto LAB_004146b7;
  }
  goto LAB_004146ca;
  while (uVar5 = uVar5 + 1, uVar5 < uStack20) {
LAB_00414766:
    if (uVar10 - uStack32 < puStack16[uVar5 * 2]) break;
  }
LAB_00414770:
  uVar19 = 0;
  uVar17 = 0;
  *param_4 = puStack16[uVar5 * 2 + -1] & 0xffffff;
  puVar13 = &param_3;
  uVar23 = 0;
  pcVar1 = *(code **)(*piStack24 + 0x70);
  thunk_FUN_00413e60();
  cVar2 = (*pcVar1)(uStack48,param_2,puVar13,uVar23,uVar17,uVar19);
  puVar9 = puStack16;
  if (cVar2 != '\0') {
    uStack40 = 1;
  }
LAB_00414695:
  DVar16 = 0;
  pvVar7 = GetProcessHeap();
  HeapFree(pvVar7,DVar16,puVar9);
LAB_004146a5:
  pcVar1 = *(code **)*ppcStack12;
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146b7:
  pcVar1 = *(code **)(*piStack24 + 0x40);
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146ca:
  pcVar1 = *(code **)(*piStack36 + 0x38);
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146dd:
  pcVar1 = *(code **)(*ppcStack28 + 0x2c);
  thunk_FUN_00413e60();
  (*pcVar1)();
  return uStack40;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _c_exit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d76. Too many branches
                    // WARNING: Treating indirect jump as call
  _c_exit();
  return;
}



undefined * thunk_FUN_004117a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack196 [48];
  
  puVar2 = auStack196;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return &DAT_0041a138;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00414db8. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



undefined4 thunk_FUN_00413900(void)

{
  return 0x4000;
}



void __vcrt_LoadLibraryExW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cf8. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_LoadLibraryExW();
  return;
}



uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  uint uVar2;
  _IMAGE_SECTION_HEADER *p_Var3;
  int **in_FS_OFFSET;
  int *piStack20;
  code *pcStack16;
  uint uStack12;
  undefined4 uStack8;
  
  pcStack16 = __except_handler4;
  piStack20 = *in_FS_OFFSET;
  uStack12 = DAT_0041a000 ^ 0x418f90;
  *in_FS_OFFSET = (int *)&piStack20;
  uStack8 = 0;
  bVar1 = is_potentially_valid_image_base(&IMAGE_DOS_HEADER_00400000);
  if (bVar1 == false) {
    uVar2 = (uint)extraout_var << 8;
  }
  else {
    p_Var3 = find_pe_section((unsigned_char *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
    if (p_Var3 == (_IMAGE_SECTION_HEADER *)0x0) {
      uVar2 = 0;
    }
    else {
      if ((*(uint *)(p_Var3 + 0x24) & 0x80000000) == 0) {
        uVar2 = (uint)p_Var3 & 0xffffff00 | 1;
      }
      else {
        uVar2 = (uint)p_Var3 & 0xffffff00;
      }
    }
  }
  *in_FS_OFFSET = piStack20;
  return uVar2;
}



void thunk_FUN_00412180(void)

{
  _set_app_type(1);
  return;
}



undefined thunk_FUN_00413970(void)

{
  return 1;
}



void __vcrt_GetModuleHandleW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cf2. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_GetModuleHandleW();
  return;
}



void FUN_00411710(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [48];
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_00411740(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [48];
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_00411770(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [48];
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined * FUN_004117a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [48];
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return &DAT_0041a138;
}



undefined8 __cdecl
FUN_004117e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  undefined4 local_c4 [47];
  undefined4 uStack8;
  
  puVar1 = local_c4;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_004117a0();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,param_3,param_4);
  uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  uStack8 = 0x41183c;
  uVar3 = __RTC_CheckEsp(extraout_ECX_00,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



undefined8 __cdecl FUN_00411860(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_dc [49];
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 uStack8;
  
  puVar2 = local_dc;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_00411710();
  local_18 = &param_3;
  uVar3 = thunk_FUN_004117e0(param_1,param_2,0,local_18);
  local_c = (undefined4)uVar3;
  local_18 = (undefined1 *)0x0;
  uStack8 = 0x4118bc;
  uVar3 = __RTC_CheckEsp(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



undefined8 FUN_004118e0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined in_stack_fffffee8;
  int *local_54;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_10;
  uint local_8;
  
  puVar3 = (undefined4 *)&stack0xfffffee8;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_3c = 0x61657242;
  local_38 = 0x6c6c416b;
  local_34 = 0x7b465443;
  local_30 = 0x5f353359;
  local_2c = 0x336d5f31;
  local_28 = 0x375f6e61;
  local_24 = 0x5f733168;
  local_20 = 0x7d336e30;
  local_1c = 0;
  fopen("./config/CGCTF{is_this_the_flag}.txt","w");
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  if ((int)uVar4 == 0) {
    puts("sorry, you dont know me :( ");
    __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  }
  else {
    puts("You did a great job, go to get your flag");
    __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
    local_54 = &local_3c;
    while (*local_54 != 0) {
      local_10 = *local_54;
      local_54 = local_54 + 1;
      thunk_FUN_00411860((int)uVar4,&DAT_00417b94,0xf0);
    }
  }
  system("PAUSE");
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  uVar2 = (undefined)((ulonglong)uVar4 >> 0x20);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411a24);
  thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,uVar2,in_stack_fffffee8);
  local_8 = 0x411a1d;
  uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
  return uVar4;
}



// Library Function - Single Match
//  @_RTC_AllocaHelper@12
// 
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __fastcall __RTC_AllocaHelper_12(undefined *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (iVar1 = param_2, puVar2 = param_1, param_3 != (undefined4 *)0x0)) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xcc;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 0xc) = param_2;
    *param_3 = param_1;
  }
  return;
}



// Library Function - Single Match
//  @_RTC_CheckStackVars2@12
// 
// Library: Visual Studio 2017 Debug

void __fastcall __RTC_CheckStackVars2_12(int param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *unaff_retaddr;
  
  if ((param_2 != (int *)0x0) && (iVar4 = 0, 0 < *param_2)) {
    iVar5 = 0;
    do {
      iVar2 = param_2[1];
      if ((*(int *)(*(int *)(iVar2 + iVar5) + param_1 + -4) != -0x33333334) ||
         (*(int *)(*(int *)(iVar2 + 4 + iVar5) + *(int *)(iVar2 + iVar5) + param_1) != -0x33333334))
      {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar2 + 8 + iVar5));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *param_2);
  }
  iVar4 = 0;
  piVar3 = param_3;
  if (param_3 != (int *)0x0) {
    do {
      ppiVar1 = (int **)(piVar3 + 1);
      iVar4 = iVar4 + 1;
      piVar3 = *ppiVar1;
    } while (*ppiVar1 != (int *)0x0);
    if (param_3 != (int *)0x0) {
      do {
        if ((((*param_3 != -0x33333334) || (param_3[5] != -0x33333334)) ||
            (param_3[6] != -0x33333334)) || (param_3[7] != -0x33333334)) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_3,iVar4);
        }
        if (*(int *)(param_3[3] + -4 + (int)param_3) != -0x33333334) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_3,iVar4);
        }
        param_3 = (int *)param_3[1];
        iVar4 = iVar4 + -1;
      } while (param_3 != (int *)0x0);
    }
  }
  return;
}



// Library Function - Single Match
//  @_RTC_CheckStackVars@8
// 
// Library: Visual Studio 2017 Debug

void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *unaff_retaddr;
  
  iVar2 = 0;
  if (0 < *param_2) {
    iVar3 = 0;
    do {
      iVar1 = param_2[1];
      if ((*(int *)(*(int *)(iVar1 + iVar3) + param_1 + -4) != -0x33333334) ||
         (*(int *)(*(int *)(iVar1 + 4 + iVar3) + *(int *)(iVar1 + iVar3) + param_1) != -0x33333334))
      {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar1 + 8 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *param_2);
  }
  return;
}



// Library Function - Single Match
//  __RTC_CheckEsp
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

undefined8 __fastcall __RTC_CheckEsp(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return CONCAT44(param_2,in_EAX);
  }
  _RTC_Failure(unaff_retaddr,0);
  return CONCAT44(param_2,in_EAX);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00411cd0(int param_1,undefined param_2,undefined param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  
  if (param_1 == DAT_0041a000) {
    return;
  }
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_0041a24c = uVar3;
  _DAT_0041a154 = uVar2;
  _DAT_0041a258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a25c = &param_3;
  _DAT_0041a198 = 0x10001;
  _DAT_0041a148 = 0xc0000409;
  _DAT_0041a14c = 1;
  _DAT_0041a158 = 1;
  DAT_0041a15c = 2;
  _DAT_0041a224 = in_GS;
  _DAT_0041a228 = in_FS;
  _DAT_0041a22c = in_ES;
  _DAT_0041a230 = in_DS;
  _DAT_0041a234 = unaff_EDI;
  _DAT_0041a238 = unaff_ESI;
  _DAT_0041a23c = unaff_EBX;
  _DAT_0041a244 = uVar5;
  DAT_0041a250 = _DAT_0041a154;
  _DAT_0041a254 = in_CS;
  _DAT_0041a260 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00418288);
  _DAT_0041a240 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_0041a248 = (undefined4)uVar11;
  return;
}



undefined4 FUN_00411d70(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  
  thunk_FUN_00412180();
  thunk_FUN_004121c0();
  thunk_FUN_004121a0();
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((uVar3 & 0xff) == 0) {
    ___scrt_fastfail(7);
  }
  thunk_FUN_00413de0();
  _atexit(&LAB_00411181);
  iVar4 = __scrt_narrow_argv_policy::configure_argv();
  if (iVar4 != 0) {
    ___scrt_fastfail(7);
  }
  thunk_FUN_00413930();
  bVar1 = ___scrt_is_user_matherr_present();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    __setusermatherr(&LAB_0041119f);
  }
  thunk_FUN_004139b0();
  thunk_FUN_004139c0();
  __initialize_default_precision();
  iVar4 = thunk_FUN_00413920();
  _configthreadlocale(iVar4);
  cVar2 = thunk_FUN_00413970();
  if (cVar2 != '\0') {
    __scrt_narrow_environment_policy::initialize_environment();
  }
  thunk_FUN_00413c60();
  return 0;
}



// Library Function - Single Match
//  int __cdecl post_pgo_initialization(void)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

int __cdecl post_pgo_initialization(void)

{
  ___scrt_initialize_default_local_stdio_options();
  return 0;
}



// Library Function - Single Match
//  void __cdecl pre_cpp_initialization(void)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl pre_cpp_initialization(void)

{
  undefined4 uVar1;
  
  thunk_FUN_00413d20();
  uVar1 = thunk_FUN_00413910();
  _set_new_mode(uVar1);
  return;
}



// Library Function - Single Match
//  int __cdecl __scrt_common_main(void)
// 
// Library: Visual Studio 2015 Debug

int __cdecl __scrt_common_main(void)

{
  int iVar1;
  
  ___security_init_cookie();
  iVar1 = __scrt_common_main_seh();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  int __cdecl __scrt_common_main_seh(void)
// 
// Library: Visual Studio 2015 Debug

int __cdecl __scrt_common_main_seh(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  int *piVar7;
  int **in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_0041a000 ^ 0x418f50;
  *in_FS_OFFSET = (int *)&local_14;
  uVar3 = ___scrt_initialize_crt(1);
  if ((uVar3 & 0xff) == 0) {
    ___scrt_fastfail(7);
  }
  bVar2 = false;
  local_8 = 0;
  iVar4 = ___scrt_acquire_startup_lock();
  if (_DAT_0041a510 == 1) {
    ___scrt_fastfail(7);
  }
  else {
    if (_DAT_0041a510 == 0) {
      _DAT_0041a510 = 1;
      iVar5 = _initterm_e(&DAT_0041730c,&DAT_00417618);
      if (iVar5 != 0) {
        iVar4 = 0xff;
        goto LAB_0041208b;
      }
      _initterm(&DAT_00417000,&DAT_00417208);
      _DAT_0041a510 = 2;
    }
    else {
      bVar2 = true;
    }
  }
  ___scrt_release_startup_lock((char)iVar4);
  ppcVar6 = (code **)FID_conflict____scrt_get_dyn_tls_dtor_callback();
  if (*ppcVar6 != (code *)0x0) {
    uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppcVar6);
    if ((uVar3 & 0xff) != 0) {
      uVar10 = 0;
      uVar9 = 2;
      uVar8 = 0;
      pcVar1 = *ppcVar6;
      thunk_FUN_00413e60();
      (*pcVar1)(uVar8,uVar9,uVar10);
    }
  }
  piVar7 = (int *)FID_conflict____scrt_get_dyn_tls_dtor_callback();
  if (*piVar7 != 0) {
    uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar7);
    if ((uVar3 & 0xff) != 0) {
      _register_thread_local_exe_atexit_callback(*piVar7);
    }
  }
  iVar4 = invoke_main();
  uVar3 = ___scrt_is_managed_app();
  if ((uVar3 & 0xff) == 0) {
                    // WARNING: Subroutine does not return
    exit(iVar4);
  }
  if (!bVar2) {
    _cexit();
  }
  ___scrt_uninitialize_crt(1,'\0');
LAB_0041208b:
  *in_FS_OFFSET = local_14;
  return iVar4;
}



// Library Function - Single Match
//  public: static int __cdecl __scrt_narrow_argv_policy::configure_argv(void)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

int __cdecl __scrt_narrow_argv_policy::configure_argv(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk_FUN_004138e0();
  iVar2 = _configure_narrow_argv(uVar1);
  return iVar2;
}



// Library Function - Single Match
//  public: static int __cdecl __scrt_narrow_environment_policy::initialize_environment(void)
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

int __cdecl __scrt_narrow_environment_policy::initialize_environment(void)

{
  int iVar1;
  
  iVar1 = _initialize_narrow_environment();
  return iVar1;
}



// Library Function - Single Match
//  int __cdecl invoke_main(void)
// 
// Library: Visual Studio 2015 Debug

int __cdecl invoke_main(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar1 = _get_initial_narrow_environment();
  puVar2 = (undefined4 *)__p___argv(uVar1);
  __p___argc(*puVar2);
  uVar3 = thunk_FUN_004118e0();
  return (int)uVar3;
}



void FUN_00412180(void)

{
  _set_app_type(1);
  return;
}



void FUN_004121a0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_004138f0();
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = uVar1;
  return;
}



void FUN_004121c0(void)

{
  int _Mode;
  
  _Mode = thunk_FUN_00413900();
  _set_fmode(_Mode);
  return;
}



void FUN_004121e0(void)

{
  __scrt_common_main();
  return;
}



// Library Function - Single Match
//  bool __cdecl DebuggerProbe(unsigned long)
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

bool __cdecl DebuggerProbe(unsigned_long param_1)

{
  undefined4 local_20;
  unsigned_long local_1c;
  char *local_18;
  char local_5;
  
  local_1c = param_1;
  local_18 = &local_5;
  local_5 = '\0';
  local_20 = 0x1001;
  notify_debugger((tagEXCEPTION_VISUALCPP_DEBUG_INFO *)&local_20);
  return local_5 != '\0';
}



// Library Function - Single Match
//  bool __cdecl DebuggerRuntime(unsigned long,int,void *,wchar_t const *)
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

bool __cdecl DebuggerRuntime(unsigned_long param_1,int param_2,void *param_3,wchar_t *param_4)

{
  undefined4 local_20;
  unsigned_long local_1c;
  int local_18;
  void *local_14;
  char *local_10;
  wchar_t *local_c;
  char local_5;
  
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = &local_5;
  local_c = param_4;
  local_5 = '\0';
  local_20 = 0x1002;
  notify_debugger((tagEXCEPTION_VISUALCPP_DEBUG_INFO *)&local_20);
  return local_5 != '\0';
}



// Library Function - Single Match
//  void __cdecl _RTC_AllocaFailure(void *,struct _RTC_ALLOCA_NODE *,int)
// 
// Library: Visual Studio 2017 Debug

void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  undefined in_DL;
  undefined extraout_DL;
  undefined extraout_DL_00;
  char local_144 [244];
  char local_50 [52];
  byte local_1c [20];
  uint local_8;
  
  iVar1 = DAT_0041a01c;
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a01c != -1) {
    if (param_2 == (_RTC_ALLOCA_NODE *)0x0) {
      FUN_004125c0(param_1,DAT_0041a01c,4,
                   "Stack area around _alloca memory reserved by this function is corrupted\n");
      thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,extraout_DL,(char)param_1);
      return;
    }
    FUN_00412510(local_1c,local_50,(int)(param_2 + 0x20),*(int *)(param_2 + 0xc) - 0x24);
    _sprintf_s(local_144,0xf4,"%s%s%p%s%zd%s%d%s%s%s%s%s",
               "Stack area around _alloca memory reserved by this function is corrupted",
               "\nAddress: 0x",param_2 + 0x20,"\nSize: ",*(int *)(param_2 + 0xc) + -0x24,
               "\nAllocation number within this function: ",param_3,"\nData: <",local_1c,
               &DAT_0041816c,local_50,&DAT_00418168);
    FUN_004125c0(param_1,iVar1,4,local_144);
    in_DL = extraout_DL_00;
  }
  thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,in_DL,(char)param_1);
  return;
}



// Library Function - Single Match
//  void __cdecl _RTC_Failure(void *,int)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (*(int *)(&DAT_0041a00c + param_2 * 4) != -1) {
      FUN_004125c0(param_1,*(int *)(&DAT_0041a00c + param_2 * 4),param_2,
                   (&PTR_s_The_value_of_ESP_was_not_properl_00417bc8)[param_2]);
      return;
    }
  }
  else {
    FUN_004125c0(param_1,1,5,"Unknown Runtime Check Error\n\r");
  }
  return;
}



// Library Function - Single Match
//  void __cdecl _RTC_StackFailure(void *,char const *)
// 
// Library: Visual Studio 2017 Debug

void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  unsigned_int uVar3;
  char *pcVar4;
  undefined in_DL;
  undefined extraout_DL;
  char in_stack_fffffbf8;
  
  iVar1 = DAT_0041a014;
  uVar2 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a014 == -1) goto LAB_004124ca;
  if (*param_2 == '\0') {
LAB_004124b8:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    uVar3 = _strlen_priv(param_2);
    if (0x400 < uVar3 + 0x2d) goto LAB_004124b8;
    strcpy_s(&stack0xfffffbf8,0x400,"Stack around the variable \'");
    strcat_s(&stack0xfffffbf8,0x400,param_2);
    strcat_s(&stack0xfffffbf8,0x400,"\' was corrupted.");
    pcVar4 = &stack0xfffffbf8;
  }
  FUN_004125c0(param_1,iVar1,2,pcVar4);
  in_DL = extraout_DL;
LAB_004124ca:
  thunk_FUN_00411cd0(uVar2 ^ (uint)&stack0xfffffffc,in_DL,in_stack_fffffbf8);
  return;
}



void __cdecl FUN_00412510(byte *param_1,char *param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  size_t _SizeInBytes;
  int iVar4;
  
  uVar3 = 0;
  _SizeInBytes = 0x31;
  iVar4 = param_3 - (int)param_1;
  while( true ) {
    uVar2 = param_4;
    if (0xf < param_4) {
      uVar2 = 0x10;
    }
    if (uVar2 <= uVar3) break;
    bVar1 = param_1[iVar4];
    _sprintf_s(param_2,_SizeInBytes,"%.2X ",(uint)bVar1);
    uVar3 = uVar3 + 1;
    *param_1 = bVar1;
    param_2 = param_2 + 3;
    param_1 = param_1 + 1;
    _SizeInBytes = _SizeInBytes - 3;
  }
  *param_1 = 0;
  *param_2 = '\0';
  return;
}



// Library Function - Single Match
//  unsigned int __cdecl _strlen_priv(char const *)
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

unsigned_int __cdecl _strlen_priv(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (unsigned_int)(pcVar2 + (-1 - (int)param_1));
}



void __cdecl FUN_004125c0(void *param_1,undefined4 param_2,unsigned_long param_3,LPCSTR param_4)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint cchWideChar;
  int iVar4;
  BOOL BVar5;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined uVar6;
  wchar_t *pwVar7;
  char *pcVar8;
  char *pcVar9;
  WCHAR *pWVar10;
  WCHAR *pWVar11;
  wchar_t *pwVar12;
  char *pcVar13;
  unsigned_long uVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  uint local_e3c;
  code *local_e38;
  unsigned_long local_e34;
  WCHAR local_e30 [512];
  CHAR local_a30 [780];
  CHAR local_724 [780];
  WCHAR local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  local_e34 = param_3;
  local_e38 = (code *)0x0;
  pCVar16 = param_4;
  pcVar3 = (code *)thunk_FUN_00412e60();
  if (pcVar3 == (code *)0x0) {
    local_e38 = (code *)thunk_FUN_00412e50();
  }
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_4,-1,(LPWSTR)0x0,0);
  if (cchWideChar < 0x200) {
    iVar4 = MultiByteToWideChar(0xfde9,0,param_4,-1,local_e30,cchWideChar);
    pwVar7 = local_e30;
    if (iVar4 == 0) goto LAB_00412650;
  }
  else {
LAB_00412650:
    pwVar7 = L"Runtime Check Error.\n\r Unable to display RTC Message.";
  }
  bVar1 = DebuggerProbe(0x1002);
  if (bVar1 == false) {
    cVar2 = '\x01';
    pCVar15 = pCVar16;
  }
  else {
    cVar2 = DebuggerRuntime(local_e34,*(int *)(&DAT_00417be0 + local_e34 * 4),param_1,
                            (wchar_t *)pwVar7);
    uVar6 = extraout_DL;
    pCVar15 = pCVar16;
    if ((bool)cVar2 != false) goto LAB_004127ab;
  }
  if (((local_e38 != (code *)0x0) || (pcVar3 != (code *)0x0)) &&
     ((cVar2 == '\0' || (BVar5 = IsDebuggerPresent(), BVar5 == 0)))) {
    thunk_FUN_00414470((int)param_1 + -5,local_210,0x104,&local_e3c,local_418,0x104);
    if (pcVar3 == (code *)0x0) {
      pcVar8 = "Unknown Filename";
      iVar4 = WideCharToMultiByte(0xfde9,0,local_210,-1,local_724,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar4 != 0) {
        pcVar8 = local_724;
      }
      pcVar9 = "Unknown Module Name";
      iVar4 = WideCharToMultiByte(0xfde9,0,local_418,-1,local_a30,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar3 = local_e38;
      if (iVar4 != 0) {
        pcVar9 = local_a30;
      }
      pcVar13 = "Run-Time Check Failure #%d - %s";
      uVar14 = local_e34;
      pCVar16 = pCVar15;
      thunk_FUN_00413e60();
      iVar4 = (*pcVar3)(param_2,pcVar8,local_e3c,pcVar9,pcVar13,uVar14,pCVar15);
      uVar6 = extraout_DL_01;
    }
    else {
      pWVar11 = local_418;
      pwVar12 = L"Run-Time Check Failure #%d - %s";
      pWVar10 = local_210;
      uVar14 = local_e34;
      thunk_FUN_00413e60();
      iVar4 = (*pcVar3)(param_2,pWVar10,local_e3c,pWVar11,pwVar12,uVar14,pwVar7);
      uVar6 = extraout_DL_00;
      pCVar16 = pCVar15;
    }
    if (iVar4 != 1) {
LAB_004127ab:
      thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,uVar6,(char)pCVar16);
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// Library Function - Single Match
//  void __cdecl notify_debugger(struct tagEXCEPTION_VISUALCPP_DEBUG_INFO const &)
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl notify_debugger(tagEXCEPTION_VISUALCPP_DEBUG_INFO *param_1)

{
  int **in_FS_OFFSET;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_0041a000 ^ 0x418f70;
  *in_FS_OFFSET = (int *)&local_14;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,(ULONG_PTR *)param_1);
  *in_FS_OFFSET = local_14;
  return;
}



// Library Function - Single Match
//  __RTC_UninitUse
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl __RTC_UninitUse(char *param_1)

{
  int iVar1;
  uint uVar2;
  unsigned_int uVar3;
  char *pcVar4;
  undefined in_DL;
  undefined extraout_DL;
  void *unaff_retaddr;
  char in_stack_fffffbf8;
  
  iVar1 = DAT_0041a018;
  uVar2 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a018 == -1) goto LAB_00412978;
  if (param_1 == (char *)0x0) {
LAB_00412963:
    pcVar4 = "A variable is being used without being initialized.";
  }
  else {
    uVar3 = _strlen_priv(param_1);
    if (0x400 < uVar3 + 0x3a) goto LAB_00412963;
    strcpy_s(&stack0xfffffbf8,0x400,"The variable \'");
    strcat_s(&stack0xfffffbf8,0x400,param_1);
    strcat_s(&stack0xfffffbf8,0x400,"\' is being used without being initialized.");
    pcVar4 = &stack0xfffffbf8;
  }
  FUN_004125c0(unaff_retaddr,iVar1,3,pcVar4);
  in_DL = extraout_DL;
LAB_00412978:
  thunk_FUN_00411cd0(uVar2 ^ (uint)&stack0xfffffffc,in_DL,in_stack_fffffbf8);
  return;
}



// Library Function - Single Match
//  __vsprintf_s_l
// 
// Library: Visual Studio 2015 Debug

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_004117a0();
  iVar2 = __stdio_common_vsprintf_s(*puVar1,puVar1[1],_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



// Library Function - Single Match
//  _sprintf_s
// 
// Library: Visual Studio 2015 Debug

int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
  thunk_FUN_00411710();
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}



// Library Function - Single Match
//  ___raise_securityfailure
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// Library Function - Single Match
//  ___report_rangecheckfailure
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_securityfailure
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_0041a24c = uVar3;
  _DAT_0041a154 = uVar2;
  _DAT_0041a258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a25c = &param_1;
  _DAT_0041a148 = 0xc0000409;
  _DAT_0041a14c = 1;
  _DAT_0041a158 = 1;
  DAT_0041a15c = param_1;
  _DAT_0041a224 = in_GS;
  _DAT_0041a228 = in_FS;
  _DAT_0041a22c = in_ES;
  _DAT_0041a230 = in_DS;
  _DAT_0041a234 = unaff_EDI;
  _DAT_0041a238 = unaff_ESI;
  _DAT_0041a23c = unaff_EBX;
  _DAT_0041a244 = uVar5;
  DAT_0041a250 = _DAT_0041a154;
  _DAT_0041a254 = in_CS;
  _DAT_0041a260 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00418288);
  _DAT_0041a240 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_0041a248 = (undefined4)uVar11;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_securityfailureEx
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl ___report_securityfailureEx(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  uint local_8;
  
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_0041a24c = uVar3;
  _DAT_0041a154 = uVar2;
  _DAT_0041a258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a25c = &param_1;
  _DAT_0041a148 = 0xc0000409;
  _DAT_0041a14c = 1;
  if ((param_2 != 0) && (param_3 == 0)) {
    param_2 = 0;
  }
  if (0xe < param_2) {
    param_2 = param_2 - 1;
  }
  _DAT_0041a158 = param_2 + 1;
  DAT_0041a15c = param_1;
  _DAT_0041a224 = in_GS;
  _DAT_0041a228 = in_FS;
  _DAT_0041a22c = in_ES;
  _DAT_0041a230 = in_DS;
  _DAT_0041a234 = unaff_EDI;
  _DAT_0041a238 = unaff_ESI;
  _DAT_0041a23c = unaff_EBX;
  _DAT_0041a244 = uVar5;
  DAT_0041a250 = _DAT_0041a154;
  _DAT_0041a254 = in_CS;
  _DAT_0041a260 = in_SS;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    *(undefined4 *)(&DAT_0041a160 + local_8 * 4) = *(undefined4 *)(param_3 + local_8 * 4);
  }
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00418288);
  _DAT_0041a240 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_0041a248 = (undefined4)uVar11;
  return;
}



undefined4 FUN_00412e50(void)

{
  return DAT_0041a504;
}



undefined4 FUN_00412e60(void)

{
  return DAT_0041a508;
}



undefined * __cdecl FUN_00412e70(uint param_1)

{
  if (param_1 < 5) {
    return (&PTR_s_Stack_pointer_corruption_00418294)[param_1];
  }
  return (undefined *)0x0;
}



undefined4 __cdecl FUN_00412ea0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041a504;
  DAT_0041a504 = param_1;
  DAT_0041a508 = 0;
  return uVar1;
}



undefined4 __cdecl FUN_00412ed0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041a508;
  DAT_0041a504 = 0;
  DAT_0041a508 = param_1;
  return uVar1;
}



// Library Function - Single Match
//  __RTC_SetErrorType
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

undefined4 __cdecl __RTC_SetErrorType(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 5) {
    uVar1 = *(undefined4 *)(&DAT_0041a00c + param_1 * 4);
    *(undefined4 *)(&DAT_0041a00c + param_1 * 4) = param_2;
    return uVar1;
  }
  return 0xffffffff;
}



// Library Function - Single Match
//  void (__cdecl** __cdecl __crt_fast_decode_pointer<void (__cdecl**)(void)>(void (__cdecl**
// const)(void)))(void)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

void____cdecl____void_ * __cdecl
__crt_fast_decode_pointer_void____cdecl____void__(void____cdecl___const__void_ *param_1)

{
  void____cdecl____void_ *pvVar1;
  
  pvVar1 = (void____cdecl____void_ *)
           __crt_rotate_pointer_value((uint)param_1 ^ DAT_0041a000,DAT_0041a000 % 0x20);
  return pvVar1;
}



// Library Function - Single Match
//  void (__cdecl** __cdecl __crt_fast_encode_pointer<void (__cdecl**)(void)>(void (__cdecl**
// const)(void)))(void)
// 
// Library: Visual Studio 2017 Debug

void____cdecl____void_ * __cdecl
__crt_fast_encode_pointer_void____cdecl____void__(void____cdecl___const__void_ *param_1)

{
  unsigned_int uVar1;
  
  uVar1 = __crt_rotate_pointer_value((unsigned_int)param_1,0x20 - DAT_0041a000 % 0x20);
  return (void____cdecl____void_ *)(uVar1 ^ DAT_0041a000);
}



// Library Function - Single Match
//  unsigned int __cdecl __crt_rotate_pointer_value(unsigned int,int)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual
// Studio 2019 Debug

unsigned_int __cdecl __crt_rotate_pointer_value(unsigned_int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x1f;
  return param_1 >> bVar1 | param_1 << 0x20 - bVar1;
}



// Library Function - Single Match
//  struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned_char *param_1,unsigned_int param_2)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  unsigned_char *puVar2;
  _IMAGE_SECTION_HEADER *local_8;
  
  puVar2 = param_1 + *(int *)(param_1 + 0x3c);
  local_8 = (_IMAGE_SECTION_HEADER *)(puVar2 + *(ushort *)(puVar2 + 0x14) + 0x18);
  p_Var1 = local_8 + (uint)*(ushort *)(puVar2 + 6) * 0x28;
  while( true ) {
    if (local_8 == p_Var1) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(local_8 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(local_8 + 0xc) + *(int *)(local_8 + 8)))) break;
    local_8 = local_8 + 0x28;
  }
  return local_8;
}



// Library Function - Single Match
//  bool __cdecl is_potentially_valid_image_base(void * const)
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

bool __cdecl is_potentially_valid_image_base(void *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (param_1 == (void *)0x0) {
    bVar1 = false;
  }
  else {
                    // WARNING: Load size is inaccurate
    if (*param_1 == 0x5a4d) {
      piVar2 = (int *)((int)param_1 + *(int *)((int)param_1 + 0x3c));
      if (*piVar2 == 0x4550) {
        if (*(short *)(piVar2 + 6) == 0x10b) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Library Function - Single Match
//  _NtCurrentTeb
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

_TEB * _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
}



// Library Function - Single Match
//  ___scrt_acquire_startup_lock
// 
// Library: Visual Studio 2015 Debug

int ___scrt_acquire_startup_lock(void)

{
  int iVar1;
  bool bVar2;
  uint3 extraout_var;
  int iVar3;
  _TEB *p_Var4;
  int iVar5;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) == 0) {
    iVar3 = (uint)extraout_var << 8;
  }
  else {
    p_Var4 = _NtCurrentTeb();
    iVar3 = *(int *)(p_Var4 + 4);
    do {
      iVar5 = 0;
      LOCK();
      iVar1 = iVar3;
      if (DAT_0041a514 != 0) {
        iVar5 = DAT_0041a514;
        iVar1 = DAT_0041a514;
      }
      DAT_0041a514 = iVar1;
      if (iVar5 == 0) {
        return 0;
      }
    } while (iVar3 != iVar5);
    iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return iVar3;
}



// Library Function - Single Match
//  ___scrt_dllmain_after_initialize_c
// 
// Library: Visual Studio 2017 Debug

uint ___scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar3 = __scrt_narrow_argv_policy::configure_argv();
    if (uVar3 != 0) {
      return uVar3 & 0xffffff00;
    }
    iVar2 = __scrt_narrow_environment_policy::initialize_environment();
  }
  else {
    iVar2 = ___isa_available_init();
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Library Function - Single Match
//  ___scrt_dllmain_before_initialize_c
// 
// Library: Visual Studio 2017 Debug

bool ___scrt_dllmain_before_initialize_c(void)

{
  uint uVar1;
  
  uVar1 = ___scrt_initialize_onexit_tables(0);
  return (uVar1 & 0xff) != 0;
}



// Library Function - Single Match
//  ___scrt_dllmain_crt_thread_attach
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

uint ___scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = thunk_FUN_00414e90();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_00414e90();
    if ((uVar2 & 0xff) == 0) {
      uVar2 = thunk_FUN_00414ea0();
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}



undefined FUN_00413210(void)

{
  thunk_FUN_00414ea0();
  thunk_FUN_00414ea0();
  return 1;
}



// Library Function - Single Match
//  ___scrt_dllmain_exception_filter
// 
// Library: Visual Studio 2015 Debug

void __cdecl
___scrt_dllmain_exception_filter
          (undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    uVar2 = 0;
    thunk_FUN_00413e60();
    (*(code *)param_4)(param_1,uVar2,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// Library Function - Single Match
//  ___scrt_dllmain_uninitialize_c
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void ___scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = thunk_FUN_00414ed0();
    if (iVar2 == 0) {
      _cexit();
    }
  }
  else {
    _execute_onexit_table(&DAT_0041a518);
  }
  return;
}



void FUN_004132d0(void)

{
  thunk_FUN_00414ec0();
  thunk_FUN_00414ec0();
  return;
}



// Library Function - Single Match
//  ___scrt_initialize_crt
// 
// Library: Visual Studio 2015 Debug

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    DAT_0041a531 = 1;
  }
  ___isa_available_init();
  cVar1 = thunk_FUN_00414e80();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_00414e80();
    if ((uVar2 & 0xff) == 0) {
      uVar2 = thunk_FUN_00414eb0();
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2017 Debug

uint __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  void____cdecl____void_ *pvVar3;
  
  if (DAT_0041a530 != '\0') {
    return 1;
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    ___scrt_fastfail(5);
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) == 0) || (param_1 != 0)) {
    pvVar3 = __crt_fast_encode_pointer_void____cdecl____void__
                       ((void____cdecl___const__void_ *)0xffffffff);
    DAT_0041a518 = pvVar3;
    _DAT_0041a51c = pvVar3;
    _DAT_0041a520 = pvVar3;
    DAT_0041a524 = pvVar3;
    _DAT_0041a528 = pvVar3;
    _DAT_0041a52c = pvVar3;
  }
  else {
    uVar2 = _initialize_onexit_table(&DAT_0041a518);
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
    pvVar3 = (void____cdecl____void_ *)_initialize_onexit_table(&DAT_0041a524);
    if (pvVar3 != (void____cdecl____void_ *)0x0) {
      return (uint)pvVar3 & 0xffffff00;
    }
  }
  DAT_0041a530 = 1;
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}



// Library Function - Single Match
//  ___scrt_is_nonwritable_in_current_image
// 
// Library: Visual Studio 2015 Debug

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  uint uVar2;
  _IMAGE_SECTION_HEADER *p_Var3;
  int **in_FS_OFFSET;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_0041a000 ^ 0x418f90;
  *in_FS_OFFSET = (int *)&local_14;
  local_8 = 0;
  bVar1 = is_potentially_valid_image_base(&IMAGE_DOS_HEADER_00400000);
  if (bVar1 == false) {
    uVar2 = (uint)extraout_var << 8;
  }
  else {
    p_Var3 = find_pe_section((unsigned_char *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
    if (p_Var3 == (_IMAGE_SECTION_HEADER *)0x0) {
      uVar2 = 0;
    }
    else {
      if ((*(uint *)(p_Var3 + 0x24) & 0x80000000) == 0) {
        uVar2 = (uint)p_Var3 & 0xffffff00 | 1;
      }
      else {
        uVar2 = (uint)p_Var3 & 0xffffff00;
      }
    }
  }
  *in_FS_OFFSET = local_14;
  return uVar2;
}



// Library Function - Single Match
//  ___scrt_release_startup_lock
// 
// Library: Visual Studio 2015 Debug

void __cdecl ___scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    DAT_0041a514 = 0;
  }
  return;
}



// Library Function - Single Match
//  ___scrt_uninitialize_crt
// 
// Library: Visual Studio 2015 Debug

undefined4 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((DAT_0041a531 == '\0') || (param_2 == '\0')) {
    thunk_FUN_00414eb0();
    uVar1 = thunk_FUN_00414eb0();
    uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Library Function - Single Match
//  __onexit
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  void____cdecl____void_ *pvVar1;
  int iVar2;
  _onexit_t local_c;
  _onexit_t local_8;
  
  pvVar1 = __crt_fast_decode_pointer_void____cdecl____void__(DAT_0041a518);
  local_c = _Func;
  if (pvVar1 == (void____cdecl____void_ *)0xffffffff) {
    iVar2 = _crt_atexit(_Func);
    if (iVar2 != 0) {
      local_8 = (_onexit_t)0x0;
      local_c = local_8;
    }
  }
  else {
    iVar2 = _register_onexit_function(&DAT_0041a518,_Func);
    if (iVar2 != 0) {
      local_c = (_onexit_t)0x0;
    }
  }
  return local_c;
}



// Library Function - Single Match
//  _at_quick_exit
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

void __cdecl _at_quick_exit(undefined4 param_1)

{
  void____cdecl____void_ *pvVar1;
  
  pvVar1 = __crt_fast_decode_pointer_void____cdecl____void__(DAT_0041a524);
  if (pvVar1 == (void____cdecl____void_ *)0xffffffff) {
    _crt_at_quick_exit(param_1);
  }
  else {
    _register_onexit_function(&DAT_0041a524,param_1);
  }
  return;
}



// Library Function - Single Match
//  _atexit
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  int local_8;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  if (p_Var1 == (_onexit_t)0x0) {
    local_8 = -1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



// Library Function - Single Match
//  ___get_entropy
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

uint ___get_entropy(void)

{
  DWORD DVar1;
  uint local_18;
  uint local_14;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime((LPFILETIME)&local_10);
  local_8 = local_10.dwLowDateTime ^ local_10.dwHighDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = DVar1 ^ local_8;
  DVar1 = GetCurrentProcessId();
  local_8 = DVar1 ^ local_8;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_18);
  return local_8 ^ local_18 ^ local_14 ^ (uint)&local_8;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl ___security_init_cookie(void)

{
  uint local_8;
  
  if ((DAT_0041a000 == 0xbb40e64e) || ((DAT_0041a000 & 0xffff0000) == 0)) {
    local_8 = ___get_entropy();
    if (local_8 == 0xbb40e64e) {
      local_8 = 0xbb40e64f;
    }
    else {
      if ((local_8 & 0xffff0000) == 0) {
        local_8 = (local_8 | 0x4711) << 0x10 | local_8;
      }
    }
    DAT_0041a000 = local_8;
    DAT_0041a004 = ~local_8;
  }
  else {
    DAT_0041a004 = ~DAT_0041a000;
  }
  return;
}



undefined4 FUN_004138d0(void)

{
  return 0;
}



undefined4 FUN_004138e0(void)

{
  return 1;
}



undefined4 FUN_004138f0(void)

{
  return 0;
}



undefined4 FUN_00413900(void)

{
  return 0x4000;
}



undefined4 FUN_00413910(void)

{
  return 0;
}



undefined4 FUN_00413920(void)

{
  return 0;
}



void FUN_00413930(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041a538);
  return;
}



void FUN_00413950(void)

{
  __std_type_info_destroy_list(&DAT_0041a538);
  return;
}



undefined FUN_00413970(void)

{
  return 1;
}



// Library Function - Single Match
//  __initialize_default_precision
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __initialize_default_precision(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
    ___scrt_fastfail(7);
  }
  return;
}



void FUN_004139b0(void)

{
  return;
}



void FUN_004139c0(void)

{
  return;
}



// Library Function - Single Match
//  ___local_stdio_scanf_options
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

undefined * ___local_stdio_scanf_options(void)

{
  return &DAT_0041a548;
}



// Library Function - Single Match
//  ___scrt_initialize_default_local_stdio_options
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

void ___scrt_initialize_default_local_stdio_options(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)thunk_FUN_004117a0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)___local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_is_user_matherr_present
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

bool ___scrt_is_user_matherr_present(void)

{
  return _DAT_0041a028 == 0;
}



// Library Function - Multiple Matches With Different Base Names
//  ___scrt_get_dyn_tls_dtor_callback
//  ___scrt_get_dyn_tls_init_callback
// 
// Library: Visual Studio 2015 Debug

undefined * FID_conflict____scrt_get_dyn_tls_dtor_callback(void)

{
  return &DAT_0041a578;
}



// Library Function - Multiple Matches With Different Base Names
//  ___scrt_get_dyn_tls_dtor_callback
//  ___scrt_get_dyn_tls_init_callback
// 
// Library: Visual Studio 2015 Debug

undefined * FID_conflict____scrt_get_dyn_tls_dtor_callback(void)

{
  return &DAT_0041a56c;
}



// Library Function - Single Match
//  ___scrt_fastfail
// 
// Library: Visual Studio 2015 Debug

void ___scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined4 local_330 [39];
  EXCEPTION_RECORD local_64;
  _EXCEPTION_POINTERS local_14;
  LONG local_c;
  char local_6;
  undefined local_5;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  __crt_debugger_hook(3);
  memset(local_330,0,0x2cc);
  local_330[0] = 0x10001;
  memset(&local_64,0,0x50);
  local_64.ExceptionCode = 0x40000015;
  local_64.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_6 = BVar2 == 1;
  local_14.ExceptionRecord = &local_64;
  local_14.ContextRecord = (PCONTEXT)local_330;
  local_5 = local_6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  local_c = UnhandledExceptionFilter(&local_14);
  if ((local_c == 0) && (local_6 == '\0')) {
    __crt_debugger_hook(3);
  }
  return;
}



// Library Function - Single Match
//  ___scrt_get_show_window_mode
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

uint ___scrt_get_show_window_mode(void)

{
  uint extraout_EAX;
  uint uVar1;
  _STARTUPINFOW local_4c;
  uint local_8;
  
  memset(&local_4c,0,0x44);
  GetStartupInfoW((LPSTARTUPINFOW)&local_4c);
  if ((local_4c.dwFlags & 1) == 0) {
    local_8 = 10;
    uVar1 = extraout_EAX;
  }
  else {
    uVar1 = (uint)local_4c.wShowWindow;
    local_8 = uVar1;
  }
  return uVar1 & 0xffff0000 | local_8;
}



undefined4 FUN_00413c60(void)

{
  return 0;
}



// Library Function - Single Match
//  ___scrt_is_managed_app
// 
// Library: Visual Studio 2015 Debug

uint ___scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  uint uVar2;
  int *piVar3;
  uint3 uVar4;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if (pHVar1 == (HMODULE)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(short *)&pHVar1->unused == 0x5a4d) {
      piVar3 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused);
      if (*piVar3 == 0x4550) {
        uVar4 = (uint3)(byte)((ushort)*(short *)(piVar3 + 6) >> 8);
        if (*(short *)(piVar3 + 6) == 0x10b) {
          if ((uint)piVar3[0x1d] < 0xf) {
            uVar2 = (uint)uVar4 << 8;
          }
          else {
            if (piVar3[0x3a] == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
          }
        }
        else {
          uVar2 = (uint)uVar4 << 8;
        }
      }
      else {
        uVar2 = (uint)piVar3 & 0xffffff00;
      }
    }
    else {
      uVar2 = (uint)pHVar1 & 0xffffff00;
    }
  }
  return uVar2;
}



void FUN_00413d20(void)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_0041114a);
  return;
}



// Library Function - Single Match
//  ___scrt_unhandled_exception_filter@4
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

undefined4 ___scrt_unhandled_exception_filter_4(int **param_1)

{
  int *piVar1;
  
  piVar1 = *param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 ||
      (((piVar1[5] == 0x19930521 || (piVar1[5] == 0x19930522)) || (piVar1[5] == 0x1994000)))))) {
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __crt_debugger_hook
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl __crt_debugger_hook(int param_1)

{
  _DAT_0041a554 = 0;
  return;
}



void FUN_00413de0(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)&DAT_00418938;
  do {
    pcVar1 = *ppcVar2;
    if (pcVar1 != (code *)0x0) {
      thunk_FUN_00413e60();
      (*pcVar1)();
    }
    ppcVar2 = ppcVar2 + 1;
  } while (ppcVar2 < &DAT_00418b3c);
  return;
}



void FUN_00413e60(void)

{
  _guard_check_icall();
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio

void __cdecl
__except_handler4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_0041a000,thunk_FUN_00411cd0,param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  struct HINSTANCE__ * __cdecl GetPdbDll(void)
// 
// Library: Visual Studio 2015 Debug

HINSTANCE__ * __cdecl GetPdbDll(void)

{
  HINSTANCE__ *pHVar1;
  int iVar2;
  DWORD DVar3;
  undefined in_DL;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  undefined extraout_DL_05;
  undefined extraout_DL_06;
  wchar_t in_stack_fffffbe8;
  wchar_t local_210 [520];
  uint local_8;
  
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  if (DAT_0041a55c == '\0') {
    DAT_0041a55c = '\x01';
    pHVar1 = GetPdbDllFromInstallPath();
    in_DL = extraout_DL;
    if ((pHVar1 == (HINSTANCE__ *)0x0) &&
       (((((iVar2 = __vcrt_GetModuleHandleW(L"VCRUNTIME140D.dll"), iVar2 == 0 ||
           (iVar2 = __vcrt_GetModuleFileNameW(iVar2,&stack0xfffffbe8,0x104), iVar2 == 0)) ||
          (iVar2 = GetPdbDllPathFromFilePath((wchar_t *)&stack0xfffffbe8,local_210,0x104),
          iVar2 == 0)) ||
         ((iVar2 = __vcrt_LoadLibraryExW(local_210,0,0x900), in_DL = extraout_DL_00, iVar2 == 0 &&
          ((DVar3 = GetLastError(), DVar3 != 0x57 ||
           (iVar2 = __vcrt_LoadLibraryExW(local_210,0,8), in_DL = extraout_DL_01, iVar2 == 0))))))
        && ((iVar2 = __vcrt_LoadLibraryExW(L"MSPDB140",0,0xa00), in_DL = extraout_DL_02, iVar2 == 0
            && (((DVar3 = GetLastError(), in_DL = extraout_DL_03, DVar3 == 0x57 &&
                 (iVar2 = __vcrt_GetModuleFileNameW(0,&stack0xfffffbe8,0x104),
                 in_DL = extraout_DL_04, iVar2 != 0)) &&
                (iVar2 = GetPdbDllPathFromFilePath((wchar_t *)&stack0xfffffbe8,local_210,0x104),
                in_DL = extraout_DL_05, iVar2 != 0)))))))) {
      __vcrt_LoadLibraryExW(local_210,0,8);
      in_DL = extraout_DL_06;
    }
  }
  pHVar1 = (HINSTANCE__ *)
           thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,in_DL,in_stack_fffffbe8);
  return pHVar1;
}



// Library Function - Single Match
//  struct HINSTANCE__ * __cdecl GetPdbDllFromInstallPath(void)
// 
// Library: Visual Studio 2015 Debug

HINSTANCE__ * __cdecl GetPdbDllFromInstallPath(void)

{
  HMODULE hModule;
  DWORD DVar1;
  HINSTANCE__ *pHVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined uVar9;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  undefined4 uVar10;
  wchar_t *pwVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined uVar17;
  int in_stack_fffffde0;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210 [8];
  undefined2 auStack496 [244];
  uint local_8;
  
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  hModule = (HMODULE)__vcrt_LoadLibraryExW(L"api-ms-win-core-registry-l1-1-0.dll",0,0x800);
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__vcrt_LoadLibraryExW(L"advapi32.dll",0,0x800);
    if (hModule == (HMODULE)0x0) {
      DVar1 = GetLastError();
      uVar9 = extraout_DL;
      if (DVar1 == 0x57) {
        hModule = (HMODULE)__vcrt_LoadLibraryExW(L"advapi32.dll",0,0);
        uVar9 = extraout_DL_00;
        if (hModule != (HMODULE)0x0) goto LAB_004140b8;
      }
      pHVar2 = (HINSTANCE__ *)
               thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,uVar9,(char)in_stack_fffffde0);
      return pHVar2;
    }
  }
LAB_004140b8:
  pFVar3 = GetProcAddress(hModule,"RegOpenKeyExW");
  if (pFVar3 == (FARPROC)0x0) {
    pHVar2 = (HINSTANCE__ *)
             thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,extraout_DL_01,
                                (char)in_stack_fffffde0);
    return pHVar2;
  }
  pFVar4 = GetProcAddress(hModule,"RegQueryValueExW");
  uVar7 = extraout_EDX;
  if (pFVar4 != (FARPROC)0x0) {
    pFVar5 = GetProcAddress(hModule,"RegCloseKey");
    uVar7 = extraout_EDX_00;
    if (pFVar5 != (FARPROC)0x0) {
      puVar15 = &local_214;
      uVar14 = 1;
      uVar12 = 0;
      pwVar11 = L"SOFTWARE\\Wow6432Node\\Microsoft\\VisualStudio\\14.0\\Setup\\VC";
      uVar10 = 0x80000002;
      thunk_FUN_00413e60();
      iVar6 = (*pFVar3)(uVar10,pwVar11,uVar12,uVar14,puVar15);
      if (iVar6 == 0) {
        puVar16 = &local_218;
        local_218 = 0x208;
        puVar15 = local_210;
        puVar13 = &stack0xfffffde0;
        uVar12 = 0;
        pwVar11 = L"ProductDir";
        uVar10 = local_214;
        thunk_FUN_00413e60();
        iVar6 = (*pFVar4)(uVar10,pwVar11,uVar12,puVar13,puVar15,puVar16);
        thunk_FUN_00413e60();
        (*pFVar5)(local_214);
        FreeLibrary(hModule);
        uVar7 = extraout_EDX_02;
        if ((((iVar6 == 0) && (in_stack_fffffde0 == 1)) && ((local_218 & 1) == 0)) &&
           (uVar7 = local_218 >> 1, 1 < uVar7)) {
          uVar8 = uVar7 - 1;
          if (*(short *)((int)local_210 + uVar8 * 2) == 0) {
            if (*(short *)((int)local_210 + uVar8 * 2 + -2) != 0x5c) {
              *(undefined2 *)((int)local_210 + uVar8 * 2) = 0x5c;
              uVar8 = uVar7;
            }
            if ((0x11 < ~uVar8) && (uVar8 + 0x11 < 0x105)) {
              *(undefined4 *)((int)local_210 + uVar8 * 2) = 0x690062;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 4) = 0x5c006e;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 8) = 0x53004d;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 0xc) = 0x440050;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 0x10) = 0x310042;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 0x14) = 0x300034;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 0x18) = 0x44002e;
              *(undefined4 *)((int)local_210 + uVar8 * 2 + 0x1c) = 0x4c004c;
              auStack496[uVar8] = 0;
              iVar6 = __vcrt_LoadLibraryExW(local_210,0,0x900);
              uVar17 = (undefined)in_stack_fffffde0;
              uVar9 = extraout_DL_02;
              if (iVar6 == 0) {
                DVar1 = GetLastError();
                uVar9 = extraout_DL_03;
                if (DVar1 == 0x57) {
                  __vcrt_LoadLibraryExW(local_210,0,8);
                  uVar9 = extraout_DL_04;
                }
              }
              pHVar2 = (HINSTANCE__ *)
                       thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,uVar9,uVar17);
              return pHVar2;
            }
          }
        }
      }
      else {
        FreeLibrary(hModule);
        uVar7 = extraout_EDX_01;
      }
    }
  }
  pHVar2 = (HINSTANCE__ *)
           thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,(char)uVar7,(char)in_stack_fffffde0);
  return pHVar2;
}



// Library Function - Single Match
//  int __cdecl GetPdbDllPathFromFilePath(wchar_t const *,wchar_t *,unsigned int)
// 
// Library: Visual Studio 2015 Debug

int __cdecl GetPdbDllPathFromFilePath(wchar_t *param_1,wchar_t *param_2,unsigned_int param_3)

{
  errno_t eVar1;
  int iVar2;
  undefined extraout_DL;
  undefined uVar3;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined in_stack_fffff9f0;
  wchar_t local_410 [256];
  wchar_t local_210 [256];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  eVar1 = _wsplitpath_s((wchar_t *)param_1,local_10,3,(wchar_t *)&stack0xfffff9f0,0x100,local_410,
                        0x100,local_210,0x100);
  uVar3 = extraout_DL;
  if (eVar1 == 0) {
    eVar1 = wcscpy_s(local_410,9,L"MSPDB140");
    uVar3 = extraout_DL_00;
    if (eVar1 == 0) {
      eVar1 = wcscpy_s(local_210,4,L"DLL");
      uVar3 = extraout_DL_01;
      if (eVar1 == 0) {
        _wmakepath_s((wchar_t *)param_2,param_3,local_10,(wchar_t *)&stack0xfffff9f0,local_410,
                     local_210);
        iVar2 = thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,extraout_DL_02,in_stack_fffff9f0
                                  );
        return iVar2;
      }
    }
  }
  iVar2 = thunk_FUN_00411cd0(local_8 ^ (uint)&stack0xfffffffc,uVar3,in_stack_fffff9f0);
  return iVar2;
}



undefined4 __cdecl
FUN_00414470(int param_1,undefined2 *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  SIZE_T SVar3;
  int iVar4;
  uint uVar5;
  FARPROC pFVar6;
  HANDLE pvVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  ushort *puVar15;
  DWORD DVar16;
  undefined4 uVar17;
  code ***pppcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int **ppiVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined *puVar25;
  _MEMORY_BASIC_INFORMATION local_50;
  undefined local_34 [4];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  uint local_20;
  code **local_1c;
  int *local_18;
  uint local_14;
  uint *local_10;
  code **local_c;
  ushort local_8 [2];
  
  *param_4 = 0;
  *param_2 = 0;
  SVar3 = VirtualQuery((LPCVOID)(param_1 + -1),(PMEMORY_BASIC_INFORMATION)&local_50,0x1c);
                    // WARNING: Load size is inaccurate
  if ((((SVar3 == 0) ||
       (iVar4 = __vcrt_GetModuleFileNameW(local_50.AllocationBase,param_5,param_6), iVar4 == 0)) ||
      (*local_50.AllocationBase != 0x5a4d)) ||
     ((*(int *)((int)local_50.AllocationBase + 0x3c) < 1 ||
      (piVar8 = (int *)(*(int *)((int)local_50.AllocationBase + 0x3c) + (int)local_50.AllocationBase
                       ), *piVar8 != 0x4550)))) {
    return 0;
  }
  uVar11 = (int)(LPCVOID)(param_1 + -1) - (int)local_50.AllocationBase;
  uVar12 = (uint)*(ushort *)((int)piVar8 + 6);
  uVar10 = 0;
  uVar5 = 0;
  if (uVar12 != 0) {
    puVar9 = (uint *)((int)piVar8 + *(ushort *)(piVar8 + 5) + 0x20);
    do {
      if ((puVar9[1] <= uVar11) && (uVar10 = uVar11 - puVar9[1], uVar11 < *puVar9)) break;
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 10;
    } while (uVar5 < uVar12);
  }
  if (uVar5 == uVar12) {
    return 0;
  }
  local_10 = (uint *)(uVar5 + 1);
  if (DAT_0041a55d == '\0') {
    if (DAT_0041a558 != (HMODULE)0x0) {
      return 0;
    }
    DAT_0041a558 = GetPdbDll();
    if (DAT_0041a558 == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_0041a55d = '\x01';
  }
  pFVar6 = GetProcAddress(DAT_0041a558,"PDBOpenValidate5");
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  pppcVar18 = &local_1c;
  uVar24 = 0;
  uVar22 = 0;
  puVar25 = local_34;
  uVar20 = 0;
  uVar19 = 0;
  uVar17 = 0;
  uVar23 = param_5;
  thunk_FUN_00413e60();
  iVar4 = (*pFVar6)(uVar23,uVar17,uVar19,uVar20,puVar25,uVar22,uVar24,pppcVar18);
  if (iVar4 == 0) {
    return 0;
  }
  local_28 = 0;
  pcVar1 = *(code **)*local_1c;
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0x1329141) goto LAB_004146dd;
  ppiVar21 = &local_24;
  puVar25 = &DAT_00418578;
  uVar23 = 0;
  pcVar1 = *(code **)(*local_1c + 0x1c);
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)(uVar23,puVar25,ppiVar21);
  if (iVar4 == 0) goto LAB_004146dd;
  ppiVar21 = &local_18;
  uVar19 = 0;
  uVar17 = 0;
  uVar23 = 0;
  pcVar1 = *(code **)(*local_24 + 0x20);
  puVar9 = local_10;
  uVar5 = uVar10;
  thunk_FUN_00413e60();
  iVar4 = (*pcVar1)(puVar9,uVar5,ppiVar21,uVar23,uVar17,uVar19);
  if (iVar4 != 0) {
    pppcVar18 = &local_c;
    local_c = (code **)0x0;
    pcVar1 = *(code **)(*local_18 + 0x68);
    thunk_FUN_00413e60();
    cVar2 = (*pcVar1)(pppcVar18);
    if ((cVar2 != '\0') && (local_c != (code **)0x0)) {
      pcVar1 = *(code **)(*local_c + 8);
      thunk_FUN_00413e60();
      iVar4 = (*pcVar1)();
      puVar9 = (uint *)0x0;
      if (iVar4 != 0) {
        do {
          puVar9 = &local_14;
          uVar17 = 0;
          piVar8 = &local_2c;
          puVar15 = local_8;
          pcVar1 = *(code **)(*local_c + 0xc);
          puVar14 = &local_20;
          uVar23 = 0;
          thunk_FUN_00413e60();
          cVar2 = (*pcVar1)(uVar23,puVar14,puVar15,piVar8,puVar9,uVar17);
          if (cVar2 == '\0') goto LAB_004146a5;
          if ((((uint *)(uint)local_8[0] == local_10) && (local_20 <= uVar10)) &&
             (uVar10 < local_2c + local_20)) {
            if ((local_14 == 0) || (0x1ffffffe < local_14)) goto LAB_004146a5;
            SVar3 = local_14 << 3;
            DVar16 = 0;
            pvVar7 = GetProcessHeap();
            puVar9 = (uint *)HeapAlloc(pvVar7,DVar16,SVar3);
            local_10 = puVar9;
            if (puVar9 == (uint *)0x0) goto LAB_004146a5;
            puVar14 = &local_14;
            puVar13 = &local_30;
            uVar19 = 0;
            uVar17 = 0;
            uVar23 = 0;
            pcVar1 = *(code **)(*local_c + 0xc);
            thunk_FUN_00413e60();
            cVar2 = (*pcVar1)(puVar13,uVar23,uVar17,uVar19,puVar14,puVar9);
            puVar9 = local_10;
            if ((cVar2 == '\0') || (uVar10 - local_20 < *local_10)) goto LAB_00414695;
            uVar5 = 1;
            if (1 < local_14) goto LAB_00414766;
            goto LAB_00414770;
          }
          pcVar1 = *(code **)(*local_c + 8);
          thunk_FUN_00413e60();
          iVar4 = (*pcVar1)();
        } while (iVar4 != 0);
        puVar9 = (uint *)0x0;
      }
      goto LAB_00414695;
    }
    goto LAB_004146b7;
  }
  goto LAB_004146ca;
  while (uVar5 = uVar5 + 1, uVar5 < local_14) {
LAB_00414766:
    if (uVar10 - local_20 < local_10[uVar5 * 2]) break;
  }
LAB_00414770:
  uVar19 = 0;
  uVar17 = 0;
  *param_4 = local_10[uVar5 * 2 + -1] & 0xffffff;
  puVar13 = &param_3;
  uVar23 = 0;
  pcVar1 = *(code **)(*local_18 + 0x70);
  thunk_FUN_00413e60();
  cVar2 = (*pcVar1)(local_30,param_2,puVar13,uVar23,uVar17,uVar19);
  puVar9 = local_10;
  if (cVar2 != '\0') {
    local_28 = 1;
  }
LAB_00414695:
  DVar16 = 0;
  pvVar7 = GetProcessHeap();
  HeapFree(pvVar7,DVar16,puVar9);
LAB_004146a5:
  pcVar1 = *(code **)*local_c;
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146b7:
  pcVar1 = *(code **)(*local_18 + 0x40);
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146ca:
  pcVar1 = *(code **)(*local_24 + 0x38);
  thunk_FUN_00413e60();
  (*pcVar1)();
LAB_004146dd:
  pcVar1 = *(code **)(*local_1c + 0x2c);
  thunk_FUN_00413e60();
  (*pcVar1)();
  return local_28;
}



// WARNING: Removing unreachable block (ram,0x00414a4a)
// WARNING: Removing unreachable block (ram,0x00414976)
// WARNING: Removing unreachable block (ram,0x00414900)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___isa_available_init
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug

void ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  undefined extraout_DL;
  undefined uVar8;
  uint uVar9;
  uint in_XCR0;
  undefined in_stack_ffffffbc;
  uint local_c;
  
  uVar4 = DAT_0041a000 ^ (uint)&stack0xfffffffc;
  _DAT_0041a560 = 0;
  DAT_0041a02c = DAT_0041a02c | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar8 = extraout_DL;
  if (BVar5 != 0) {
    local_c = 0;
    _DAT_0041a560 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = *puVar2;
    uVar7 = puVar2[3];
    if (((piVar1[1] ^ 0x756e6547U | piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU) == 0) &&
       ((((((uVar6 & 0xfff3ff0) == 0x106c0 || ((uVar6 & 0xfff3ff0) == 0x20660)) ||
          ((uVar6 & 0xfff3ff0) == 0x20670)) ||
         (((uVar6 & 0xfff3ff0) == 0x30650 || ((uVar6 & 0xfff3ff0) == 0x30660)))) ||
        ((uVar6 & 0xfff3ff0) == 0x30670)))) {
      DAT_0041a564 = DAT_0041a564 | 1;
    }
    if (6 < *piVar1) {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_c = *(uint *)(iVar3 + 4);
      if ((local_c & 0x200) != 0) {
        DAT_0041a564 = DAT_0041a564 | 2;
      }
    }
    uVar9 = uVar7 & 0x100000;
    uVar6 = DAT_0041a02c | 2;
    if (uVar9 != 0) {
      _DAT_0041a560 = 2;
      uVar6 = DAT_0041a02c | 6;
      uVar9 = uVar7 & 0x8000000;
      if ((uVar9 != 0) && ((uVar7 & 0x10000000) != 0)) {
        uVar9 = in_XCR0 & 6;
        in_stack_ffffffbc = (undefined)uVar9;
        if (uVar9 == 6) {
          _DAT_0041a560 = 3;
          uVar9 = 8;
          uVar6 = DAT_0041a02c | 0xe;
          if ((local_c & 0x20) != 0) {
            _DAT_0041a560 = 5;
            uVar6 = DAT_0041a02c | 0x2e;
          }
        }
      }
    }
    DAT_0041a02c = uVar6;
    uVar8 = (undefined)uVar9;
  }
  thunk_FUN_00411cd0(uVar4 ^ (uint)&stack0xfffffffc,uVar8,in_stack_ffffffbc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2017 Debug

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_0041a030 != 0;
}



void FUN_00414c50(void)

{
  return;
}



undefined4 __cdecl FUN_00414c60(undefined4 *param_1)

{
  return *param_1;
}



// Library Function - Single Match
//  _ReadPointerNoFence
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

void __cdecl _ReadPointerNoFence(undefined4 *param_1)

{
  thunk_FUN_00414c60(param_1);
  return;
}



// Library Function - Single Match
//  __guard_icall_checks_enforced
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2019 Debug

bool __guard_icall_checks_enforced(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)_ReadPointerNoFence(&PTR__guard_check_icall_0041c000);
  return pcVar1 != _guard_check_icall;
}



void __std_type_info_destroy_list(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cda. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_type_info_destroy_list();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)memset();
  return pvVar1;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00414ce6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void __vcrt_GetModuleFileNameW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cec. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_GetModuleFileNameW();
  return;
}



void __vcrt_GetModuleHandleW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cf2. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_GetModuleHandleW();
  return;
}



void __vcrt_LoadLibraryExW(void)

{
                    // WARNING: Could not recover jumptable at 0x00414cf8. Too many branches
                    // WARNING: Treating indirect jump as call
  __vcrt_LoadLibraryExW();
  return;
}



void _seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d22. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_exe();
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d28. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d2e. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d34. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d3a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _get_initial_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d40. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_narrow_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d46. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00414d52. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00414d58. Too many branches
                    // WARNING: Treating indirect jump as call
  _exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d5e. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode();
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d64. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d6a. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argv();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d70. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _c_exit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d76. Too many branches
                    // WARNING: Treating indirect jump as call
  _c_exit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d82. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale();
  return iVar1;
}



void _set_new_mode(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d88. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_new_mode();
  return;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x00414d8e. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d94. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = strcpy_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414d9a. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = strcat_s();
  return eVar1;
}



void __stdio_common_vsprintf_s(void)

{
                    // WARNING: Could not recover jumptable at 0x00414da0. Too many branches
                    // WARNING: Treating indirect jump as call
  __stdio_common_vsprintf_s();
  return;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x00414da6. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00414db2. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00414db8. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dbe. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void _crt_at_quick_exit(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_at_quick_exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414dca. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00414dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl
_wmakepath_s(wchar_t *_PathResult,size_t _SIZE,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,
            wchar_t *_Ext)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414dd6. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _wmakepath_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl
_wsplitpath_s(wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSize,wchar_t *_Dir,size_t _DirSize,
             wchar_t *_Filename,size_t _FilenameSize,wchar_t *_Ext,size_t _ExtSize)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _wsplitpath_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414de2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = wcscpy_s();
  return eVar1;
}



BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00414e18. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



undefined FUN_00414e80(void)

{
  return 1;
}



undefined FUN_00414e90(void)

{
  return 1;
}



undefined FUN_00414ea0(void)

{
  return 1;
}



undefined FUN_00414eb0(void)

{
  return 1;
}



undefined FUN_00414ec0(void)

{
  return 1;
}



undefined4 FUN_00414ed0(void)

{
  return 0;
}


