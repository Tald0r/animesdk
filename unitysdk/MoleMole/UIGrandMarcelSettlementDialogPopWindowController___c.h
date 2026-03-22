#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D90520)
#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D90560)
#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_G__EXITNORMALBATTLE_16_0_OFFSET UNITYSDK_OFFSET(0x9D905A0)
#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__SETREWARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x9D90570)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelSettlementDialogPopWindowController___c_TypeDefinitionIndex = 53609;

	class UIGrandMarcelSettlementDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGrandMarcelSettlementDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelSettlementDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36B40);
		}
		static ::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetReward_b__14_0(::Class_1_0D6706375CDAAE8C* a, ::Class_1_0D6706375CDAAE8C* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__SETREWARD_B__14_0_OFFSET))(this, a, b);
		}

		::System::Void _OnClickOkBtn_g__ExitNormalBattle_16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_G__EXITNORMALBATTLE_16_0_OFFSET))(this);
		}
	};
}
