#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_484467572E032327_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x97C9320)
#define CLASS_2_484467572E032327_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x97C93F0)
#define CLASS_2_484467572E032327_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x97C9160)
#define CLASS_2_484467572E032327__CTOR_OFFSET UNITYSDK_OFFSET(0x97C93E0)

inline static constexpr unsigned int Class_2_484467572E032327_TypeDefinitionIndex = 41555;

class Class_2_484467572E032327 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
