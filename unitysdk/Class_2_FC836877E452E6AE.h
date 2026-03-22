#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_CA2F5FC90FEC446E_Enum_3_56582377E8F44B3B.h"

namespace System { class String; }

#define CLASS_2_FC836877E452E6AE_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x64EDF90)
#define CLASS_2_FC836877E452E6AE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x64EE040)
#define CLASS_2_FC836877E452E6AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x64EDF10)
#define CLASS_2_FC836877E452E6AE__CTOR_OFFSET UNITYSDK_OFFSET(0x64EDF80)

inline static constexpr unsigned int Class_2_FC836877E452E6AE_TypeDefinitionIndex = 69058;

class Class_2_FC836877E452E6AE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xEA; // 0x0
	::System::String* Field_2_0; // 0x20
	::Class_2_CA2F5FC90FEC446E_Enum_3_56582377E8F44B3B Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FC836877E452E6AE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC836877E452E6AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC836877E452E6AE_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC836877E452E6AE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
