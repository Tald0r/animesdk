#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRopeMakerWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xFADB980)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xFADBBE0)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFADBCD0)
#define CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET UNITYSDK_OFFSET(0xFADBCC0)

inline static constexpr unsigned int Class_2_22CEBA3D1CB491EF_TypeDefinitionIndex = 50952;

class Class_2_22CEBA3D1CB491EF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIRopeMakerWidgetController*>* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8*>* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x38
	::Class_2_1F76884FC39FD584* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
