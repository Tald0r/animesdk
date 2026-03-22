#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3EF950)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EF990)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__SHOWROTATETIP_B__49_0_OFFSET UNITYSDK_OFFSET(0xC3EF9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController___c_TypeDefinitionIndex = 48499;

	class UITriDiceOracleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITriDiceOracleDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UITriDiceOracleDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32B00);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__49_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _ShowRotateTip_b__49_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER___C__SHOWROTATETIP_B__49_0_OFFSET))(this);
		}
	};
}
