#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define CLASS_2_FEC6BB1C109A969B_METHOD_2_122C6FA3C48B4E9A_OFFSET UNITYSDK_OFFSET(0xB226200)
#define CLASS_2_FEC6BB1C109A969B__CTOR_OFFSET UNITYSDK_OFFSET(0xB2261F0)

inline static constexpr unsigned int Class_2_FEC6BB1C109A969B_TypeDefinitionIndex = 60824;

class Class_2_FEC6BB1C109A969B : public ::Class_1_3002EE73D986F5EA
{
public:
	::Class_1_0D6706375CDAAE8C* Field_2_0; // 0x18
	::Class_1_0D6706375CDAAE8C* Field_2_1; // 0x20

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_122C6FA3C48B4E9A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B_METHOD_2_122C6FA3C48B4E9A_OFFSET))(this, a1);
	}
};
