#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class TextureSheet_TV_WallBehaviour; }
namespace System { class Object; }

#define CLASS_2_E57A0E7E8CB0F989_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xA0908E0)
#define CLASS_2_E57A0E7E8CB0F989_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA0908F0)
#define CLASS_2_E57A0E7E8CB0F989_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA0901D0)
#define CLASS_2_E57A0E7E8CB0F989_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA090270)
#define CLASS_2_E57A0E7E8CB0F989__CTOR_OFFSET UNITYSDK_OFFSET(0xA0908D0)

inline static constexpr unsigned int Class_2_E57A0E7E8CB0F989_TypeDefinitionIndex = 41146;

class Class_2_E57A0E7E8CB0F989 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E57A0E7E8CB0F989_TypeDefinitionIndex)->GetStaticField(0x11EA0);
	}
	::MoleMole::Timeline::TextureSheet_TV_WallBehaviour* Field_2_2; // 0x10
	::System::Double Field_2_1; // 0x18
	::System::Double Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E57A0E7E8CB0F989__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E57A0E7E8CB0F989_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E57A0E7E8CB0F989_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E57A0E7E8CB0F989_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E57A0E7E8CB0F989_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
