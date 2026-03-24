#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C5A03A90BB5E900.h"
#include "unitysdk/Struct_2_A7DCC2EAB8522504.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationPageController___c__DisplayClass33_0; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA6DD60)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0xAA6DD70)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0xAA6DE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_1_TypeDefinitionIndex = 38866;

	class UIUrbanMapNavigationPageController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapNavigationPageController___c__DisplayClass33_0* CS___8__locals1; // 0x10
		::System::Action_1<::Struct_2_2C5A03A90BB5E900>* __9__3; // 0x18
		::System::Action_1<::Struct_2_2C5A03A90BB5E900>* __9__4; // 0x20
		::Struct_2_A7DCC2EAB8522504 sMapTrackInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__3(::Struct_2_2C5A03A90BB5E900 res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2C5A03A90BB5E900))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET))(this, res);
		}

		::System::Void _OnSkipFadeInAnimation_b__4(::Struct_2_2C5A03A90BB5E900 res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2C5A03A90BB5E900))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__4_OFFSET))(this, res);
		}
	};
}
