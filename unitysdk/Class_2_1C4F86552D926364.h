#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_1C4F86552D926364_METHOD_2_4C3A09BDCDF5D131_OFFSET UNITYSDK_OFFSET(0x68F5A10)
#define CLASS_2_1C4F86552D926364_METHOD_2_C88CFC3F52997917_OFFSET UNITYSDK_OFFSET(0x68F5A90)
#define CLASS_2_1C4F86552D926364_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x68F5A80)
#define CLASS_2_1C4F86552D926364_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x68F5740)
#define CLASS_2_1C4F86552D926364__CTOR_OFFSET UNITYSDK_OFFSET(0x68F5A00)

inline static constexpr unsigned int Class_2_1C4F86552D926364_TypeDefinitionIndex = 42314;

class Class_2_1C4F86552D926364 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C4F86552D926364__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C4F86552D926364_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4C3A09BDCDF5D131(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_1C4F86552D926364_METHOD_2_4C3A09BDCDF5D131_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C4F86552D926364_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_1C4F86552D926364*> Method_2_C88CFC3F52997917(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_1C4F86552D926364*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_1C4F86552D926364_METHOD_2_C88CFC3F52997917_OFFSET))(a1, a2);
	}
};
