#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x17B727F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET UNITYSDK_OFFSET(0x17B72860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x17B72850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B72900)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextItem_TypeDefinitionIndex = 28851;

	class DamageTextSystem_DamageTextItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* refTransform; // 0x10
		::System::String* text; // 0x18
		::System::Action_2<::System::UInt32, ::System::Single>* onEnd; // 0x20
		::System::Single randomChangeTime; // 0x28
		::System::Single flash; // 0x2C
		::UnityEngine::Vector2 posScreenOffset; // 0x30
		::System::Int32 blockIndex; // 0x38
		::System::UInt32 isSkipDefAttack; // 0x3C
		::UnityEngine::Vector3 posWorldOffset; // 0x40
		::System::Single combineTextAddScale; // 0x4C
		::System::Single fadeoutInterval; // 0x50
		::System::Int32 blockOffset; // 0x54
		::UnityEngine::Matrix4x4 posXOffsets; // 0x58
		::System::UInt32 animType; // 0x98
		::UnityEngine::Matrix4x4 uvOffsets; // 0x9C
		::System::UInt32 isCombineDamageText; // 0xDC
		::UnityEngine::Vector3 refTransformInitPos; // 0xE0
		::System::Single fadeinTime; // 0xEC
		::System::Single startTime; // 0xF0
		::System::Single scale; // 0xF4
		::System::Int32 refTransformFollowType; // 0xF8
		::System::Single faceIndex; // 0xFC
		::System::Int32 bitCount; // 0x100
		::System::Single _textLength; // 0x104
		::UnityEngine::Vector3 curWorldPos; // 0x108
		::System::Single fadeinInterval; // 0x114
		::System::Single combineTextRootScale; // 0x118
		::System::Single charWidthOffset; // 0x11C
		::UnityEngine::Matrix4x4 trs; // 0x120
		::UnityEngine::Vector4 color; // 0x160
		::System::Single combineTextFadeOutStartTime; // 0x170
		::System::Single showTime; // 0x174
		::System::UInt32 entityId; // 0x178
		::System::Single endTime; // 0x17C
		::System::Single fadeoutTime; // 0x180
		::System::Boolean isCombineDamageTextDestroyed; // 0x184
		::System::Boolean isOnTop; // 0x185
		::System::Boolean isRandomChange; // 0x186
		::System::Boolean isInPool; // 0x187

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_textLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET))(this);
		}

		::System::Void set_textLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET))(this);
		}
	};
}
