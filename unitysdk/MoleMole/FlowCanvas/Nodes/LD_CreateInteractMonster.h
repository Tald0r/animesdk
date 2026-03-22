#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDCreateMonsterSyncNode.h"

class Class_1_87C7E5A87E686986_Class_1_1EA32B1BCD0B78FD;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_GETINTERACTFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x6AF1710)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x6AF17D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x6AF0840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREINTERACTOBJECTS_OFFSET UNITYSDK_OFFSET(0x6AF14B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6AF06B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x6AF0E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CALLMONSTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x6AF0DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AF1DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x6AF1D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x6AF1AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERINTERACTPORTS_OFFSET UNITYSDK_OFFSET(0x6AF0900)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERMONSTERPORTS_OFFSET UNITYSDK_OFFSET(0x6AF08A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x6AF1E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_0_OFFSET UNITYSDK_OFFSET(0x6AF1EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_1_OFFSET UNITYSDK_OFFSET(0x6AF1F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6AF1FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE__CALLMONSTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x6AF1F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_0_OFFSET UNITYSDK_OFFSET(0x6AF1EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_1_OFFSET UNITYSDK_OFFSET(0x6AF1ED0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateInteractMonster_TypeDefinitionIndex = 70257;

	class LD_CreateInteractMonster : public ::MoleMole::FlowCanvas::Nodes::LDCreateMonsterSyncNode
	{
	public:
		static ::System::Int32* StaticGet___InteractIDKEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LD_CreateInteractMonster_TypeDefinitionIndex)->GetStaticField(0xC350);
		}
		// static const ::System::Int32 UPDATE_VALUE_MAGIC_NUMBER = 0x699; // 0x0
		::FlowCanvas::ValueInput_1<::System::String*>* interactGroupName; // 0xF8
		::System::String* _GroupName; // 0x100
		::FlowCanvas::FlowOutput* onInteract; // 0x108
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGlobalMonopoly; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0x118
		::MoleMole::Config::InteractEntry* entry; // 0x120
		::FlowCanvas::FlowOutput* output; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0x130
		::Class_1_87C7E5A87E686986_Class_1_1EA32B1BCD0B78FD* _interactParam; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0x140
		::System::String* inputInteractKey; // 0x148
		::FlowCanvas::ValueInput_1<::System::String*>* interactTagName; // 0x150
		::FlowCanvas::FlowOutput* onInteractForbidden; // 0x158
		::System::Collections::Generic::List_1<::System::String*>* abilityNameList; // 0x160
		::System::Int32 _GroupItemID; // 0x168
		::System::Single _InteractStartTime; // 0x16C
		::System::Boolean isBindEvent; // 0x170
		::System::Single _lastUpdateResource; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterMonsterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERMONSTERPORTS_OFFSET))(this);
		}

		::System::Void _CallMonsterOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CALLMONSTEROUTPUT_OFFSET))(this);
		}

		::System::Void _RegisterInteractPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERINTERACTPORTS_OFFSET))(this);
		}

		::System::Void PrepareInteractObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREINTERACTOBJECTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_START_INTERACT_OFFSET))(this, f);
		}

		::System::Single GetInteractFloatParam(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_GETINTERACTFLOATPARAM_OFFSET))(this, key);
		}

		::System::Void OnEvent(::System::UInt32 from, ::System::UInt32 to, ::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_ONEVENT_OFFSET))(this, from, to, msg, value);
		}

		::System::Void _OnSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__ONSUCCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}

		::System::Int32 __RegisterInteractPorts_b__24_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_0_OFFSET))(this);
		}

		::Class_1_87C7E5A87E686986_Class_1_1EA32B1BCD0B78FD* __RegisterInteractPorts_b__24_1()
		{
			return ((::Class_1_87C7E5A87E686986_Class_1_1EA32B1BCD0B78FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_1_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_0_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_1_OFFSET))(this);
		}

		::System::Void __base__CallMonsterOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE__CALLMONSTEROUTPUT_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
