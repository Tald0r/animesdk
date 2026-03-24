#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0BA31736A3CCA24;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5EE330)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5EE370)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_0_OFFSET UNITYSDK_OFFSET(0xB5EE380)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_1_OFFSET UNITYSDK_OFFSET(0xB5EE3A0)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int HoundMiniGameWorld___c_TypeDefinitionIndex = 39126;

	class HoundMiniGameWorld___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x34110);
		}
		static ::MoleMole::MiniGame::HoundMiniGameWorld___c** StaticGet___9()
		{
			return (::MoleMole::MiniGame::HoundMiniGameWorld___c**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x34118);
		}
		static ::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_B0BA31736A3CCA24*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x34120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__31_0(::Class_1_B0BA31736A3CCA24* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B0BA31736A3CCA24*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_0_OFFSET))(this, val);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__31_1(::Class_1_B0BA31736A3CCA24* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B0BA31736A3CCA24*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_1_OFFSET))(this, val);
		}
	};
}
