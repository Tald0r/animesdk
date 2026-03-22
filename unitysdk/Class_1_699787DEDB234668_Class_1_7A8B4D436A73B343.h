#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_699787DEDB234668;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_699787DEDB234668_CLASS_1_7A8B4D436A73B343_METHOD_1_9DA77D4B003FEDF8_OFFSET UNITYSDK_OFFSET(0x9C26350)
#define CLASS_1_699787DEDB234668_CLASS_1_7A8B4D436A73B343__CTOR_OFFSET UNITYSDK_OFFSET(0x9C26340)

inline static constexpr unsigned int Class_1_699787DEDB234668_Class_1_7A8B4D436A73B343_TypeDefinitionIndex = 40532;

class Class_1_699787DEDB234668_Class_1_7A8B4D436A73B343 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_1_699787DEDB234668* Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_7A8B4D436A73B343__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DA77D4B003FEDF8(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_7A8B4D436A73B343_METHOD_1_9DA77D4B003FEDF8_OFFSET))(this, a1, a2);
	}
};
