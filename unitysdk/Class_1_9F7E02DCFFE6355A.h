#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssMapIconBaseController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9F7E02DCFFE6355A_METHOD_1_23830D5793312C44_OFFSET UNITYSDK_OFFSET(0x8E7DEB0)
#define CLASS_1_9F7E02DCFFE6355A__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7DEA0)

inline static constexpr unsigned int Class_1_9F7E02DCFFE6355A_TypeDefinitionIndex = 42637;

class Class_1_9F7E02DCFFE6355A : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::MoleMole::UIAbyssMapIconBaseController* Field_1_0; // 0x18
	::MoleMole::Vector2Int Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7E02DCFFE6355A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_23830D5793312C44()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7E02DCFFE6355A_METHOD_1_23830D5793312C44_OFFSET))(this);
	}
};
