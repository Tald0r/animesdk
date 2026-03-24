#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7CE8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CE8F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xA7CE900)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBattleBuddyNode___c_TypeDefinitionIndex = 69254;

	class LDGetBattleBuddyNode___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDGetBattleBuddyNode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDGetBattleBuddyNode___c**)Il2CppClass::FromTypeDefinitionIndex(LDGetBattleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x3B2C0);
		}
		static ::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>** StaticGet___9__1_0()
		{
			return (::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(LDGetBattleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x3B2C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__1_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET))(this);
		}
	};
}
