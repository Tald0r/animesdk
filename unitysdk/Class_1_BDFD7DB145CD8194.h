#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BDFD7DB145CD8194_METHOD_1_8386C9F150870F55_OFFSET UNITYSDK_OFFSET(0x967CBD0)
#define CLASS_1_BDFD7DB145CD8194__CTOR_OFFSET UNITYSDK_OFFSET(0x967CF10)

inline static constexpr unsigned int Class_1_BDFD7DB145CD8194_TypeDefinitionIndex = 75431;

class Class_1_BDFD7DB145CD8194 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDFD7DB145CD8194__CTOR_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_1_8386C9F150870F55(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BDFD7DB145CD8194_METHOD_1_8386C9F150870F55_OFFSET))(this, a1);
	}
};
