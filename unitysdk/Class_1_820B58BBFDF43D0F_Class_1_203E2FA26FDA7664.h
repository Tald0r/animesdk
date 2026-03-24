#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0;
namespace UnityEngine { class GameObject; }

#define CLASS_1_820B58BBFDF43D0F_CLASS_1_203E2FA26FDA7664_METHOD_1_04152106C1654E73_OFFSET UNITYSDK_OFFSET(0x700E650)
#define CLASS_1_820B58BBFDF43D0F_CLASS_1_203E2FA26FDA7664__CTOR_OFFSET UNITYSDK_OFFSET(0x700E640)

inline static constexpr unsigned int Class_1_820B58BBFDF43D0F_Class_1_203E2FA26FDA7664_TypeDefinitionIndex = 45376;

class Class_1_820B58BBFDF43D0F_Class_1_203E2FA26FDA7664 : public ::System::Object
{
public:
	::Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_203E2FA26FDA7664__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04152106C1654E73(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_203E2FA26FDA7664_METHOD_1_04152106C1654E73_OFFSET))(this, a1, a2);
	}
};
