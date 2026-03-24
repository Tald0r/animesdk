#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphRuntimeHelper_GraphBinaryMode.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_CHECKISSLOWDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A608960)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_GET_GET_DEFAULTMODE_OFFSET UNITYSDK_OFFSET(0x1A608870)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_HASBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1A608B30)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_MARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1A608900)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_RESETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1A608A50)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_SETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1A6089F0)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_UNMARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1A608950)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A608790)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphRuntimeHelper_TypeDefinitionIndex = 26810;

	class GraphRuntimeHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_OpenDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A0);
		}
		static ::System::Boolean* StaticGet_OpenOptimizeDeserializeNodes()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A1);
		}
		static ::System::Boolean* StaticGet_IsBatchMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A2);
		}
		static ::System::Boolean* StaticGet_OpenRuntimeBinaryDeserialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A3);
		}
		static ::System::Boolean* StaticGet_OpenBinarySerialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A4);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet_s_DefaultRuntimeMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49A8);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet__sCurrentGraphBinaryMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49AC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void MarkOptimizeTag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_MARKOPTIMIZETAG_OFFSET))();
		}

		static ::System::Void UnMarkOptimizeTag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_UNMARKOPTIMIZETAG_OFFSET))();
		}

		static ::System::Boolean CheckIsSlowDeserialize()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_CHECKISSLOWDESERIALIZE_OFFSET))();
		}

		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode get_Get_DefaultMode()
		{
			return ((::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_GET_GET_DEFAULTMODE_OFFSET))();
		}

		static ::System::Void SetBinaryMode(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode inMode)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_SETBINARYMODE_OFFSET))(inMode);
		}

		static ::System::Void ResetBinaryMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_RESETBINARYMODE_OFFSET))();
		}

		static ::System::Boolean HasBinaryMode(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode qryMode)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_HASBINARYMODE_OFFSET))(qryMode);
		}
	};
}
