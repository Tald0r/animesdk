#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_8;
class Class_3_D0B68EB9E337E202_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3791B0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3791F0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET UNITYSDK_OFFSET(0xC3792D0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xC379200)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex = 41933;

	class UIArcadeAchievementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_D0B68EB9E337E202_1*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_3_D0B68EB9E337E202_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFE0);
		}
		static ::MoleMole::UIArcadeAchievementPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeAchievementPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFE8);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_8*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_8*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::Class_1_7807B2B04302CD7B_8* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7807B2B04302CD7B_8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, id);
		}

		::System::Void _OnReceiveBtnClicked_b__9_0(::Class_3_D0B68EB9E337E202_1* itemMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D0B68EB9E337E202_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET))(this, itemMap);
		}
	};
}
