#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E18C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6E18CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x6E18CD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroGetRoomIsImmediateFight___c_TypeDefinitionIndex = 70228;

	class LDLevelZeroGetRoomIsImmediateFight___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Boolean>** StaticGet___9__0_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDLevelZeroGetRoomIsImmediateFight___c_TypeDefinitionIndex)->GetStaticField(0x43F30);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIsImmediateFight___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIsImmediateFight___c**)Il2CppClass::FromTypeDefinitionIndex(LDLevelZeroGetRoomIsImmediateFight___c_TypeDefinitionIndex)->GetStaticField(0x43F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMISIMMEDIATEFIGHT___C__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
