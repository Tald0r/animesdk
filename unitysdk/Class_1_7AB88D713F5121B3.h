#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_125;

#define CLASS_1_7AB88D713F5121B3_METHOD_1_E1DFAFF6133A7AF9_OFFSET UNITYSDK_OFFSET(0x6E9F4F0)
#define CLASS_1_7AB88D713F5121B3__CTOR_OFFSET UNITYSDK_OFFSET(0x6E9F4E0)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_TypeDefinitionIndex = 40317;

class Class_1_7AB88D713F5121B3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_125* Method_1_E1DFAFF6133A7AF9()
	{
		return ((::Class_2_208CC9941471731A_125*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_METHOD_1_E1DFAFF6133A7AF9_OFFSET))(this);
	}
};
