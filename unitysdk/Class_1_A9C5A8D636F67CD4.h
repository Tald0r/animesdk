#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }
namespace System { class String; }

#define CLASS_1_A9C5A8D636F67CD4_METHOD_1_C7BD9F683D50F3B7_OFFSET UNITYSDK_OFFSET(0x81C8870)
#define CLASS_1_A9C5A8D636F67CD4__CTOR_OFFSET UNITYSDK_OFFSET(0x81C8A10)

inline static constexpr unsigned int Class_1_A9C5A8D636F67CD4_TypeDefinitionIndex = 69627;

class Class_1_A9C5A8D636F67CD4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C5A8D636F67CD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7BD9F683D50F3B7(::MoleMole::UIInLevelPauseChallengeRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_A9C5A8D636F67CD4_METHOD_1_C7BD9F683D50F3B7_OFFSET))(this, a1);
	}
};
