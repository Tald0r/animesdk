#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_62D8F6C782574A16_METHOD_2_14BA6038C5C2424B_OFFSET UNITYSDK_OFFSET(0xB4881B0)
#define CLASS_2_62D8F6C782574A16_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB4882D0)
#define CLASS_2_62D8F6C782574A16_METHOD_2_3DB1599299624C70_OFFSET UNITYSDK_OFFSET(0xB487C00)
#define CLASS_2_62D8F6C782574A16_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0xB4882F0)
#define CLASS_2_62D8F6C782574A16_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xB4882E0)
#define CLASS_2_62D8F6C782574A16_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB4882C0)
#define CLASS_2_62D8F6C782574A16_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB487AD0)
#define CLASS_2_62D8F6C782574A16_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB487B70)
#define CLASS_2_62D8F6C782574A16_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB487E00)
#define CLASS_2_62D8F6C782574A16__CTOR_OFFSET UNITYSDK_OFFSET(0xB4882B0)

inline static constexpr unsigned int Class_2_62D8F6C782574A16_TypeDefinitionIndex = 66699;

class Class_2_62D8F6C782574A16 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3DB1599299624C70(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_3DB1599299624C70_OFFSET))(this, a1);
	}

	::System::Void Method_2_14BA6038C5C2424B(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_14BA6038C5C2424B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D8F6C782574A16_METHOD_2_55B8349E0B606444_OFFSET))(this);
	}
};
