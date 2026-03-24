#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6C36C0127DB30EF4_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x676E010)
#define CLASS_1_6C36C0127DB30EF4_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x676DED0)
#define CLASS_1_6C36C0127DB30EF4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x676DEE0)
#define CLASS_1_6C36C0127DB30EF4_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x676E020)
#define CLASS_1_6C36C0127DB30EF4_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x676DEB0)
#define CLASS_1_6C36C0127DB30EF4__CTOR_OFFSET UNITYSDK_OFFSET(0x676DDE0)

inline static constexpr unsigned int Class_1_6C36C0127DB30EF4_TypeDefinitionIndex = 75914;

class Class_1_6C36C0127DB30EF4 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::SphereCollider* Field_1_0; // 0x18
	::System::Single Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_2; // 0x30
	::System::Single Field_1_3; // 0x3C

	::System::Void _ctor(::UnityEngine::SphereCollider* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C36C0127DB30EF4_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}
};
