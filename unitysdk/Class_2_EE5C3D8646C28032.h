#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFashionStoreSellDetailWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_EE5C3D8646C28032_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x16622AB0)
#define CLASS_2_EE5C3D8646C28032_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16622C30)
#define CLASS_2_EE5C3D8646C28032_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x16622820)
#define CLASS_2_EE5C3D8646C28032__CTOR_OFFSET UNITYSDK_OFFSET(0x16622C20)

inline static constexpr unsigned int Class_2_EE5C3D8646C28032_TypeDefinitionIndex = 72723;

class Class_2_EE5C3D8646C28032 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_7; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIFashionStoreSellDetailWidgetController*>* Field_2_3; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::MonoUITableScrollV2* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5C3D8646C28032__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE5C3D8646C28032_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE5C3D8646C28032_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE5C3D8646C28032_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
