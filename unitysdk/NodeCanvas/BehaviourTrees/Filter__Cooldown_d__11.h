#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::BehaviourTrees { class Filter; }

#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A088DF0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A088EA0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A088F00)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A088EB0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A088DE0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A088DD0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter__Cooldown_d__11_TypeDefinitionIndex = 26743;

	class Filter__Cooldown_d__11 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NodeCanvas::BehaviourTrees::Filter* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
