#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF32BCC5C168925E_Struct_2_52459899DB7358B9.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_EF32BCC5C168925E_Class_1_952159D7CEC2FC80;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class LevelSectionGroupData; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE_MOLEMOLE_FLOWCANVAS_NODES_ISCENEPERFORMCOROUTINEPROVIDER_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xF1A77D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xF1A70C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1A77B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__NEWINVOKE_OFFSET UNITYSDK_OFFSET(0xF1A73F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0xF1A7840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__WRAPCALLBACK_OFFSET UNITYSDK_OFFSET(0xF1A72C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_0_OFFSET UNITYSDK_OFFSET(0xF1A7870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_1_OFFSET UNITYSDK_OFFSET(0xF1A78B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_2_OFFSET UNITYSDK_OFFSET(0xF1A78F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScenePerformNode_TypeDefinitionIndex = 72874;

	class LDScenePerformNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* realPlayOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityInput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::Class_1_EF32BCC5C168925E_Class_1_952159D7CEC2FC80* _performRuntime; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* StartScenePerform; // 0xC8
		::FlowCanvas::FlowOutput* notPlayOutput; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsSkipBanner; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsBannerOn; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::LevelSectionGroupData*>* sectionInput; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::Class_1_EF32BCC5C168925E_Struct_2_52459899DB7358B9 _WrapCallback()
		{
			return ((::Class_1_EF32BCC5C168925E_Struct_2_52459899DB7358B9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__WRAPCALLBACK_OFFSET))(this);
		}

		::System::Void _NewInvoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__NEWINVOKE_OFFSET))(this, f);
		}

		::UnityEngine::Coroutine* MoleMole_FlowCanvas_Nodes_IScenePerformCoroutineProvider_StartCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE_MOLEMOLE_FLOWCANVAS_NODES_ISCENEPERFORMCOROUTINEPROVIDER_STARTCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __WrapCallback_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_0_OFFSET))(this);
		}

		::System::Void __WrapCallback_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_1_OFFSET))(this);
		}

		::System::Void __WrapCallback_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMNODE___WRAPCALLBACK_B__10_2_OFFSET))(this);
		}
	};
}
