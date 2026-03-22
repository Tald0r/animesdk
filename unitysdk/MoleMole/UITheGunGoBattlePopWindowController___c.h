#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_14;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACD3730)
#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACD3770)
#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__GOBATTLE_B__13_0_OFFSET UNITYSDK_OFFSET(0xACD3780)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex = 43215;

	class UITheGunGoBattlePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_14*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_14*>**)Il2CppClass::FromTypeDefinitionIndex(UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x302A0);
		}
		static ::MoleMole::UITheGunGoBattlePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UITheGunGoBattlePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x302A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoBattle_b__13_0(::Class_3_48A3D3A34C52331D_14* res)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__GOBATTLE_B__13_0_OFFSET))(this, res);
		}
	};
}
