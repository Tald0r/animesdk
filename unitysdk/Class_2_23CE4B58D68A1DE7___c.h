#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_23CE4B58D68A1DE7___C_METHOD_1_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x7637950)
#define CLASS_2_23CE4B58D68A1DE7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7637900)
#define CLASS_2_23CE4B58D68A1DE7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7637940)

inline static constexpr unsigned int Class_2_23CE4B58D68A1DE7___c_TypeDefinitionIndex = 48749;

class Class_2_23CE4B58D68A1DE7___c : public ::System::Object
{
public:
	static ::Class_2_23CE4B58D68A1DE7___c** StaticGet___9()
	{
		return (::Class_2_23CE4B58D68A1DE7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_23CE4B58D68A1DE7___c_TypeDefinitionIndex)->GetStaticField(0x35030);
	}
	static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_23CE4B58D68A1DE7___c_TypeDefinitionIndex)->GetStaticField(0x35038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7___C_METHOD_1_86914B28476494AF_OFFSET))(this);
	}
};
