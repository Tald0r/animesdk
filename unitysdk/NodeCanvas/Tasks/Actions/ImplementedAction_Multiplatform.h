#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x19F5A910)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19F5AA10)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET UNITYSDK_OFFSET(0x19F5A8F0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x19F5AC90)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONINIT_OFFSET UNITYSDK_OFFSET(0x19F5AF70)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19F5B2C0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19F5B050)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19F5ACA0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x19F5ACC0)
#define NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5B2D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ImplementedAction_Multiplatform_TypeDefinitionIndex = 25755;

	class ImplementedAction_Multiplatform : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::Il2CppArray<::System::Object*>* args; // 0x60
		::ParadoxNotion::Serialization::SerializedMethodInfo* method; // 0x68
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBObjectParameter*>* parameters; // 0x70
		::NodeCanvas::Framework::Status actionStatus; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_targetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_TARGETMETHOD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONINIT_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_ONSTOP_OFFSET))(this);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_IMPLEMENTEDACTION_MULTIPLATFORM_SETMETHOD_OFFSET))(this, method);
		}
	};
}
