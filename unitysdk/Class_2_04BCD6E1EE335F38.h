#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOverlordFeastStarRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_04BCD6E1EE335F38_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x673A250)
#define CLASS_2_04BCD6E1EE335F38_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x6739FF0)
#define CLASS_2_04BCD6E1EE335F38_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x673A3D0)
#define CLASS_2_04BCD6E1EE335F38__CTOR_OFFSET UNITYSDK_OFFSET(0x673A3C0)

inline static constexpr unsigned int Class_2_04BCD6E1EE335F38_TypeDefinitionIndex = 60416;

class Class_2_04BCD6E1EE335F38 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIOverlordFeastStarRowWidgetController*>* Field_2_1; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIOverlordFeastStarRowWidgetController*>* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
