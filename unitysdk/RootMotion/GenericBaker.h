#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Baker.h"

namespace RootMotion { class BakerTransform; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_GENERICBAKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A81B0F0)
#define ROOTMOTION_GENERICBAKER_BAKEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A81B870)
#define ROOTMOTION_GENERICBAKER_GETCHARACTERROOT_OFFSET UNITYSDK_OFFSET(0x1A81BA00)
#define ROOTMOTION_GENERICBAKER_ISIGNORED_OFFSET UNITYSDK_OFFSET(0x1A81B6E0)
#define ROOTMOTION_GENERICBAKER_ONSETCURVES_OFFSET UNITYSDK_OFFSET(0x1A81BC00)
#define ROOTMOTION_GENERICBAKER_ONSETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1A81BC80)
#define ROOTMOTION_GENERICBAKER_ONSETLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1A81BB80)
#define ROOTMOTION_GENERICBAKER_ONSTARTBAKING_OFFSET UNITYSDK_OFFSET(0x1A81BA10)
#define ROOTMOTION_GENERICBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A81BD00)

namespace RootMotion
{
	inline static constexpr unsigned int GenericBaker_TypeDefinitionIndex = 34966;

	class GenericBaker : public ::RootMotion::Baker
	{
	public:
		::System::Boolean markAsLegacy; // 0x90
		::UnityEngine::Transform* root; // 0x98
		::UnityEngine::Transform* rootNode; // 0xA0
		::Il2CppArray<::UnityEngine::Transform*>* ignoreList; // 0xA8
		::Il2CppArray<::UnityEngine::Transform*>* bakePositionList; // 0xB0
		::Il2CppArray<::RootMotion::BakerTransform*>* children; // 0xB8
		::RootMotion::BakerTransform* rootChild; // 0xC0
		::System::Int32 rootChildIndex; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetCharacterRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_GETCHARACTERROOT_OFFSET))(this);
		}

		::System::Void OnStartBaking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_ONSTARTBAKING_OFFSET))(this);
		}

		::System::Void OnSetLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_ONSETLOOPFRAME_OFFSET))(this, time);
		}

		::System::Void OnSetCurves(::UnityEngine::AnimationClip*& clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_ONSETCURVES_OFFSET))(this, clip);
		}

		::System::Void OnSetKeyframes(::System::Single time, ::System::Boolean lastFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_ONSETKEYFRAMES_OFFSET))(this, time, lastFrame);
		}

		::System::Boolean IsIgnored(::UnityEngine::Transform* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_ISIGNORED_OFFSET))(this, t);
		}

		::System::Boolean BakePosition(::UnityEngine::Transform* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_GENERICBAKER_BAKEPOSITION_OFFSET))(this, t);
		}
	};
}
