#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class ImageBehaviour; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1ADEBAF0)
#define UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1ADEB4E0)
#define UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_RESET_OFFSET UNITYSDK_OFFSET(0x1ADEB4C0)
#define UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADEBD30)
#define UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEBD20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImageMixerBehaviour_TypeDefinitionIndex = 29352;

	class ImageMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_color1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ImageMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x7760);
		}
		static ::System::Int32* StaticGet_color2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ImageMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x7764);
		}
		static ::System::Int32* StaticGet_secondTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ImageMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x7768);
		}
		static ::System::Boolean* StaticGet_allowProcessImg()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ImageMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x776C);
		}
		::UnityEngine::Sprite* defaultSprite; // 0x10
		::UnityEngine::Material* _material; // 0x18
		::UnityEngine::UI::Image* trackBinding; // 0x20
		::UnityEngine::Timeline::ImageBehaviour* _behaviour1; // 0x28
		::UnityEngine::Timeline::ImageBehaviour* _behaviour2; // 0x30
		::System::Single _weight2; // 0x38
		::System::Boolean firstFrameHappend; // 0x3C
		::System::Single _weight1; // 0x40
		::System::Int32 _handleBehaviorCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_RESET_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
