#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FAFA459B9E6E8CB0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshLink; }

#define CLASS_2_67FC18D32B1D1BAF_CLASS_1_1614FEAD2A2E65D5__CTOR_OFFSET UNITYSDK_OFFSET(0x6CF4BD0)

inline static constexpr unsigned int Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5_TypeDefinitionIndex = 59253;

class Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_FAFA459B9E6E8CB0>* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AI::NavMeshLink*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_CLASS_1_1614FEAD2A2E65D5__CTOR_OFFSET))(this);
	}
};
