#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A65D4F0)
#define NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A65D740)
#define NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65DAC0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetCloserGameObjectInList_TypeDefinitionIndex = 25945;

	class GetCloserGameObjectInList : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* list; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETCLOSERGAMEOBJECTINLIST_ONEXECUTE_OFFSET))(this);
		}
	};
}
