#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_1_BC9CB4886AA0B65E___C_METHOD_1_7E79C83BFC6668A6_OFFSET UNITYSDK_OFFSET(0x701F6A0)
#define CLASS_1_BC9CB4886AA0B65E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x701F650)
#define CLASS_1_BC9CB4886AA0B65E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x701F690)

inline static constexpr unsigned int Class_1_BC9CB4886AA0B65E___c_TypeDefinitionIndex = 64940;

class Class_1_BC9CB4886AA0B65E___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__200_0()
	{
		return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC9CB4886AA0B65E___c_TypeDefinitionIndex)->GetStaticField(0x33000);
	}
	static ::Class_1_BC9CB4886AA0B65E___c** StaticGet___9()
	{
		return (::Class_1_BC9CB4886AA0B65E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC9CB4886AA0B65E___c_TypeDefinitionIndex)->GetStaticField(0x33008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7E79C83BFC6668A6(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E___C_METHOD_1_7E79C83BFC6668A6_OFFSET))(this, a1);
	}
};
