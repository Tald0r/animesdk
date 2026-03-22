#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class MihoyoControlPlayableAsset; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_44F224DB0F498BE5_METHOD_2_3217ED96CCB7AF34_OFFSET UNITYSDK_OFFSET(0x6D579C0)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x6D57A50)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0x6D57BF0)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_724A16E7049181A0_OFFSET UNITYSDK_OFFSET(0x6D57C10)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x6D579B0)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x6D57C00)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x6D579A0)
#define CLASS_2_44F224DB0F498BE5_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0x6D57BE0)
#define CLASS_2_44F224DB0F498BE5_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x6D578F0)
#define CLASS_2_44F224DB0F498BE5_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x6D57850)
#define CLASS_2_44F224DB0F498BE5_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x6D57180)
#define CLASS_2_44F224DB0F498BE5__CTOR_OFFSET UNITYSDK_OFFSET(0x6D57990)

inline static constexpr unsigned int Class_2_44F224DB0F498BE5_TypeDefinitionIndex = 53167;

class Class_2_44F224DB0F498BE5 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::ParticleSystem* Field_2_5; // 0x10
	::System::Single Field_2_4; // 0x18
	::System::Single Field_2_1; // 0x1C
	::System::UInt32 Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Single Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5__CTOR_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3217ED96CCB7AF34(::UnityEngine::ParticleSystem* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_3217ED96CCB7AF34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_44F224DB0F498BE5*> Method_2_724A16E7049181A0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::ParticleSystem* a2, ::System::UInt32 a3, ::MoleMole::Timeline::MihoyoControlPlayableAsset* a4)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_44F224DB0F498BE5*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::MoleMole::Timeline::MihoyoControlPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_44F224DB0F498BE5_METHOD_2_724A16E7049181A0_OFFSET))(a1, a2, a3, a4);
	}
};
