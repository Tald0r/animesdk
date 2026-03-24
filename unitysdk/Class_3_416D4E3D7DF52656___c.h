#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_3492E2216ECD9ABB;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_416D4E3D7DF52656___C_METHOD_1_E8C6BCCCA1956C48_OFFSET UNITYSDK_OFFSET(0xE791970)
#define CLASS_3_416D4E3D7DF52656___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE791920)
#define CLASS_3_416D4E3D7DF52656___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE791960)

inline static constexpr unsigned int Class_3_416D4E3D7DF52656___c_TypeDefinitionIndex = 54494;

class Class_3_416D4E3D7DF52656___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_5_3492E2216ECD9ABB*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_5_3492E2216ECD9ABB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_416D4E3D7DF52656___c_TypeDefinitionIndex)->GetStaticField(0x2B0E0);
	}
	static ::Class_3_416D4E3D7DF52656___c** StaticGet___9()
	{
		return (::Class_3_416D4E3D7DF52656___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_416D4E3D7DF52656___c_TypeDefinitionIndex)->GetStaticField(0x2B0E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_416D4E3D7DF52656___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_416D4E3D7DF52656___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E8C6BCCCA1956C48(::Class_5_3492E2216ECD9ABB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_3492E2216ECD9ABB*))((::PBYTE)hIl2Cpp + CLASS_3_416D4E3D7DF52656___C_METHOD_1_E8C6BCCCA1956C48_OFFSET))(this, a1);
	}
};
