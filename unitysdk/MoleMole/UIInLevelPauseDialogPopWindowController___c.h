#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x80B79C0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x80B79F0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__61_0_OFFSET UNITYSDK_OFFSET(0x80B7A20)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__62_1_OFFSET UNITYSDK_OFFSET(0x80B7BC0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__62_2_OFFSET UNITYSDK_OFFSET(0x80B7CB0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__REFRESHRIDUSGOTBOO_B__2_0_OFFSET UNITYSDK_OFFSET(0x80B7A00)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__TRYOVERRIDETUTORIALGROUPLIST_RIDUSGOTBOO_B__3_0_OFFSET UNITYSDK_OFFSET(0x80B7A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex = 41752;

	class UIInLevelPauseDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__61_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327A0);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327A8);
		}
		static ::MoleMole::UIInLevelPauseDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327B0);
		}
		static ::System::Action** StaticGet___9__62_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327B8);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327C0);
		}
		static ::System::Action** StaticGet___9__62_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x327C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshRidusGotBoo_b__2_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__REFRESHRIDUSGOTBOO_B__2_0_OFFSET))(this, x);
		}

		::System::Boolean _TryOverrideTutorialGroupList_RidusGotBoo_b__3_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__TRYOVERRIDETUTORIALGROUPLIST_RIDUSGOTBOO_B__3_0_OFFSET))(this, x);
		}

		::System::Void _OnClickQuitBattleBtn_b__61_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__61_0_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__62_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__62_1_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__62_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__62_2_OFFSET))(this);
		}
	};
}
