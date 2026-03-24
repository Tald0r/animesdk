#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C307A147B523BD10;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_794BA983EDDBCFDE___C_METHOD_1_C182346378132F07_OFFSET UNITYSDK_OFFSET(0x90E6710)
#define CLASS_1_794BA983EDDBCFDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x90E66C0)
#define CLASS_1_794BA983EDDBCFDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x90E6700)

inline static constexpr unsigned int Class_1_794BA983EDDBCFDE___c_TypeDefinitionIndex = 71159;

class Class_1_794BA983EDDBCFDE___c : public ::System::Object
{
public:
	static ::Class_1_794BA983EDDBCFDE___c** StaticGet___9()
	{
		return (::Class_1_794BA983EDDBCFDE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_794BA983EDDBCFDE___c_TypeDefinitionIndex)->GetStaticField(0x2F8A0);
	}
	static ::System::Comparison_1<::Class_3_C307A147B523BD10*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_3_C307A147B523BD10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_794BA983EDDBCFDE___c_TypeDefinitionIndex)->GetStaticField(0x2F8A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_794BA983EDDBCFDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_794BA983EDDBCFDE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C182346378132F07(::Class_3_C307A147B523BD10* a1, ::Class_3_C307A147B523BD10* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_C307A147B523BD10*, ::Class_3_C307A147B523BD10*))((::PBYTE)hIl2Cpp + CLASS_1_794BA983EDDBCFDE___C_METHOD_1_C182346378132F07_OFFSET))(this, a1, a2);
	}
};
