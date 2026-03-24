#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_5_43BC056161DF24EE_9___C_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xB2D6570)
#define CLASS_5_43BC056161DF24EE_9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2D6520)
#define CLASS_5_43BC056161DF24EE_9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D6560)

inline static constexpr unsigned int Class_5_43BC056161DF24EE_9___c_TypeDefinitionIndex = 45611;

class Class_5_43BC056161DF24EE_9___c : public ::System::Object
{
public:
	static ::Class_5_43BC056161DF24EE_9___c** StaticGet___9()
	{
		return (::Class_5_43BC056161DF24EE_9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_43BC056161DF24EE_9___c_TypeDefinitionIndex)->GetStaticField(0x30110);
	}
	static ::System::Action** StaticGet___9__1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_43BC056161DF24EE_9___c_TypeDefinitionIndex)->GetStaticField(0x30118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_43BC056161DF24EE_9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_43BC056161DF24EE_9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_43BC056161DF24EE_9___C_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
