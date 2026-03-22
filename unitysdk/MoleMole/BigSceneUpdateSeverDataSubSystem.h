#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_0301145851E02767.h"
#include "unitysdk/Struct_2_745325AFD7021EFB.h"

class Class_3_768DB2EE9B72C12D;
class Class_3_E9A48D70456787C0;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ADDAVATARFIGHTUNIT_OFFSET UNITYSDK_OFFSET(0xC30CC80)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_GET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0xC30C670)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_MARKFORCEUPDATEMUSTLOGOUT_OFFSET UNITYSDK_OFFSET(0xC30C690)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC30C6F0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0xC30C680)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET UNITYSDK_OFFSET(0xC30CFD0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEABILITYSPECIALCHANGEDDATA_OFFSET UNITYSDK_OFFSET(0xC30C9A0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOAD_OFFSET UNITYSDK_OFFSET(0xC30C7A0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC30D320)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC30D380)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneUpdateSeverDataSubSystem_TypeDefinitionIndex = 40321;

	class BigSceneUpdateSeverDataSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneUpdateSeverDataSubSystem*>
	{
	public:
		// static const ::System::Single CheckDirtyInterval; // 0x0
		::Class_3_E9A48D70456787C0* _req; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarIDToAvatarFightUnitIndexCache; // 0x18
		::System::Single _checkDirtyTimer; // 0x20
		::System::Boolean _IsInForceUpdateMustLogoutState_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInForceUpdateMustLogoutState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_GET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET))(this);
		}

		::System::Void set_IsInForceUpdateMustLogoutState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET))(this, value);
		}

		::System::Void MarkForceUpdateMustLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_MARKFORCEUPDATEMUSTLOGOUT_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void Upload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOAD_OFFSET))(this);
		}

		::System::Void UpdateAbilitySpecialChangedData(::Struct_2_0301145851E02767 asKey, ::Struct_2_745325AFD7021EFB asValue)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEABILITYSPECIALCHANGEDDATA_OFFSET))(this, asKey, asValue);
		}

		::System::Void AddAvatarFightUnit(::Struct_2_0301145851E02767 key, ::Struct_2_745325AFD7021EFB value, ::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ADDAVATARFIGHTUNIT_OFFSET))(this, key, value, avatar);
		}

		static ::System::Void StoreAbilitySpecial(::Class_1_516A565475879095<::System::String*, ::Class_3_768DB2EE9B72C12D*>* abilities, ::Struct_2_0301145851E02767 key, ::Struct_2_745325AFD7021EFB value)
		{
			return ((::System::Void(*)(::Class_1_516A565475879095<::System::String*, ::Class_3_768DB2EE9B72C12D*>*, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET))(abilities, key, value);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
