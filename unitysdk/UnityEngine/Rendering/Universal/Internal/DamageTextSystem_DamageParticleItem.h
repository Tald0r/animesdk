#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGEPARTICLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19241530)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageParticleItem_TypeDefinitionIndex = 28852;

	class DamageTextSystem_DamageParticleItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedListNode_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageParticleItem*>* node; // 0x10
		::System::Action_2<::System::UInt32, ::System::Single>* onEndCallback; // 0x18
		::UnityEngine::Transform* refTransform; // 0x20
		::UnityEngine::RenderTexture* particleRT; // 0x28
		::System::Object* offscreenParticleSystemHandle; // 0x30
		::System::Int32 refTransformFollowType; // 0x38
		::System::Single showTime; // 0x3C
		::UnityEngine::Vector3 worldOffset; // 0x40
		::UnityEngine::Vector3 refTransformInitPos; // 0x4C
		::System::Single scale; // 0x58
		::UnityEngine::Vector2 screenOffset; // 0x5C
		::System::Single entityID; // 0x64
		::UnityEngine::Vector3 curWorldPos; // 0x68
		::System::Single endTime; // 0x74
		::System::Single length; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGEPARTICLEITEM__CTOR_OFFSET))(this);
		}
	};
}
