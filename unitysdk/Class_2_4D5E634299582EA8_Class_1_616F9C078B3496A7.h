#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7_METHOD_1_3AA99C87F4C42CEE_1_OFFSET UNITYSDK_OFFSET(0xB5A7FB0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7_METHOD_1_3AA99C87F4C42CEE_OFFSET UNITYSDK_OFFSET(0xB5A7F60)
#define CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A7F50)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_616F9C078B3496A7_TypeDefinitionIndex = 71696;

class Class_2_4D5E634299582EA8_Class_1_616F9C078B3496A7 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AA99C87F4C42CEE(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7_METHOD_1_3AA99C87F4C42CEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3AA99C87F4C42CEE_1(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_616F9C078B3496A7_METHOD_1_3AA99C87F4C42CEE_1_OFFSET))(this, a1, a2);
	}
};
