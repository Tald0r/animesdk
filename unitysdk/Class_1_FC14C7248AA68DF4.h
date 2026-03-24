#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }

#define CLASS_1_FC14C7248AA68DF4_METHOD_1_4A8318AB1A6064AF_OFFSET UNITYSDK_OFFSET(0xB633A50)
#define CLASS_1_FC14C7248AA68DF4__CTOR_OFFSET UNITYSDK_OFFSET(0xB633E00)

inline static constexpr unsigned int Class_1_FC14C7248AA68DF4_TypeDefinitionIndex = 50235;

class Class_1_FC14C7248AA68DF4 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC14C7248AA68DF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4A8318AB1A6064AF(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_FC14C7248AA68DF4_METHOD_1_4A8318AB1A6064AF_OFFSET))(this, a1);
	}
};
