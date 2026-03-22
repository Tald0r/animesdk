#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A501414D8FFE59E;
namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x193D4D80)
#define CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x193D4C20)
#define CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET UNITYSDK_OFFSET(0x193D4C10)

inline static constexpr unsigned int Class_1_5A501414D8FFE59E_Class_1_B6C4C6F28E701CE9_TypeDefinitionIndex = 79866;

class Class_1_5A501414D8FFE59E_Class_1_B6C4C6F28E701CE9 : public ::System::Object
{
public:
	::Class_1_5A501414D8FFE59E* Field_1_3; // 0x10
	::System::Threading::ManualResetEvent* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Class_1_5A501414D8FFE59E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_5A501414D8FFE59E*))((::PBYTE)hIl2Cpp + CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A501414D8FFE59E_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}
};
