#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_3_34689E0DE2E895EE_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x6995840)
#define CLASS_3_34689E0DE2E895EE_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x69954B0)
#define CLASS_3_34689E0DE2E895EE_METHOD_3_F957A4E57475F56B_OFFSET UNITYSDK_OFFSET(0x6995640)
#define CLASS_3_34689E0DE2E895EE__CTOR_OFFSET UNITYSDK_OFFSET(0x6995930)

inline static constexpr unsigned int Class_3_34689E0DE2E895EE_TypeDefinitionIndex = 48253;

class Class_3_34689E0DE2E895EE : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Method_3_F957A4E57475F56B(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_CA832D813F452AD6<::MoleMole::UIBossChallengeBadgeWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_F957A4E57475F56B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34689E0DE2E895EE_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
