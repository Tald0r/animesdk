#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Audio/MonoSceneSoundItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_AUTOCOLLECTWAYPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x9B2D180)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_DRAWGIZMOSARROW_OFFSET UNITYSDK_OFFSET(0x9B2DA10)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_INIT_OFFSET UNITYSDK_OFFSET(0x9B2BEC0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9B2E0E0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONITEMACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x9B2BFE0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_REGISTER_OFFSET UNITYSDK_OFFSET(0x9B2D540)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9B2D780)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2E460)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SceneSound_WayPathToRTPC_TypeDefinitionIndex = 42445;

	class SceneSound_WayPathToRTPC : public ::MoleMole::Audio::MonoSceneSoundItem
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* wayPathPoints; // 0x70
		::System::String* rtpcName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC__CTOR_OFFSET))(this);
		}

		::System::Void AutoCollectWayPathPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_AUTOCOLLECTWAYPATHPOINTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_INIT_OFFSET))(this);
		}

		::System::Void OnItemActiveChanged(::System::Boolean newActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONITEMACTIVECHANGED_OFFSET))(this, newActive);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_REGISTER_OFFSET))(this);
		}

		::System::Void Unregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_UNREGISTER_OFFSET))(this);
		}

		::System::Void DrawGizmosArrow(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single arrwoAngle, ::System::Single arrowLen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_DRAWGIZMOSARROW_OFFSET))(this, p0, p1, arrwoAngle, arrowLen);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
