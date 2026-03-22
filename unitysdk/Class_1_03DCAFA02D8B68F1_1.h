#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_03DCAFA02D8B68F1_1_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x66FCBE0)
#define CLASS_1_03DCAFA02D8B68F1_1_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x66FCBD0)
#define CLASS_1_03DCAFA02D8B68F1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x66FCBF0)

inline static constexpr unsigned int Class_1_03DCAFA02D8B68F1_1_TypeDefinitionIndex = 51953;

class Class_1_03DCAFA02D8B68F1_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}
};
