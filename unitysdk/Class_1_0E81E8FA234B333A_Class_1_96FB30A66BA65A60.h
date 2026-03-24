#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_0E81E8FA234B333A;
class Class_1_11ED91AA14CD390E;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_0E81E8FA234B333A_CLASS_1_96FB30A66BA65A60_METHOD_1_7894FB0C3C567731_OFFSET UNITYSDK_OFFSET(0x124D4D10)
#define CLASS_1_0E81E8FA234B333A_CLASS_1_96FB30A66BA65A60__CTOR_OFFSET UNITYSDK_OFFSET(0x124D4D00)

inline static constexpr unsigned int Class_1_0E81E8FA234B333A_Class_1_96FB30A66BA65A60_TypeDefinitionIndex = 11877;

class Class_1_0E81E8FA234B333A_Class_1_96FB30A66BA65A60 : public ::System::Object
{
public:
	::Class_1_0E81E8FA234B333A* Field_1_1; // 0x10
	::System::Action_1<::Class_1_11ED91AA14CD390E*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A_CLASS_1_96FB30A66BA65A60__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7894FB0C3C567731(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A_CLASS_1_96FB30A66BA65A60_METHOD_1_7894FB0C3C567731_OFFSET))(this, a1, a2);
	}
};
