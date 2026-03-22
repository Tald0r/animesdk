#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_31B1BB98FD6B4D52;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A278C5CEFDE5DE23___C_METHOD_1_B1BE4AFB690FE8C1_OFFSET UNITYSDK_OFFSET(0x7AD3430)
#define CLASS_3_A278C5CEFDE5DE23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AD33E0)
#define CLASS_3_A278C5CEFDE5DE23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7AD3420)

inline static constexpr unsigned int Class_3_A278C5CEFDE5DE23___c_TypeDefinitionIndex = 77640;

class Class_3_A278C5CEFDE5DE23___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_31B1BB98FD6B4D52*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_31B1BB98FD6B4D52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A278C5CEFDE5DE23___c_TypeDefinitionIndex)->GetStaticField(0x31960);
	}
	static ::Class_3_A278C5CEFDE5DE23___c** StaticGet___9()
	{
		return (::Class_3_A278C5CEFDE5DE23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A278C5CEFDE5DE23___c_TypeDefinitionIndex)->GetStaticField(0x31968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A278C5CEFDE5DE23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A278C5CEFDE5DE23___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B1BE4AFB690FE8C1(::Class_3_31B1BB98FD6B4D52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_31B1BB98FD6B4D52*))((::PBYTE)hIl2Cpp + CLASS_3_A278C5CEFDE5DE23___C_METHOD_1_B1BE4AFB690FE8C1_OFFSET))(this, a1);
	}
};
