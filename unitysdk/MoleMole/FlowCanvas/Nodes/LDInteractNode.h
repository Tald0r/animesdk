#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ADDINTERACT_OFFSET UNITYSDK_OFFSET(0xB89B650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xB89B070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0xB89B860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB89BB00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xB89B000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB89B2F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB89AFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREINTERACTMSG_OFFSET UNITYSDK_OFFSET(0xB89ACD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREINTERACTVALUE_OFFSET UNITYSDK_OFFSET(0xB89AE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB89A740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_START_OFFSET UNITYSDK_OFFSET(0xB89B5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0xB89B360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB89BD10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0xB89BD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xB89BDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB89BDF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInteractNode_TypeDefinitionIndex = 54370;

	class LDInteractNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0xA8
		::FlowCanvas::FlowOutput* _outPut; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0xB8
		::System::String* _interactID; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _entityInput; // 0xD0
		::System::Boolean isStart; // 0xD8
		::System::Boolean isBindEvent; // 0xD9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_START_OFFSET))(this);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void PrepareInteractMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREINTERACTMSG_OFFSET))(this);
		}

		::System::Void PrepareInteractValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREINTERACTVALUE_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_PREPAREDATA_OFFSET))(this);
		}

		::System::Void AddInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ADDINTERACT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEvent(::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE_ONEVENT_OFFSET))(this, msg, value);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
