#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xE981E00)
#define CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0xE981BB0)
#define CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE981F40)
#define CLASS_2_118B0BB7260905B4__CTOR_OFFSET UNITYSDK_OFFSET(0xE981F30)

inline static constexpr unsigned int Class_2_118B0BB7260905B4_TypeDefinitionIndex = 44487;

class Class_2_118B0BB7260905B4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIWorkbenchMainPageBigBtnWidgetController*>* Field_2_7; // 0x18
	::UIControllerExtensionData* Field_2_5; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_8; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::MonoUITableScrollV2* Field_2_2; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118B0BB7260905B4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
