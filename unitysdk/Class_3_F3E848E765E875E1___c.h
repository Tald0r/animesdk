#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_77DF2E5CA7DA1D3C;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET UNITYSDK_OFFSET(0xAC95020)
#define CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC94FD0)
#define CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC95010)

inline static constexpr unsigned int Class_3_F3E848E765E875E1___c_TypeDefinitionIndex = 64821;

class Class_3_F3E848E765E875E1___c : public ::System::Object
{
public:
	static ::Class_3_F3E848E765E875E1___c** StaticGet___9()
	{
		return (::Class_3_F3E848E765E875E1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x33AD0);
	}
	static ::System::Action_1<::Class_4_77DF2E5CA7DA1D3C*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_4_77DF2E5CA7DA1D3C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F3E848E765E875E1___c_TypeDefinitionIndex)->GetStaticField(0x33AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_98910EF8C2F89AAC(::Class_4_77DF2E5CA7DA1D3C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_77DF2E5CA7DA1D3C*))((::PBYTE)hIl2Cpp + CLASS_3_F3E848E765E875E1___C_METHOD_1_98910EF8C2F89AAC_OFFSET))(this, a1);
	}
};
