#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_64B8AF843BB0F160_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7FC2CA0)
#define CLASS_2_64B8AF843BB0F160_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7FC2D50)
#define CLASS_2_64B8AF843BB0F160_2_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x7FC2B00)
#define CLASS_2_64B8AF843BB0F160_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC2D40)

inline static constexpr unsigned int Class_2_64B8AF843BB0F160_2_TypeDefinitionIndex = 73701;

class Class_2_64B8AF843BB0F160_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_2_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
