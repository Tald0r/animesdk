#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class Node; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C84BE0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C84C10)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETDEFINEDPARAMETERS_B__206_0_OFFSET UNITYSDK_OFFSET(0x19C84CC0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETLEAFNODES_B__203_0_OFFSET UNITYSDK_OFFSET(0x19C84C90)
#define NODECANVAS_FRAMEWORK_GRAPH___C__GETROOTNODES_B__202_0_OFFSET UNITYSDK_OFFSET(0x19C84C60)
#define NODECANVAS_FRAMEWORK_GRAPH___C__UPDATENODEIDS_B__160_0_OFFSET UNITYSDK_OFFSET(0x19C84C20)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c_TypeDefinitionIndex = 26027;

	class Graph___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NodeCanvas::Framework::BBParameter*, ::System::Boolean>** StaticGet___9__206_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::BBParameter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1E7D0);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>** StaticGet___9__202_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1E7D8);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Int32>** StaticGet___9__160_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1E7E0);
		}
		static ::NodeCanvas::Framework::Graph___c** StaticGet___9()
		{
			return (::NodeCanvas::Framework::Graph___c**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1E7E8);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>** StaticGet___9__203_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Node*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Graph___c_TypeDefinitionIndex)->GetStaticField(0x1E7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateNodeIDs_b__160_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Int32(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__UPDATENODEIDS_B__160_0_OFFSET))(this, n);
		}

		::System::Boolean _GetRootNodes_b__202_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETROOTNODES_B__202_0_OFFSET))(this, n);
		}

		::System::Boolean _GetLeafNodes_b__203_0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETLEAFNODES_B__203_0_OFFSET))(this, n);
		}

		::System::Boolean _GetDefinedParameters_b__206_0(::NodeCanvas::Framework::BBParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::BBParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__GETDEFINEDPARAMETERS_B__206_0_OFFSET))(this, p);
		}
	};
}
