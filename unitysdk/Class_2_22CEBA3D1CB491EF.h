#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_22CEBA3D1CB491EF_Class_2_B61CA62FFA936DEA;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRopeMakerWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x7824DD0)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x7825030)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7825120)
#define CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET UNITYSDK_OFFSET(0x7825110)

inline static constexpr unsigned int Class_2_22CEBA3D1CB491EF_TypeDefinitionIndex = 77905;

class Class_2_22CEBA3D1CB491EF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x28
	::Class_2_1F76884FC39FD584* Field_2_3; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_22CEBA3D1CB491EF_Class_2_B61CA62FFA936DEA*>* Field_2_1; // 0x38
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIRopeMakerWidgetController*>* Field_2_2; // 0x40

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
