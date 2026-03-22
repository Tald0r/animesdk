#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BA9F759B683F83A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_F29999C3DD3E09BA___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x6EE7910)
#define CLASS_3_F29999C3DD3E09BA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EE78C0)
#define CLASS_3_F29999C3DD3E09BA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6EE7900)

inline static constexpr unsigned int Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex = 51074;

class Class_3_F29999C3DD3E09BA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_6BA9F759B683F83A*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_6BA9F759B683F83A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex)->GetStaticField(0x437E0);
	}
	static ::Class_3_F29999C3DD3E09BA___c** StaticGet___9()
	{
		return (::Class_3_F29999C3DD3E09BA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F29999C3DD3E09BA___c_TypeDefinitionIndex)->GetStaticField(0x437E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_6BA9F759B683F83A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BA9F759B683F83A*))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
