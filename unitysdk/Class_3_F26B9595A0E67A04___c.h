#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_1_OFFSET UNITYSDK_OFFSET(0x66F9BE0)
#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_OFFSET UNITYSDK_OFFSET(0x66F99F0)
#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_FED3DFA8643F2D27_OFFSET UNITYSDK_OFFSET(0x66F9B10)
#define CLASS_3_F26B9595A0E67A04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x66F99A0)
#define CLASS_3_F26B9595A0E67A04___C__CTOR_OFFSET UNITYSDK_OFFSET(0x66F99E0)

inline static constexpr unsigned int Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex = 38252;

class Class_3_F26B9595A0E67A04___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__30_4()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x3E6F0);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__30_3()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x3E6F8);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__30_2()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x3E700);
	}
	static ::Class_3_F26B9595A0E67A04___c** StaticGet___9()
	{
		return (::Class_3_F26B9595A0E67A04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x3E708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B5C7B44C609556DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_FED3DFA8643F2D27(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_FED3DFA8643F2D27_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5C7B44C609556DB_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_1_OFFSET))(this, a1);
	}
};
