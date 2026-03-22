#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_98AF17B046D48248_CLASS_1_43B631362B1092AA_METHOD_1_75F61EAE4CE239AC_OFFSET UNITYSDK_OFFSET(0xA204C90)
#define CLASS_1_98AF17B046D48248_CLASS_1_43B631362B1092AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA204C80)

inline static constexpr unsigned int Class_1_98AF17B046D48248_Class_1_43B631362B1092AA_TypeDefinitionIndex = 70505;

class Class_1_98AF17B046D48248_Class_1_43B631362B1092AA : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action_1<::Foundation::AssetRequestHandle>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_CLASS_1_43B631362B1092AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75F61EAE4CE239AC(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_CLASS_1_43B631362B1092AA_METHOD_1_75F61EAE4CE239AC_OFFSET))(this, a1, a2);
	}
};
