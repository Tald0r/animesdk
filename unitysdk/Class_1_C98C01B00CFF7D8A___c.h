#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E448A6480D65B7F5;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_C98C01B00CFF7D8A___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x6D15780)
#define CLASS_1_C98C01B00CFF7D8A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D15730)
#define CLASS_1_C98C01B00CFF7D8A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D15770)

inline static constexpr unsigned int Class_1_C98C01B00CFF7D8A___c_TypeDefinitionIndex = 78569;

class Class_1_C98C01B00CFF7D8A___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_E448A6480D65B7F5*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_E448A6480D65B7F5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98C01B00CFF7D8A___c_TypeDefinitionIndex)->GetStaticField(0x34000);
	}
	static ::Class_1_C98C01B00CFF7D8A___c** StaticGet___9()
	{
		return (::Class_1_C98C01B00CFF7D8A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98C01B00CFF7D8A___c_TypeDefinitionIndex)->GetStaticField(0x34008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98C01B00CFF7D8A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C98C01B00CFF7D8A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_E448A6480D65B7F5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E448A6480D65B7F5*))((::PBYTE)hIl2Cpp + CLASS_1_C98C01B00CFF7D8A___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
