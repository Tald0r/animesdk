#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_96CE54D1B5F2FEE8;
class Class_3_EDC0059BDCEE171F;
class Class_4_932266083770655D;
namespace UnityEngine { class GameObject; }

#define CLASS_3_EDC0059BDCEE171F_CLASS_1_D065DA89A699AC6A_METHOD_1_5557080012D3E214_OFFSET UNITYSDK_OFFSET(0x1AF0CFE0)
#define CLASS_3_EDC0059BDCEE171F_CLASS_1_D065DA89A699AC6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0CFD0)

inline static constexpr unsigned int Class_3_EDC0059BDCEE171F_Class_1_D065DA89A699AC6A_TypeDefinitionIndex = 82198;

class Class_3_EDC0059BDCEE171F_Class_1_D065DA89A699AC6A : public ::System::Object
{
public:
	::Class_4_932266083770655D* Field_1_2; // 0x10
	::Class_3_EDC0059BDCEE171F* Field_1_0; // 0x18
	::Class_3_96CE54D1B5F2FEE8* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC0059BDCEE171F_CLASS_1_D065DA89A699AC6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5557080012D3E214(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_EDC0059BDCEE171F_CLASS_1_D065DA89A699AC6A_METHOD_1_5557080012D3E214_OFFSET))(this, a1, a2);
	}
};
