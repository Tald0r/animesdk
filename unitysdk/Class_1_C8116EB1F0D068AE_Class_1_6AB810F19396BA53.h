#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace System { class Action; }

#define CLASS_1_C8116EB1F0D068AE_CLASS_1_6AB810F19396BA53_METHOD_1_29D40D27F5DE04E1_OFFSET UNITYSDK_OFFSET(0x661EFC0)
#define CLASS_1_C8116EB1F0D068AE_CLASS_1_6AB810F19396BA53__CTOR_OFFSET UNITYSDK_OFFSET(0x661EFB0)

inline static constexpr unsigned int Class_1_C8116EB1F0D068AE_Class_1_6AB810F19396BA53_TypeDefinitionIndex = 79566;

class Class_1_C8116EB1F0D068AE_Class_1_6AB810F19396BA53 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_6AB810F19396BA53__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29D40D27F5DE04E1(::MoleMole::ConfigNpcPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNpcPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_6AB810F19396BA53_METHOD_1_29D40D27F5DE04E1_OFFSET))(this, a1);
	}
};
