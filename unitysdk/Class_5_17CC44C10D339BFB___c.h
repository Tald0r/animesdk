#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_5_17CC44C10D339BFB___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x7CC3C90)
#define CLASS_5_17CC44C10D339BFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7CC3C40)
#define CLASS_5_17CC44C10D339BFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7CC3C80)

inline static constexpr unsigned int Class_5_17CC44C10D339BFB___c_TypeDefinitionIndex = 69024;

class Class_5_17CC44C10D339BFB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_17CC44C10D339BFB___c_TypeDefinitionIndex)->GetStaticField(0x39EB0);
	}
	static ::Class_5_17CC44C10D339BFB___c** StaticGet___9()
	{
		return (::Class_5_17CC44C10D339BFB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_17CC44C10D339BFB___c_TypeDefinitionIndex)->GetStaticField(0x39EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_17CC44C10D339BFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_17CC44C10D339BFB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_17CC44C10D339BFB___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
