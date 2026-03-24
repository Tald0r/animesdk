#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3A6272A02DE7F4E0;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_627BDECF488D9EB4___C_METHOD_1_AF1604CC6E1281BF_OFFSET UNITYSDK_OFFSET(0xF3B5900)
#define CLASS_3_627BDECF488D9EB4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3B58B0)
#define CLASS_3_627BDECF488D9EB4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B58F0)

inline static constexpr unsigned int Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex = 61203;

class Class_3_627BDECF488D9EB4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_3A6272A02DE7F4E0*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_3A6272A02DE7F4E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex)->GetStaticField(0x35930);
	}
	static ::Class_3_627BDECF488D9EB4___c** StaticGet___9()
	{
		return (::Class_3_627BDECF488D9EB4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex)->GetStaticField(0x35938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF1604CC6E1281BF(::Class_3_3A6272A02DE7F4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3A6272A02DE7F4E0*))((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C_METHOD_1_AF1604CC6E1281BF_OFFSET))(this, a1);
	}
};
