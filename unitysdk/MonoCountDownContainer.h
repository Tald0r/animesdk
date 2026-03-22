#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MONOCOUNTDOWNCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0x73F8B90)
#define MONOCOUNTDOWNCONTAINER_CLOSETIMER_OFFSET UNITYSDK_OFFSET(0x73F9270)
#define MONOCOUNTDOWNCONTAINER_FORMATTIME_OFFSET UNITYSDK_OFFSET(0x73F8F50)
#define MONOCOUNTDOWNCONTAINER_OPENTIMER_OFFSET UNITYSDK_OFFSET(0x73F9130)
#define MONOCOUNTDOWNCONTAINER_PAUSE_OFFSET UNITYSDK_OFFSET(0x73F9320)
#define MONOCOUNTDOWNCONTAINER_TICKTIMER_OFFSET UNITYSDK_OFFSET(0x73F8C80)
#define MONOCOUNTDOWNCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x73F8C00)
#define MONOCOUNTDOWNCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x73F9390)

inline static constexpr unsigned int MonoCountDownContainer_TypeDefinitionIndex = 59448;

class MonoCountDownContainer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* timerText; // 0x18
	::System::Single countDownSenconds; // 0x20
	::System::Boolean timerStart; // 0x24
	::UnityEngine::GameObject* cacheObj; // 0x28
	::System::Boolean ignoreTimeScale; // 0x30
	::System::Boolean pause; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_UPDATE_OFFSET))(this);
	}

	::System::Void TickTimer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_TICKTIMER_OFFSET))(this);
	}

	::System::String* FormatTime(::System::Single time)
	{
		return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_FORMATTIME_OFFSET))(this, time);
	}

	::System::Void OpenTimer(::System::Single countDownTime, ::System::Boolean ignoreTimeScale)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_OPENTIMER_OFFSET))(this, countDownTime, ignoreTimeScale);
	}

	::System::Void CloseTimer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_CLOSETIMER_OFFSET))(this);
	}

	::System::Void Pause(::System::Boolean pauseState)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOCOUNTDOWNCONTAINER_PAUSE_OFFSET))(this, pauseState);
	}
};
