#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D_METHOD_1_A8C9BB9577EBDB48_OFFSET UNITYSDK_OFFSET(0x8BC1600)
#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC15F0)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_Class_1_FBE45135863BD06D_TypeDefinitionIndex = 75907;

class Class_1_3AA6D6AFB7EF244D_Class_1_FBE45135863BD06D : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x20
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8C9BB9577EBDB48(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D_METHOD_1_A8C9BB9577EBDB48_OFFSET))(this, a1, a2);
	}
};
