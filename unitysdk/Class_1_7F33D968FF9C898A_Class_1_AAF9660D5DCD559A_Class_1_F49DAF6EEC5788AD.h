#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_7F33D968FF9C898A_Class_1_AAF9660D5DCD559A;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_7F33D968FF9C898A_CLASS_1_AAF9660D5DCD559A_CLASS_1_F49DAF6EEC5788AD_METHOD_1_8EC2B3A8EAC28759_OFFSET UNITYSDK_OFFSET(0x676B570)
#define CLASS_1_7F33D968FF9C898A_CLASS_1_AAF9660D5DCD559A_CLASS_1_F49DAF6EEC5788AD__CTOR_OFFSET UNITYSDK_OFFSET(0x676B560)

inline static constexpr unsigned int Class_1_7F33D968FF9C898A_Class_1_AAF9660D5DCD559A_Class_1_F49DAF6EEC5788AD_TypeDefinitionIndex = 64371;

class Class_1_7F33D968FF9C898A_Class_1_AAF9660D5DCD559A_Class_1_F49DAF6EEC5788AD : public ::System::Object
{
public:
	::Class_1_7F33D968FF9C898A_Class_1_AAF9660D5DCD559A* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_CLASS_1_AAF9660D5DCD559A_CLASS_1_F49DAF6EEC5788AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EC2B3A8EAC28759(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_CLASS_1_AAF9660D5DCD559A_CLASS_1_F49DAF6EEC5788AD_METHOD_1_8EC2B3A8EAC28759_OFFSET))(this, a1, a2);
	}
};
