#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD7FD3C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_LOGERROR_OFFSET UNITYSDK_OFFSET(0xD7FD2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xD7FD150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FD7A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xD7FD7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0xD7FD7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityFromDataMap_TypeDefinitionIndex = 65894;

	class LDGetEntityFromDataMap : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* saveDataMapInput; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* nameInput; // 0xB8
		::System::Boolean getEntityResult; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void LogError(::System::String* logText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_LOGERROR_OFFSET))(this, logText);
		}

		::MoleMole::Battle::Entity* GetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP_GETENTITY_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__4_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__4_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYFROMDATAMAP__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
