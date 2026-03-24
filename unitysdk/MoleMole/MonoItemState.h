#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoItemStateItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOITEMSTATE_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB9A46B0)
#define MOLEMOLE_MONOITEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A4830)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemState_TypeDefinitionIndex = 56825;

	class MonoItemState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoItemStateItem*>* Items; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMSTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMSTATE_GETTRANSFORM_OFFSET))(this, a1);
		}
	};
}
