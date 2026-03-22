#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class TweenRotation; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19A00DD0)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A01330)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A01390)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19A01340)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A00DC0)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A00DB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenRotation__Invoke_d__0_TypeDefinitionIndex = 26360;

	class TweenRotation__Invoke_d__0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::TweenRotation* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Transform* transform; // 0x20
		::ParadoxNotion::Animation::EaseType interpolation; // 0x28
		::UnityEngine::Vector3 rotation; // 0x2C
		::System::Single _t_5__2; // 0x38
		::System::Boolean relative; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Single duration; // 0x44
		::UnityEngine::Vector3 _from_5__3; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
