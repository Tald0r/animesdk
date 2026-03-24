#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC33CF20)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC33CF60)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__GETBADGEMAP_B__1_0_OFFSET UNITYSDK_OFFSET(0xC33CF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyss2AchievementDialogWidgetController___c_TypeDefinitionIndex = 47781;

	class UIAbyss2AchievementDialogWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyss2AchievementDialogWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyss2AchievementDialogWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyss2AchievementDialogWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40550);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyss2AchievementDialogWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBadgeMap_b__1_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___C__GETBADGEMAP_B__1_0_OFFSET))(this, a, b);
		}
	};
}
