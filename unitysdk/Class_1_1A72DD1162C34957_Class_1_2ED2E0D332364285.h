#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_1A72DD1162C34957_CLASS_1_2ED2E0D332364285_METHOD_1_9A4CB9B3DF9E7983_OFFSET UNITYSDK_OFFSET(0x8917670)
#define CLASS_1_1A72DD1162C34957_CLASS_1_2ED2E0D332364285__CTOR_OFFSET UNITYSDK_OFFSET(0x8917660)

inline static constexpr unsigned int Class_1_1A72DD1162C34957_Class_1_2ED2E0D332364285_TypeDefinitionIndex = 66119;

class Class_1_1A72DD1162C34957_Class_1_2ED2E0D332364285 : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>* Field_1_0; // 0x10
	::Class_1_F969215F73192D65* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A72DD1162C34957_CLASS_1_2ED2E0D332364285__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A4CB9B3DF9E7983(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1A72DD1162C34957_CLASS_1_2ED2E0D332364285_METHOD_1_9A4CB9B3DF9E7983_OFFSET))(this, a1, a2);
	}
};
