#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonsterHatredLineSubSystem_HatredLineState.h"
#include "unitysdk/System/Object.h"

class Class_3_B19369CC4AB45FA4;
class Class_3_F35B080B137ECC46;
class ScreenSpaceSplineRenderer;
namespace System { class String; }

#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x8B71B10)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_LINKTOWTARGET_OFFSET UNITYSDK_OFFSET(0x8B71660)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_UNLINK_OFFSET UNITYSDK_OFFSET(0x8B71A00)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8B71BC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterHatredLineSubSystem_HatredLineLinkData_TypeDefinitionIndex = 77312;

	class MonsterHatredLineSubSystem_HatredLineLinkData : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle SourceEntity; // 0x10
		::ScreenSpaceSplineRenderer* linkedSplineRenderer; // 0x20
		::MoleMole::EntityHandle TargetEntity; // 0x28
		::Class_3_F35B080B137ECC46* sourceCharacterModelComponent; // 0x38
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x40
		::MoleMole::MonsterHatredLineSubSystem_HatredLineState currentHatredLineState; // 0x48
		::System::Boolean assetLoaded; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA__CTOR_OFFSET))(this);
		}

		::System::Void LinkTowTarget(::System::String* enemyAttachPointName, ::System::String* playerAttachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_LINKTOWTARGET_OFFSET))(this, enemyAttachPointName, playerAttachPointName);
		}

		::System::Void Unlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_UNLINK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_CLEAR_OFFSET))(this);
		}
	};
}
