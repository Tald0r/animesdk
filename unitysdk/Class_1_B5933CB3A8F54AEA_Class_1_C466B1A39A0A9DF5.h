#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_C466B1A39A0A9DF5_METHOD_1_34C9E59817062406_OFFSET UNITYSDK_OFFSET(0x15AA6EC0)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_C466B1A39A0A9DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA6EB0)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_C466B1A39A0A9DF5_TypeDefinitionIndex = 53609;

class Class_1_B5933CB3A8F54AEA_Class_1_C466B1A39A0A9DF5 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_1_3; // 0x18
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_1; // 0x20
	::Foundation::AssetPath Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_C466B1A39A0A9DF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_34C9E59817062406(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_C466B1A39A0A9DF5_METHOD_1_34C9E59817062406_OFFSET))(this, a1, a2);
	}
};
