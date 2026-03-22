#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_C14A0318DCE59ECF__CTOR_OFFSET UNITYSDK_OFFSET(0xA684AA0)

inline static constexpr unsigned int Class_1_C14A0318DCE59ECF_TypeDefinitionIndex = 43614;

class Class_1_C14A0318DCE59ECF : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Behaviour*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C14A0318DCE59ECF__CTOR_OFFSET))(this);
	}
};
