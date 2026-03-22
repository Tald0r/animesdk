#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }

#define CLASS_1_9CBC8F25914F0EC9_CLASS_1_5CB6B587203E7656_METHOD_1_9671FFABF2A317B3_OFFSET UNITYSDK_OFFSET(0x92CB180)
#define CLASS_1_9CBC8F25914F0EC9_CLASS_1_5CB6B587203E7656__CTOR_OFFSET UNITYSDK_OFFSET(0x92CB170)

inline static constexpr unsigned int Class_1_9CBC8F25914F0EC9_Class_1_5CB6B587203E7656_TypeDefinitionIndex = 46207;

class Class_1_9CBC8F25914F0EC9_Class_1_5CB6B587203E7656 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_CLASS_1_5CB6B587203E7656__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9671FFABF2A317B3(::MoleMole::CharacterCommonDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterCommonDatas*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC8F25914F0EC9_CLASS_1_5CB6B587203E7656_METHOD_1_9671FFABF2A317B3_OFFSET))(this, a1);
	}
};
