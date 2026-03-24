#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_D4F8C41AAD377B89;
class Class_2_A0DBCDCD2690B426;
namespace System { class String; }

#define CLASS_2_A0DBCDCD2690B426_CLASS_1_5891CB91B3EFC8F5_METHOD_1_839FBC0E229AF070_OFFSET UNITYSDK_OFFSET(0xA6EFE00)
#define CLASS_2_A0DBCDCD2690B426_CLASS_1_5891CB91B3EFC8F5__CTOR_OFFSET UNITYSDK_OFFSET(0xA6EFDF0)

inline static constexpr unsigned int Class_2_A0DBCDCD2690B426_Class_1_5891CB91B3EFC8F5_TypeDefinitionIndex = 75792;

class Class_2_A0DBCDCD2690B426_Class_1_5891CB91B3EFC8F5 : public ::System::Object
{
public:
	::Class_1_D4F8C41AAD377B89* Field_1_3; // 0x10
	::Class_2_A0DBCDCD2690B426* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0DBCDCD2690B426_CLASS_1_5891CB91B3EFC8F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_839FBC0E229AF070(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_A0DBCDCD2690B426_CLASS_1_5891CB91B3EFC8F5_METHOD_1_839FBC0E229AF070_OFFSET))(this, a1);
	}
};
