#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF7F1C413CECBBD_1.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_4;
class Class_3_DB267E245CF41057;
class Class_3_EC25B6E84130E2CA;
class Class_3_F41D242A20F8FE06;

#define STRUCT_2_FD5B8435FDFD3E63_METHOD_2_3EDAC7D0D65C93C8_OFFSET UNITYSDK_OFFSET(0x34EB80)
#define STRUCT_2_FD5B8435FDFD3E63_METHOD_2_457486115AB81B48_OFFSET UNITYSDK_OFFSET(0x34EC10)
#define STRUCT_2_FD5B8435FDFD3E63_METHOD_2_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x34EB60)
#define STRUCT_2_FD5B8435FDFD3E63_METHOD_2_E1A464DC29885BE4_OFFSET UNITYSDK_OFFSET(0x34EB70)

inline static constexpr unsigned int Struct_2_FD5B8435FDFD3E63_TypeDefinitionIndex = 60621;

struct alignas(8) Struct_2_FD5B8435FDFD3E63
{
	::Class_3_F41D242A20F8FE06* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_4* Field_2_1; // 0x18
	::Enum_3_7CF7F1C413CECBBD_1 Field_2_2; // 0x20
	::Class_3_EC25B6E84130E2CA* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::System::Int32 Field_2_6; // 0x38
	::System::UInt32 Field_2_7; // 0x3C
	::System::UInt32 Field_2_8; // 0x40
	::System::Int32 Field_2_9; // 0x44
	::System::Boolean Field_2_10; // 0x48
	::System::UInt32 Field_2_11; // 0x4C
	::System::Boolean Field_2_12; // 0x50

	::System::Void Method_2_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD5B8435FDFD3E63_METHOD_2_9216B801ACD0B564_OFFSET))(this);
	}

	::Class_3_EC25B6E84130E2CA* Method_2_E1A464DC29885BE4(::Class_3_DB267E245CF41057* a1)
	{
		return ((::Class_3_EC25B6E84130E2CA*(*)(::PVOID, ::Class_3_DB267E245CF41057*))((::PBYTE)hIl2Cpp + STRUCT_2_FD5B8435FDFD3E63_METHOD_2_E1A464DC29885BE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EDAC7D0D65C93C8(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FD5B8435FDFD3E63_METHOD_2_3EDAC7D0D65C93C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_457486115AB81B48(::Enum_3_7CF7F1C413CECBBD_1 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7CF7F1C413CECBBD_1, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FD5B8435FDFD3E63_METHOD_2_457486115AB81B48_OFFSET))(this, a1, a2);
	}
};
