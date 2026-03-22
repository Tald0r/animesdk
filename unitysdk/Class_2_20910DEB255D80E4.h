#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_20910DEB255D80E4_METHOD_2_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x7C1CA80)
#define CLASS_2_20910DEB255D80E4_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x7C1C910)
#define CLASS_2_20910DEB255D80E4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7C1CC00)
#define CLASS_2_20910DEB255D80E4__CTOR_OFFSET UNITYSDK_OFFSET(0x7C1CBF0)

inline static constexpr unsigned int Class_2_20910DEB255D80E4_TypeDefinitionIndex = 54879;

class Class_2_20910DEB255D80E4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20910DEB255D80E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_20910DEB255D80E4_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_39361D1F2D1BD8E3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_20910DEB255D80E4_METHOD_2_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_20910DEB255D80E4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
