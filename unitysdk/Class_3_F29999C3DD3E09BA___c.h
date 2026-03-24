#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDA36D190E52F04B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_F29999C3DD3E09BA___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0xBF7B8E0)
#define CLASS_3_F29999C3DD3E09BA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF7B890)
#define CLASS_3_F29999C3DD3E09BA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7B8D0)

inline static constexpr unsigned int Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex = 68381;

class Class_3_F29999C3DD3E09BA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_DDA36D190E52F04B*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_DDA36D190E52F04B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex)->GetStaticField(0x35E90);
	}
	static ::Class_3_F29999C3DD3E09BA___c** StaticGet___9()
	{
		return (::Class_3_F29999C3DD3E09BA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex)->GetStaticField(0x35E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_DDA36D190E52F04B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDA36D190E52F04B*))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
