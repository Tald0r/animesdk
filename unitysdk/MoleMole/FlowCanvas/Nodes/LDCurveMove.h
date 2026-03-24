#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_AF7A56E03A4D3952;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BEIGIN_OFFSET UNITYSDK_OFFSET(0xB82A2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BREAK_OFFSET UNITYSDK_OFFSET(0xB82A4A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CACHECURVEMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB82A6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0xB82ABD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0xB82A3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB82A060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xB82A890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STOPANDCLEARCURVEMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB82A590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB82AC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0xB82AC70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0xB82ACA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0xB82ACD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_3_OFFSET UNITYSDK_OFFSET(0xB82AD00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMove_TypeDefinitionIndex = 66278;

	class LDCurveMove : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* start; // 0xA8
		::Class_3_AF7A56E03A4D3952* curveMoveComponent; // 0xB0
		::UnityEngine::Coroutine* coroutine; // 0xB8
		::FlowCanvas::FlowInput* breakInput; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutPut; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::FlowCanvas::FlowOutput* breakOutput; // 0xE0
		::FlowCanvas::FlowInput* restart; // 0xE8
		::MoleMole::Battle::Entity* cacheEntity; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* indexInput; // 0xF8
		::FlowCanvas::FlowOutput* finishOutput; // 0x100
		::System::Boolean finish; // 0x108
		::System::Boolean isStart; // 0x109

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BEIGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BREAK_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void CacheCurveMoveComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CACHECURVEMOVECOMPONENT_OFFSET))(this);
		}

		::System::Void StartMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STARTMOVE_OFFSET))(this);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void StopAndClearCurveMoveComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STOPANDCLEARCURVEMOVECOMPONENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_2_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__14_3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_3_OFFSET))(this);
		}
	};
}
