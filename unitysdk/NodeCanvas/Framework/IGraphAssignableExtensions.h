#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IGraphAssignable; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_AUTOLINKBYNAME_OFFSET UNITYSDK_OFFSET(0x1926FB30)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_CHECKINSTANCE_OFFSET UNITYSDK_OFFSET(0x19264E60)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYPAUSESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1926AD40)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYREADMAPPEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x192663F0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYRESUMESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1926AF00)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTARTSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1926EF10)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTOPSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1926AA20)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYUPDATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1926F3A0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYWRITEMAPPEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x19265810)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_VALIDATESUBGRAPHANDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1926F710)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IGraphAssignableExtensions_TypeDefinitionIndex = 26778;

	class IGraphAssignableExtensions : public ::System::Object
	{
	public:
		static ::NodeCanvas::Framework::Graph* CheckInstance(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_CHECKINSTANCE_OFFSET))(assignable);
		}

		static ::System::Boolean TryStartSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable, ::UnityEngine::Component* agent, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*, ::UnityEngine::Component*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTARTSUBGRAPH_OFFSET))(assignable, agent, callback);
		}

		static ::System::Boolean TryStopSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTOPSUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryPauseSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYPAUSESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryResumeSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYRESUMESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryUpdateSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYUPDATESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Void TryWriteMappedVariables(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYWRITEMAPPEDVARIABLES_OFFSET))(assignable);
		}

		static ::System::Void TryReadMappedVariables(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYREADMAPPEDVARIABLES_OFFSET))(assignable);
		}

		static ::System::Void ValidateSubGraphAndParameters(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_VALIDATESUBGRAPHANDPARAMETERS_OFFSET))(assignable);
		}

		static ::System::Void AutoLinkByName(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_AUTOLINKBYNAME_OFFSET))(assignable);
		}
	};
}
