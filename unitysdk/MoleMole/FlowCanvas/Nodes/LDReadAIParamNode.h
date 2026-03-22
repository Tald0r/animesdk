#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA5E94E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E96E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadAIParamNode_TypeDefinitionIndex = 78784;

	class LDReadAIParamNode : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Object*, ::MoleMole::Battle::Entity*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE__CTOR_OFFSET))(this);
		}

		::System::Object* Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName)
		{
			return ((::System::Object*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE_INVOKE_OFFSET))(this, entity, paramName);
		}
	};
}
