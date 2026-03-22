#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9386560)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93865A0)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET UNITYSDK_OFFSET(0x93866E0)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET UNITYSDK_OFFSET(0x93865B0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex = 55357;

	class UITriDiceOracleCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITriDiceOracleCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITriDiceOracleCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F80);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F88);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetRewardIcon_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET))(this);
		}

		::System::Void _OnMainBtnClicked_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET))(this);
		}
	};
}
