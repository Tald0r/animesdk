#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
namespace MoleMole { class UISuibianTempleDeployTipsPopWindowController_AttrItem; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7349E0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA734A20)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__28_2_OFFSET UNITYSDK_OFFSET(0xA734A30)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__31_0_OFFSET UNITYSDK_OFFSET(0xA734B70)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex = 70076;

	class UISuibianTempleBuddyLevelupController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_240*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_240*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x30230);
		}
		static ::MoleMole::UISuibianTempleBuddyLevelupController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleBuddyLevelupController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x30238);
		}
		static ::System::Comparison_1<::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*>** StaticGet___9__28_2()
		{
			return (::System::Comparison_1<::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x30240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnClickBtn2_b__28_2(::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* l, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__28_2_OFFSET))(this, l, r);
		}

		::System::Int32 _SetConsume_b__31_0(::Class_2_208CC9941471731A_240* lhs, ::Class_2_208CC9941471731A_240* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_240*, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__31_0_OFFSET))(this, lhs, rhs);
		}
	};
}
