#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_626081FDD45A68D4;
namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x1A7A7150)
#define CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x1A7A72C0)
#define CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A7140)

inline static constexpr unsigned int Class_1_626081FDD45A68D4_Class_1_B6C4C6F28E701CE9_TypeDefinitionIndex = 81715;

class Class_1_626081FDD45A68D4_Class_1_B6C4C6F28E701CE9 : public ::System::Object
{
public:
	::System::Threading::ManualResetEvent* Field_1_0; // 0x10
	::Class_1_626081FDD45A68D4* Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Class_1_626081FDD45A68D4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_626081FDD45A68D4*))((::PBYTE)hIl2Cpp + CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626081FDD45A68D4_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}
};
