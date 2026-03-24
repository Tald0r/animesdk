#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BB06AC82A483D3B9_METHOD_2_570F3A4565DFAC7B_OFFSET UNITYSDK_OFFSET(0xBCB52F0)
#define CLASS_2_BB06AC82A483D3B9_METHOD_2_8004DCF281BC6BBD_OFFSET UNITYSDK_OFFSET(0xBCB5060)
#define CLASS_2_BB06AC82A483D3B9_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xBCB5370)
#define CLASS_2_BB06AC82A483D3B9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBCB4DD0)
#define CLASS_2_BB06AC82A483D3B9__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB5050)

inline static constexpr unsigned int Class_2_BB06AC82A483D3B9_TypeDefinitionIndex = 65545;

class Class_2_BB06AC82A483D3B9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB06AC82A483D3B9__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BB06AC82A483D3B9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_BB06AC82A483D3B9*> Method_2_8004DCF281BC6BBD(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Transform* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_BB06AC82A483D3B9*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_BB06AC82A483D3B9_METHOD_2_8004DCF281BC6BBD_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_570F3A4565DFAC7B(::UnityEngine::Transform* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_BB06AC82A483D3B9_METHOD_2_570F3A4565DFAC7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BB06AC82A483D3B9_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
