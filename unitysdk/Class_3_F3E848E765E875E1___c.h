#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_924752164CA13E73;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET UNITYSDK_OFFSET(0x7575680)
#define CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7575630)
#define CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7575670)

inline static constexpr unsigned int Class_3_F3E848E765E875E1___c_TypeDefinitionIndex = 62882;

class Class_3_F3E848E765E875E1___c : public ::System::Object
{
public:
	static ::Class_3_F3E848E765E875E1___c** StaticGet___9()
	{
		return (::Class_3_F3E848E765E875E1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x3DA90);
	}
	static ::System::Action_1<::Class_4_924752164CA13E73*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_4_924752164CA13E73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x3DA98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_98910EF8C2F89AAC(::Class_4_924752164CA13E73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_924752164CA13E73*))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET))(this, a1);
	}
};
