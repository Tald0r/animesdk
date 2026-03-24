#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D_METHOD_1_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0xA529F00)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D__CTOR_OFFSET UNITYSDK_OFFSET(0xA529EF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_Class_1_1E772279769BA75D_TypeDefinitionIndex = 46516;

	class MonoLayoutTween_Class_1_1E772279769BA75D : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_0; // 0x10
		::MoleMole::MonoLayoutTween* Field_1_1; // 0x18
		::System::Action* Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_896FA9EAB4C29FB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_1E772279769BA75D_METHOD_1_896FA9EAB4C29FB4_OFFSET))(this);
		}
	};
}
