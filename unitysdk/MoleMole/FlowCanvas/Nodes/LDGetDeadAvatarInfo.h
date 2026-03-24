#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA4F9AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO_START_OFFSET UNITYSDK_OFFSET(0xA4F9C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F9FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xA4FA090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0xA4FA0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0xA4FA0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0xA4FA0E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetDeadAvatarInfo_TypeDefinitionIndex = 42476;

	class LDGetDeadAvatarInfo : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* Indexes; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* DeadEntities; // 0xB0
		::FlowCanvas::FlowOutput* Output; // 0xB8
		::System::Boolean HasDeadAvatar; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Boolean _RegisterPorts_b__4_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__4_2()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _RegisterPorts_b__4_3()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDEADAVATARINFO__REGISTERPORTS_B__4_3_OFFSET))(this);
		}
	};
}
