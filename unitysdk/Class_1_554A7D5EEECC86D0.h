#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_5.h"
#include "unitysdk/Struct_2_0106C133B17575D7.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_690;
class Class_2_5F13664BB3BDBB79;

#define CLASS_1_554A7D5EEECC86D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90C59A0)
#define CLASS_1_554A7D5EEECC86D0_METHOD_1_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x90C60D0)
#define CLASS_1_554A7D5EEECC86D0_METHOD_1_60CD0479C3A8133D_OFFSET UNITYSDK_OFFSET(0x90C5EC0)
#define CLASS_1_554A7D5EEECC86D0_METHOD_1_C67A19EBEB5A6B53_OFFSET UNITYSDK_OFFSET(0x90C5A70)
#define CLASS_1_554A7D5EEECC86D0__CTOR_OFFSET UNITYSDK_OFFSET(0x90C5A10)

inline static constexpr unsigned int Class_1_554A7D5EEECC86D0_TypeDefinitionIndex = 66429;

class Class_1_554A7D5EEECC86D0 : public ::System::Object
{
public:
	::Class_2_5F13664BB3BDBB79* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_690* Field_1_1; // 0x18
	::Struct_2_B136CFD8FB6B8F37_1 Field_1_4; // 0x20
	::Enum_3_D2BBBB758B896E04_5 Field_1_2; // 0x24
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554A7D5EEECC86D0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554A7D5EEECC86D0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C67A19EBEB5A6B53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554A7D5EEECC86D0_METHOD_1_C67A19EBEB5A6B53_OFFSET))(this, a1);
	}

	::System::Void Method_1_60CD0479C3A8133D(::Struct_2_0106C133B17575D7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0106C133B17575D7))((::PBYTE)hIl2Cpp + CLASS_1_554A7D5EEECC86D0_METHOD_1_60CD0479C3A8133D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554A7D5EEECC86D0_METHOD_1_2340068C22DFE332_OFFSET))(this);
	}
};
