#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOHOLLOWBOTTOMNOTIFY_START_OFFSET UNITYSDK_OFFSET(0x65C8CC0)
#define MONOHOLLOWBOTTOMNOTIFY_TRYSHOWBOTTOMPANEL_OFFSET UNITYSDK_OFFSET(0x65C8D80)
#define MONOHOLLOWBOTTOMNOTIFY_UPDATE_OFFSET UNITYSDK_OFFSET(0x65C8D20)
#define MONOHOLLOWBOTTOMNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x65C8EC0)

inline static constexpr unsigned int MonoHollowBottomNotify_TypeDefinitionIndex = 39080;

class MonoHollowBottomNotify : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY_UPDATE_OFFSET))(this);
	}

	::System::Void TryShowBottomPanel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWBOTTOMNOTIFY_TRYSHOWBOTTOMPANEL_OFFSET))(this);
	}
};
