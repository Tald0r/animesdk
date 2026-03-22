#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_D01E4789667EDF85_METHOD_1_7E751492734642B6_OFFSET UNITYSDK_OFFSET(0x6E5F6B0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_D01E4789667EDF85__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5F6A0)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_D01E4789667EDF85_TypeDefinitionIndex = 71699;

class Class_2_4D5E634299582EA8_Class_1_D01E4789667EDF85 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* Field_1_1; // 0x10
	::Foundation::AssetRequestCompleteDel* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_D01E4789667EDF85__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E751492734642B6(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_D01E4789667EDF85_METHOD_1_7E751492734642B6_OFFSET))(this, a1, a2);
	}
};
