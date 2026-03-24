#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_A73D2D9E34F55324_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0xB5469F0)
#define CLASS_2_A73D2D9E34F55324_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xB5469E0)
#define CLASS_2_A73D2D9E34F55324_METHOD_2_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0xB546530)
#define CLASS_2_A73D2D9E34F55324_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB546A00)
#define CLASS_2_A73D2D9E34F55324_METHOD_2_F848D92BB56369EE_OFFSET UNITYSDK_OFFSET(0xB5468C0)
#define CLASS_2_A73D2D9E34F55324_METHOD_2_FB4875CA59669F51_OFFSET UNITYSDK_OFFSET(0xB546A10)
#define CLASS_2_A73D2D9E34F55324_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB546300)
#define CLASS_2_A73D2D9E34F55324_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB546260)
#define CLASS_2_A73D2D9E34F55324_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB546470)
#define CLASS_2_A73D2D9E34F55324__CTOR_OFFSET UNITYSDK_OFFSET(0xB5468B0)

inline static constexpr unsigned int Class_2_A73D2D9E34F55324_TypeDefinitionIndex = 46104;

class Class_2_A73D2D9E34F55324 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::MonoEffectPluginFollowCamera* Field_2_3; // 0x10
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_A7836646989A4215_OFFSET))(this);
	}

	::System::Void Method_2_F848D92BB56369EE(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_F848D92BB56369EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_A73D2D9E34F55324*> Method_2_FB4875CA59669F51(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_A73D2D9E34F55324*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_A73D2D9E34F55324_METHOD_2_FB4875CA59669F51_OFFSET))(a1, a2, a3);
	}
};
