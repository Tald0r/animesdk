#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_772D970B20F06EA6;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_E15C4AEC0F30608D___C_METHOD_1_42EA1C6AB8285F8F_OFFSET UNITYSDK_OFFSET(0xE0FB720)
#define CLASS_3_E15C4AEC0F30608D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0FB6D0)
#define CLASS_3_E15C4AEC0F30608D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0FB710)

inline static constexpr unsigned int Class_3_E15C4AEC0F30608D___c_TypeDefinitionIndex = 74549;

class Class_3_E15C4AEC0F30608D___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_772D970B20F06EA6*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_772D970B20F06EA6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E15C4AEC0F30608D___c_TypeDefinitionIndex)->GetStaticField(0x423D0);
	}
	static ::Class_3_E15C4AEC0F30608D___c** StaticGet___9()
	{
		return (::Class_3_E15C4AEC0F30608D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E15C4AEC0F30608D___c_TypeDefinitionIndex)->GetStaticField(0x423D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E15C4AEC0F30608D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E15C4AEC0F30608D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42EA1C6AB8285F8F(::Class_3_772D970B20F06EA6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_772D970B20F06EA6*))((::PBYTE)hIl2Cpp + CLASS_3_E15C4AEC0F30608D___C_METHOD_1_42EA1C6AB8285F8F_OFFSET))(this, a1);
	}
};
