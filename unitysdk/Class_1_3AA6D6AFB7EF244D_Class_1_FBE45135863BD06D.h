#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D_METHOD_1_A8C9BB9577EBDB48_OFFSET UNITYSDK_OFFSET(0xE7759A0)
#define CLASS_1_3AA6D6AFB7EF244D_CLASS_1_FBE45135863BD06D__CTOR_OFFSET UNITYSDK_OFFSET(0xE775990)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_Class_1_FBE45135863BD06D_TypeDefinitionIndex = 59952;

class Class_1_3AA6D6AFB7EF244D_Class_1_FBE45135863BD06D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_2; // 0x18
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
