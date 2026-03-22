#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618;
class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_1;
class Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x950A950)
#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x950AA40)
#define CLASS_2_8DBD9EF207B09EBE_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x950A6C0)
#define CLASS_2_8DBD9EF207B09EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x950AA30)

inline static constexpr unsigned int Class_2_8DBD9EF207B09EBE_TypeDefinitionIndex = 50309;

class Class_2_8DBD9EF207B09EBE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618*>* Field_2_2; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_1*>* Field_2_0; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_8DBD9EF207B09EBE_Class_2_D72E10CE1BC97618_2*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBD9EF207B09EBE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
