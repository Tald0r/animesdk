#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace System { class Action; }

#define CLASS_1_626C8DF9B8D5F08A_CLASS_1_CD6A30C31F6E596F_METHOD_1_0E9264707586F1A6_OFFSET UNITYSDK_OFFSET(0xC8BE530)
#define CLASS_1_626C8DF9B8D5F08A_CLASS_1_CD6A30C31F6E596F__CTOR_OFFSET UNITYSDK_OFFSET(0xC8BE520)

inline static constexpr unsigned int Class_1_626C8DF9B8D5F08A_Class_1_CD6A30C31F6E596F_TypeDefinitionIndex = 47285;

class Class_1_626C8DF9B8D5F08A_Class_1_CD6A30C31F6E596F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_CLASS_1_CD6A30C31F6E596F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0E9264707586F1A6(::MoleMole::Config::ConfigLevelResultPerforms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_CLASS_1_CD6A30C31F6E596F_METHOD_1_0E9264707586F1A6_OFFSET))(this, a1);
	}
};
