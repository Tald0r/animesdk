#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_FAB330A19FB8EDA0;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_FAB330A19FB8EDA0_CLASS_1_101F25051407CF3E_METHOD_1_C397B4345E8AEE05_OFFSET UNITYSDK_OFFSET(0xABEE9D0)
#define CLASS_1_FAB330A19FB8EDA0_CLASS_1_101F25051407CF3E__CTOR_OFFSET UNITYSDK_OFFSET(0xABEE9C0)

inline static constexpr unsigned int Class_1_FAB330A19FB8EDA0_Class_1_101F25051407CF3E_TypeDefinitionIndex = 72293;

class Class_1_FAB330A19FB8EDA0_Class_1_101F25051407CF3E : public ::System::Object
{
public:
	::Class_1_FAB330A19FB8EDA0* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB330A19FB8EDA0_CLASS_1_101F25051407CF3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C397B4345E8AEE05(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FAB330A19FB8EDA0_CLASS_1_101F25051407CF3E_METHOD_1_C397B4345E8AEE05_OFFSET))(this, a1, a2);
	}
};
