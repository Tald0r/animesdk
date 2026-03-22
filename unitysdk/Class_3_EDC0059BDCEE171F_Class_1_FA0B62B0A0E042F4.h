#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_DE6E731B8C5A5FB8.h"
#include "unitysdk/System/Object.h"

class Class_3_EDC0059BDCEE171F_Class_1_81CBBEDA2612F7CC_5;
class Class_4_932266083770655D;
namespace UnityEngine { class GameObject; }

#define CLASS_3_EDC0059BDCEE171F_CLASS_1_FA0B62B0A0E042F4_METHOD_1_D567FE8CCC20E445_OFFSET UNITYSDK_OFFSET(0x1ACB2150)
#define CLASS_3_EDC0059BDCEE171F_CLASS_1_FA0B62B0A0E042F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB2140)

inline static constexpr unsigned int Class_3_EDC0059BDCEE171F_Class_1_FA0B62B0A0E042F4_TypeDefinitionIndex = 80131;

class Class_3_EDC0059BDCEE171F_Class_1_FA0B62B0A0E042F4 : public ::System::Object
{
public:
	::Struct_2_DE6E731B8C5A5FB8 Field_1_0; // 0x10
	::Class_3_EDC0059BDCEE171F_Class_1_81CBBEDA2612F7CC_5* Field_1_2; // 0x48
	::Class_4_932266083770655D* Field_1_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC0059BDCEE171F_CLASS_1_FA0B62B0A0E042F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D567FE8CCC20E445(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_EDC0059BDCEE171F_CLASS_1_FA0B62B0A0E042F4_METHOD_1_D567FE8CCC20E445_OFFSET))(this, a1, a2);
	}
};
