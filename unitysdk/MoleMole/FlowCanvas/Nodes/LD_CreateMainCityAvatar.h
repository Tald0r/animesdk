#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_BEGIN_OFFSET UNITYSDK_OFFSET(0xB5E1840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xB5E2A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB5E1620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_TRYADDAVATARGUIDEITEM_OFFSET UNITYSDK_OFFSET(0xB5E3170)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E3260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0xB5E3280)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0xB5E32C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateMainCityAvatar_TypeDefinitionIndex = 71033;

	class LD_CreateMainCityAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* OverrideAIPath; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _notShowAvatarGuideItem; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* MainCityAvatarId; // 0xB8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* Offset; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* BornPosByEntity; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::FlowOutput* finishOutput; // 0xD8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xE0
		::MoleMole::Battle::Entity* createEntity; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* BornPosSpawnPoint; // 0xF0
		::System::UInt32 uFightID; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void TryAddAvatarGuideItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR_TRYADDAVATARGUIDEITEM_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__11_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEMAINCITYAVATAR__REGISTERPORTS_B__11_1_OFFSET))(this);
		}
	};
}
