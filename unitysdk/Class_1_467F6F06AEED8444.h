#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace System { class String; }

#define CLASS_1_467F6F06AEED8444_METHOD_1_1A03501E5C957D46_OFFSET UNITYSDK_OFFSET(0x7E57090)
#define CLASS_1_467F6F06AEED8444_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x7E572E0)
#define CLASS_1_467F6F06AEED8444_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E57280)
#define CLASS_1_467F6F06AEED8444_METHOD_1_D608456BAA9B3500_OFFSET UNITYSDK_OFFSET(0x7E56EA0)
#define CLASS_1_467F6F06AEED8444__CTOR_OFFSET UNITYSDK_OFFSET(0x7E56E90)

inline static constexpr unsigned int Class_1_467F6F06AEED8444_TypeDefinitionIndex = 58569;

class Class_1_467F6F06AEED8444 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_578* Field_1_0; // 0x10
	::System::Double Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_578* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_578*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_467F6F06AEED8444__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D608456BAA9B3500(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_467F6F06AEED8444_METHOD_1_D608456BAA9B3500_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A03501E5C957D46(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_467F6F06AEED8444_METHOD_1_1A03501E5C957D46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467F6F06AEED8444_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467F6F06AEED8444_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}
};
