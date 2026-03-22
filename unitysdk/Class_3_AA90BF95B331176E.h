#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class String; }

#define CLASS_3_AA90BF95B331176E_METHOD_3_082DE155818A77D8_OFFSET UNITYSDK_OFFSET(0x6712860)
#define CLASS_3_AA90BF95B331176E_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x67126F0)
#define CLASS_3_AA90BF95B331176E_METHOD_3_4F75C9B796DF2E67_OFFSET UNITYSDK_OFFSET(0x6712870)
#define CLASS_3_AA90BF95B331176E_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x6712630)
#define CLASS_3_AA90BF95B331176E__CTOR_OFFSET UNITYSDK_OFFSET(0x67127E0)

inline static constexpr unsigned int Class_3_AA90BF95B331176E_TypeDefinitionIndex = 64659;

class Class_3_AA90BF95B331176E : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::MoleMole::UIGeneralButtonController* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA90BF95B331176E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_AA90BF95B331176E_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralButtonController* Method_3_082DE155818A77D8()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA90BF95B331176E_METHOD_3_082DE155818A77D8_OFFSET))(this);
	}

	::System::Void Method_3_4F75C9B796DF2E67(::MoleMole::UIGeneralButtonController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + CLASS_3_AA90BF95B331176E_METHOD_3_4F75C9B796DF2E67_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA90BF95B331176E_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
