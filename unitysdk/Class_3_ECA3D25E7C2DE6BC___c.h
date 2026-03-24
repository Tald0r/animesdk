#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_921BBA4FF7CA4B63;
class Class_5_F638703ACD0FA08E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_ECA3D25E7C2DE6BC___C_METHOD_1_BEC9EA7B0AE3632B_OFFSET UNITYSDK_OFFSET(0x98D5480)
#define CLASS_3_ECA3D25E7C2DE6BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98D5430)
#define CLASS_3_ECA3D25E7C2DE6BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98D5470)

inline static constexpr unsigned int Class_3_ECA3D25E7C2DE6BC___c_TypeDefinitionIndex = 69364;

class Class_3_ECA3D25E7C2DE6BC___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ECA3D25E7C2DE6BC___c_TypeDefinitionIndex)->GetStaticField(0x3E110);
	}
	static ::Class_3_ECA3D25E7C2DE6BC___c** StaticGet___9()
	{
		return (::Class_3_ECA3D25E7C2DE6BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ECA3D25E7C2DE6BC___c_TypeDefinitionIndex)->GetStaticField(0x3E118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BEC9EA7B0AE3632B(::Class_4_921BBA4FF7CA4B63* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_921BBA4FF7CA4B63*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_ECA3D25E7C2DE6BC___C_METHOD_1_BEC9EA7B0AE3632B_OFFSET))(this, a1, a2);
	}
};
