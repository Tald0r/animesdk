#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x80B4D00)
#define CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x80B4B40)
#define CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x80B4E40)
#define CLASS_2_E17D44E1D4CD83D1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x80B4E30)

inline static constexpr unsigned int Class_2_E17D44E1D4CD83D1_2_TypeDefinitionIndex = 47678;

class Class_2_E17D44E1D4CD83D1_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
