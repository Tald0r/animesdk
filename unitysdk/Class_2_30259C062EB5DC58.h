#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_30259C062EB5DC58_Class_1_E86B2A10B97ED8FE;
class Class_2_30259C062EB5DC58_Class_2_D70A531C11B87052;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_30259C062EB5DC58_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x97B2A50)
#define CLASS_2_30259C062EB5DC58_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x97B2EE0)
#define CLASS_2_30259C062EB5DC58_METHOD_2_AB67BFD8CD826D9C_OFFSET UNITYSDK_OFFSET(0x97B2CC0)
#define CLASS_2_30259C062EB5DC58_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x97B3040)
#define CLASS_2_30259C062EB5DC58__CTOR_OFFSET UNITYSDK_OFFSET(0x97B3030)

inline static constexpr unsigned int Class_2_30259C062EB5DC58_TypeDefinitionIndex = 42607;

class Class_2_30259C062EB5DC58 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_30259C062EB5DC58_Class_2_D70A531C11B87052*>* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::Class_2_30259C062EB5DC58_Class_1_E86B2A10B97ED8FE*>* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_30259C062EB5DC58_Class_2_D70A531C11B87052*>* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30259C062EB5DC58__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30259C062EB5DC58_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30259C062EB5DC58_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30259C062EB5DC58_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_30259C062EB5DC58_Class_1_E86B2A10B97ED8FE*>* Method_2_AB67BFD8CD826D9C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_30259C062EB5DC58_Class_1_E86B2A10B97ED8FE*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30259C062EB5DC58_METHOD_2_AB67BFD8CD826D9C_OFFSET))(this, a1, a2);
	}
};
