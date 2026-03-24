#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_3492E2216ECD9ABB;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F3A92DA5D0069570___C_METHOD_1_996736D454769C24_OFFSET UNITYSDK_OFFSET(0x9AF1B50)
#define CLASS_3_F3A92DA5D0069570___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AF1B00)
#define CLASS_3_F3A92DA5D0069570___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF1B40)

inline static constexpr unsigned int Class_3_F3A92DA5D0069570___c_TypeDefinitionIndex = 49118;

class Class_3_F3A92DA5D0069570___c : public ::System::Object
{
public:
	static ::Class_3_F3A92DA5D0069570___c** StaticGet___9()
	{
		return (::Class_3_F3A92DA5D0069570___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3A92DA5D0069570___c_TypeDefinitionIndex)->GetStaticField(0x3F3E0);
	}
	static ::System::Action_1<::Class_5_3492E2216ECD9ABB*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_5_3492E2216ECD9ABB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3A92DA5D0069570___c_TypeDefinitionIndex)->GetStaticField(0x3F3E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_996736D454769C24(::Class_5_3492E2216ECD9ABB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_3492E2216ECD9ABB*))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570___C_METHOD_1_996736D454769C24_OFFSET))(this, a1);
	}
};
