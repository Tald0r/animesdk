#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_9EBF632273D0F552;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9EBF632273D0F552_CLASS_1_E27181CF08E2881E_METHOD_1_90E24E53961A9779_OFFSET UNITYSDK_OFFSET(0x96B63B0)
#define CLASS_1_9EBF632273D0F552_CLASS_1_E27181CF08E2881E__CTOR_OFFSET UNITYSDK_OFFSET(0x96B63A0)

inline static constexpr unsigned int Class_1_9EBF632273D0F552_Class_1_E27181CF08E2881E_TypeDefinitionIndex = 45038;

class Class_1_9EBF632273D0F552_Class_1_E27181CF08E2881E : public ::System::Object
{
public:
	::Class_1_9EBF632273D0F552* Field_1_1; // 0x10
	::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_CLASS_1_E27181CF08E2881E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90E24E53961A9779(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_CLASS_1_E27181CF08E2881E_METHOD_1_90E24E53961A9779_OFFSET))(this, a1, a2);
	}
};
