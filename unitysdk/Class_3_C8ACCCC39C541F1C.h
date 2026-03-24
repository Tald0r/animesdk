#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0xA3C4F90)
#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA3C4E40)
#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3C5240)
#define CLASS_3_C8ACCCC39C541F1C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C5190)

inline static constexpr unsigned int Class_3_C8ACCCC39C541F1C_TypeDefinitionIndex = 67699;

class Class_3_C8ACCCC39C541F1C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_5B5E82918BC44D6E* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_24AD3B57ADC65069(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
