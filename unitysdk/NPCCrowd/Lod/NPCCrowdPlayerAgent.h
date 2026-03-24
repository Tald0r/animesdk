#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F35B080B137ECC46;
namespace System { class EventArgs; }

#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x63B1520)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x63B1700)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET UNITYSDK_OFFSET(0x63B1250)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x63B1B30)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET UNITYSDK_OFFSET(0x63B1970)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x63B1CF0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x63B17B0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET UNITYSDK_OFFSET(0x63B12D0)
#define NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x63B1D60)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPlayerAgent_TypeDefinitionIndex = 62488;

	class NPCCrowdPlayerAgent : public ::System::Object
	{
	public:
		::Class_3_F35B080B137ECC46* _playerCmp; // 0x10
		::UnityEngine::Vector3 curPos; // 0x18
		::UnityEngine::Vector3 lastPos; // 0x24
		::System::Int32 lastUpdateFrame; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT__CTOR_OFFSET))(this);
		}

		::Class_3_F35B080B137ECC46* get_playerCmp()
		{
			return ((::Class_3_F35B080B137ECC46*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GET_PLAYERCMP_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONINIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshPlayerCmp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_REFRESHPLAYERCMP_OFFSET))(this);
		}

		::System::Void OnLocalAvatarChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPLAYERAGENT_ONLOCALAVATARCHANGE_OFFSET))(this, args);
		}
	};
}
