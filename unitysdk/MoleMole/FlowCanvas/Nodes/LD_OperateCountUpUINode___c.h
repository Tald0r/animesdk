#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E8BBB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8BBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x6E8BC00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OperateCountUpUINode___c_TypeDefinitionIndex = 67148;

	class LD_OperateCountUpUINode___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LD_OperateCountUpUINode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_OperateCountUpUINode___c**)Il2CppClass::FromTypeDefinitionIndex(LD_OperateCountUpUINode___c_TypeDefinitionIndex)->GetStaticField(0x34000);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Single>** StaticGet___9__3_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LD_OperateCountUpUINode___c_TypeDefinitionIndex)->GetStaticField(0x34008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__3_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE___C__REGISTERPORTS_B__3_1_OFFSET))(this);
		}
	};
}
