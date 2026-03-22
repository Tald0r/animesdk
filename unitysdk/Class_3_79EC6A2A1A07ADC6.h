#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_3_79EC6A2A1A07ADC6_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xADD1230)
#define CLASS_3_79EC6A2A1A07ADC6_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xADD1190)
#define CLASS_3_79EC6A2A1A07ADC6_METHOD_3_5E7B6724839713FA_OFFSET UNITYSDK_OFFSET(0xADD13B0)
#define CLASS_3_79EC6A2A1A07ADC6_METHOD_3_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0xADD1060)
#define CLASS_3_79EC6A2A1A07ADC6_METHOD_3_786B1477BFDC889D_OFFSET UNITYSDK_OFFSET(0xADD13A0)
#define CLASS_3_79EC6A2A1A07ADC6__CTOR_OFFSET UNITYSDK_OFFSET(0xADD1320)

inline static constexpr unsigned int Class_3_79EC6A2A1A07ADC6_TypeDefinitionIndex = 41189;

class Class_3_79EC6A2A1A07ADC6 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::UnityEngine::UI::Extension::UITimeWidget* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6_METHOD_3_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_786B1477BFDC889D(::UnityEngine::UI::Extension::UITimeWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6_METHOD_3_786B1477BFDC889D_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UITimeWidget* Method_3_5E7B6724839713FA()
	{
		return ((::UnityEngine::UI::Extension::UITimeWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79EC6A2A1A07ADC6_METHOD_3_5E7B6724839713FA_OFFSET))(this);
	}
};
