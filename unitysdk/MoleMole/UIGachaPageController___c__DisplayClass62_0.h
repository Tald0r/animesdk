#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_758D4E94CC1C6B2A;
class Class_3_AE02BC8285203464_8;
namespace MoleMole { class UIGachaPageController; }
namespace System { class String; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF1EC6A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_B__2_OFFSET UNITYSDK_OFFSET(0xF1EC6B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET UNITYSDK_OFFSET(0xF1ED140)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET UNITYSDK_OFFSET(0xF1ECC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass62_0_TypeDefinitionIndex = 55224;

	class UIGachaPageController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Class_2_758D4E94CC1C6B2A* weaponConfig; // 0x10
		::MoleMole::UIGachaPageController* __4__this; // 0x18
		::Class_3_AE02BC8285203464_8* gacha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSpecialPanel_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_B__2_OFFSET))(this);
		}

		::System::Boolean _RefreshSpecialPanel_g__ShouldWeaponShowSP_0(::Class_2_758D4E94CC1C6B2A*& template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_758D4E94CC1C6B2A*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET))(this, template_);
		}

		::System::Boolean _RefreshSpecialPanel_g__TryGetWeaponGachaDemoVideoPath_1(::System::Int32 gachaID, ::System::String*& videoPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET))(this, gachaID, videoPath);
		}
	};
}
