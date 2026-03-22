#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_3_C8A53B302CCD0D73_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB032A10)
#define CLASS_3_C8A53B302CCD0D73_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0xB032680)
#define CLASS_3_C8A53B302CCD0D73_METHOD_3_F957A4E57475F56B_OFFSET UNITYSDK_OFFSET(0xB032810)
#define CLASS_3_C8A53B302CCD0D73__CTOR_OFFSET UNITYSDK_OFFSET(0xB032B00)

inline static constexpr unsigned int Class_3_C8A53B302CCD0D73_TypeDefinitionIndex = 37750;

class Class_3_C8A53B302CCD0D73 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8A53B302CCD0D73__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_C8A53B302CCD0D73_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8A53B302CCD0D73_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* Method_3_F957A4E57475F56B(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_95EF0285C16C5E7C<::MoleMole::UIBossChallengeBadgeWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_C8A53B302CCD0D73_METHOD_3_F957A4E57475F56B_OFFSET))(this, a1, a2);
	}
};
