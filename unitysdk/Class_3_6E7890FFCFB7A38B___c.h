#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_977038195E9FC31F;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6E7890FFCFB7A38B___C_METHOD_1_7B18A8A21063BE25_OFFSET UNITYSDK_OFFSET(0xC5308F0)
#define CLASS_3_6E7890FFCFB7A38B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5308A0)
#define CLASS_3_6E7890FFCFB7A38B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5308E0)

inline static constexpr unsigned int Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex = 41383;

class Class_3_6E7890FFCFB7A38B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_977038195E9FC31F*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_977038195E9FC31F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex)->GetStaticField(0x2F100);
	}
	static ::Class_3_6E7890FFCFB7A38B___c** StaticGet___9()
	{
		return (::Class_3_6E7890FFCFB7A38B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex)->GetStaticField(0x2F108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7B18A8A21063BE25(::Class_3_977038195E9FC31F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_977038195E9FC31F*))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C_METHOD_1_7B18A8A21063BE25_OFFSET))(this, a1);
	}
};
