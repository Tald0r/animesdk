#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Task; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS217_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2C220)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS217_0__GETTASKSINELEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x19C2C230)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass217_0_TypeDefinitionIndex = 27311;

	class Graph___c__DisplayClass217_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS217_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetTasksInElement_b__0(::System::Object* o, ::ParadoxNotion::Serialization::FullSerializer::fsData* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS217_0__GETTASKSINELEMENT_B__0_OFFSET))(this, o, d);
		}
	};
}
