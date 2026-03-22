#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_7A8001399C5E1642_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x80C8180)
#define CLASS_2_7A8001399C5E1642_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x80C85A0)
#define CLASS_2_7A8001399C5E1642_METHOD_2_8770616CEB49576D_OFFSET UNITYSDK_OFFSET(0x80C83A0)
#define CLASS_2_7A8001399C5E1642_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x80C86B0)
#define CLASS_2_7A8001399C5E1642__CTOR_OFFSET UNITYSDK_OFFSET(0x80C86A0)

inline static constexpr unsigned int Class_2_7A8001399C5E1642_TypeDefinitionIndex = 66403;

class Class_2_7A8001399C5E1642 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralHeadRowWidgetController*>*>* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralHeadRowWidgetController*>*>* Method_2_8770616CEB49576D(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralHeadRowWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_8770616CEB49576D_OFFSET))(this, a1, a2);
	}
};
