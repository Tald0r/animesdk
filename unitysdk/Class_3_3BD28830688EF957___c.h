#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A5AF8EA2F7094EFB;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_3BD28830688EF957___C_METHOD_1_2751686E3FC51762_OFFSET UNITYSDK_OFFSET(0xD4885E0)
#define CLASS_3_3BD28830688EF957___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD488590)
#define CLASS_3_3BD28830688EF957___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD4885D0)

inline static constexpr unsigned int Class_3_3BD28830688EF957___c_TypeDefinitionIndex = 47008;

class Class_3_3BD28830688EF957___c : public ::System::Object
{
public:
	static ::Class_3_3BD28830688EF957___c** StaticGet___9()
	{
		return (::Class_3_3BD28830688EF957___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3BD28830688EF957___c_TypeDefinitionIndex)->GetStaticField(0x43B00);
	}
	static ::System::Action_1<::Class_3_A5AF8EA2F7094EFB*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_A5AF8EA2F7094EFB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3BD28830688EF957___c_TypeDefinitionIndex)->GetStaticField(0x43B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3BD28830688EF957___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BD28830688EF957___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2751686E3FC51762(::Class_3_A5AF8EA2F7094EFB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_3_3BD28830688EF957___C_METHOD_1_2751686E3FC51762_OFFSET))(this, a1);
	}
};
