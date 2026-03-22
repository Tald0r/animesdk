#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_218;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_48C79F0329BCDA89_1___C_METHOD_1_50AA5877B881235B_OFFSET UNITYSDK_OFFSET(0x6807910)
#define CLASS_2_48C79F0329BCDA89_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x68078C0)
#define CLASS_2_48C79F0329BCDA89_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6807900)

inline static constexpr unsigned int Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex = 42488;

class Class_2_48C79F0329BCDA89_1___c : public ::System::Object
{
public:
	static ::Class_2_48C79F0329BCDA89_1___c** StaticGet___9()
	{
		return (::Class_2_48C79F0329BCDA89_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex)->GetStaticField(0x3B090);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_218*, ::Class_0_16E4307DCC419505_218*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_218*, ::Class_0_16E4307DCC419505_218*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex)->GetStaticField(0x3B098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_218* Method_1_50AA5877B881235B(::Class_0_16E4307DCC419505_218* a1)
	{
		return ((::Class_0_16E4307DCC419505_218*(*)(::PVOID, ::Class_0_16E4307DCC419505_218*))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C_METHOD_1_50AA5877B881235B_OFFSET))(this, a1);
	}
};
