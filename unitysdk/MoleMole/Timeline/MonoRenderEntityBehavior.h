#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoRenderEntity;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_5F2840AE4F677063_OFFSET UNITYSDK_OFFSET(0x7AAA380)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x7AAA370)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7AAA360)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_927B092C347D3361_OFFSET UNITYSDK_OFFSET(0x7AAA260)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x7AAA4E0)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x7AAA070)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x7AAA190)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x7AA9FA0)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x7AAA240)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoRenderEntityBehavior_TypeDefinitionIndex = 65146;

	class MonoRenderEntityBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MonoRenderEntity* RenderEntity; // 0x18
		::UnityEngine::Transform* middlePoint; // 0x20
		::System::String* middlePointPath; // 0x28
		::UnityEngine::Transform* headBone; // 0x30
		::System::String* headBonePath; // 0x38
		::UnityEngine::Transform* preMiddlePoint; // 0x40
		::UnityEngine::Transform* preHead; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void Method_3_927B092C347D3361(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_927B092C347D3361_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_5F2840AE4F677063(::MonoRenderEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_5F2840AE4F677063_OFFSET))(this, a1);
		}

		::System::Void Method_3_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_3_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_A239DF324AF4215D_OFFSET))(this);
		}
	};
}
