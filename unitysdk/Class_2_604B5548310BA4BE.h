#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define CLASS_2_604B5548310BA4BE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9C4D180)
#define CLASS_2_604B5548310BA4BE_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x9C4D2D0)
#define CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9C4D3F0)
#define CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C4D380)
#define CLASS_2_604B5548310BA4BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C4D250)
#define CLASS_2_604B5548310BA4BE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4D2C0)

inline static constexpr unsigned int Class_2_604B5548310BA4BE_TypeDefinitionIndex = 58162;

class Class_2_604B5548310BA4BE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x98; // 0x0
	::System::String* Field_2_0; // 0x20
	::Enum_3_60B60884B6778625 Field_2_1; // 0x28
	::MoleMole::Config::PropertyModifyFunction Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
