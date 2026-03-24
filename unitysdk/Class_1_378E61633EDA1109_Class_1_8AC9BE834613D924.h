#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }

#define CLASS_1_378E61633EDA1109_CLASS_1_8AC9BE834613D924_METHOD_1_19D832490B13509A_OFFSET UNITYSDK_OFFSET(0xA73FB30)
#define CLASS_1_378E61633EDA1109_CLASS_1_8AC9BE834613D924__CTOR_OFFSET UNITYSDK_OFFSET(0xA73FB20)

inline static constexpr unsigned int Class_1_378E61633EDA1109_Class_1_8AC9BE834613D924_TypeDefinitionIndex = 58577;

class Class_1_378E61633EDA1109_Class_1_8AC9BE834613D924 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378E61633EDA1109_CLASS_1_8AC9BE834613D924__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_19D832490B13509A(::MoleMole::Config::ConfigGroupVideo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGroupVideo*))((::PBYTE)hIl2Cpp + CLASS_1_378E61633EDA1109_CLASS_1_8AC9BE834613D924_METHOD_1_19D832490B13509A_OFFSET))(this, a1);
	}
};
