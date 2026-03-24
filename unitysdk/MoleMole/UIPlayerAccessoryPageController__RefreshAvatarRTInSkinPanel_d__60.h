#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3A9F40)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__60_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__RefreshAvatarRTInSkinPanel_d__60_TypeDefinitionIndex = 39885;

	struct alignas(8) UIPlayerAccessoryPageController__RefreshAvatarRTInSkinPanel_d__60
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::AvatarShowSetting* _avatarSetting_5__2; // 0x20
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x28
		::Foundation::AssetPath _avatarPath_5__3; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x40
		::System::Int32 avatarID; // 0x48
		::System::UInt32 skinID; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__60_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__60_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
