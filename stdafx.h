#pragma once
#include <ntdddisk.h>
#include <scsi.h>
#include <intrin.h>
#include "structs.h"

int Bruh = false;
int dqd = false;
int Bqdqwqdruh = false;
int Bqddqfffruh = false;
int fffggff = false;
int fffgggff = false;
int qwff = false;
int ffffqfqfqf = false;
int Br2uh = false;
int d3qd = false;
int Bq4dqwqdruh = false;
int Bqddqfffruh = false;
int ff5fggff = false;
int f6ffgggff = false;
int qw7ff = false;
int fff8fqfqfqf = false;

typedef struct info_t {
	int pid = 0;
	DWORD_PTR address;
	void* value;
	SIZE_T size;
	void* data;
}info, *p_info;

#define ctl_write    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0566, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) 
#define ctl_read    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0567, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define ctl_base    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0568, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define ctl_clear	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0569, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

bool qdqwdqwqdwdqwdq(int x, int y, bool var, POINT Mouse) {
	if (Mouse.x >= x && Mouse.x <= x + 159 && Mouse.y >= y && Mouse.y <= y + 10) {
		var = !var;
		return var;

	}

	if (var) {

	}

	return var;
}
bool neiqwvwevfvwevffeefwgihqd(int x, int y, bool var, POINT Mouse) {
	if (Mouse.x >= x && Mouse.x <= x + 159 && Mouse.y >= y && Mouse.y <= y + 10) {
		var = !var;
		return var;

	}

	if (var) {

	}

	return var;
}
bool vwvevfevfevfvf(int x, int y, bool var, POINT Mouse) {
	if (Mouse.x >= x && Mouse.x <= x + 159 && Mouse.y >= y && Mouse.y <= y + 10) {
		var = !var;
		return var;

	}

	if (var) {

	}

	return var;
}

//io
NTSTATUS unsupported_io(PDEVICE_OBJECT device_obj, PIRP irp);
NTSTATUS create_io(PDEVICE_OBJECT device_obj, PIRP irp);
NTSTATUS close_io(PDEVICE_OBJECT device_obj, PIRP irp);

// memory
void read_mem(int pid, void* addr, void* value, size_t size);
void write_mem(int pid, void* addr, void* value, size_t size);

extern "C" {
	NTKERNELAPI NTSTATUS IoCreateDriver(PUNICODE_STRING DriverName, PDRIVER_INITIALIZE InitializationFunction);
	NTKERNELAPI NTSTATUS ZwQuerySystemInformation(SYSTEM_INFORMATION_CLASS SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength, PULONG ReturnLength);
	NTKERNELAPI NTSTATUS ObReferenceObjectByName(PUNICODE_STRING ObjectName, ULONG Attributes, PACCESS_STATE PassedAccessState, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID ParseContext, PVOID * Object);
	NTKERNELAPI NTSTATUS MmCopyVirtualMemory(PEPROCESS SourceProcess, PVOID SourceAddress, PEPROCESS TargetProcess, PVOID TargetAddress, SIZE_T BufferSize, KPROCESSOR_MODE PreviousMode, PSIZE_T ReturnSize);
	NTKERNELAPI PVOID PsGetProcessSectionBaseAddress(PEPROCESS Process);
}
