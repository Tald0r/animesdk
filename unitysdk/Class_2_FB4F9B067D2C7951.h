#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_FB4F9B067D2C7951_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x764BF30)
#define CLASS_2_FB4F9B067D2C7951_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x764BD70)
#define CLASS_2_FB4F9B067D2C7951_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x764BFE0)
#define CLASS_2_FB4F9B067D2C7951__CTOR_OFFSET UNITYSDK_OFFSET(0x764BFD0)

inline static constexpr unsigned int Class_2_FB4F9B067D2C7951_TypeDefinitionIndex = 41003;

class Class_2_FB4F9B067D2C7951 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4F9B067D2C7951__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB4F9B067D2C7951_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB4F9B067D2C7951_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4F9B067D2C7951_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
